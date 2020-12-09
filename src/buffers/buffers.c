#include <ultra64.h>
#include <hvqm2dec.h>

#include "buffers.h"
#include <game/hvqm.h>
#include "config.h"

ALIGNED8 u8 gDecompressionHeap[0xD000];
#if defined(VERSION_EU)
ALIGNED16 u8 gAudioHeap[DOUBLE_SIZE_ON_64_BIT(0x31200) - 0x3800];
#elif defined(VERSION_SH)
ALIGNED16 u8 gAudioHeap[DOUBLE_SIZE_ON_64_BIT(0x31200) - 0x4800];
#else
ALIGNED16 u8 gAudioHeap[DOUBLE_SIZE_ON_64_BIT(0x31200)];
#endif

ALIGNED8 u8 gIdleThreadStack[0x800];
ALIGNED8 u8 gThread3Stack[0x2000];
ALIGNED8 u8 gThread4Stack[0x2000];
ALIGNED8 u8 gThread5Stack[0x2000];
#if ENABLE_RUMBLE
ALIGNED8 u8 gThread6Stack[0x2000];
#endif
// 0x400 bytes
ALIGNED8 u8 gGfxSPTaskStack[SP_DRAM_STACK_SIZE8];
// 0xc00 bytes for f3dex, 0x900 otherwise
ALIGNED8 u8 gGfxSPTaskYieldBuffer[OS_YIELD_DATA_SIZE];
// 0x200 bytes
ALIGNED8 struct SaveBuffer gSaveBuffer;
// 0x190a0 bytes
struct GfxPool gGfxPools[2];


// Yield buffer for audio, 0x400 bytes. Stubbed out post-JP since the audio
// task never yields.
#ifdef VERSION_JP
ALIGNED8 u8 gAudioSPTaskYieldBuffer[OS_YIELD_AUDIO_SIZE];
#endif

// Probably Thread 2 stack space. Unreferenced, and stubbed out with f3dex to
// avoid an overflowing .buffers segment.
#if !defined(F3DEX_GBI_SHARED) && !defined(VERSION_EU)
ALIGNED8 u8 gUnusedThread2Stack[0x1400];
#endif

ALIGNED16 u8 hvqbuf[HVQ_DATASIZE_MAX];

ALIGNED16 u64 hvq_yieldbuf[HVQM2_YIELD_DATA_SIZE/8];
ALIGNED16 u8 adpcmbuf[AUDIO_RECORD_SIZE_MAX];
ALIGNED16 u16 hvqwork[(MAXWIDTH/8)*(MAXHEIGHT/4)*4];

// Data area for the HVQ microcode
ALIGNED16 HVQM2Info hvq_spfifo[HVQ_SPFIFO_SIZE];


