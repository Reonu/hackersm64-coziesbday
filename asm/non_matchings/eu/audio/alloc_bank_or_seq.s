glabel alloc_bank_or_seq
/* 0A1B94 802E2394 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 0A1B98 802E2398 AFB20020 */  sw    $s2, 0x20($sp)
/* 0A1B9C 802E239C 00C09025 */  move  $s2, $a2
/* 0A1BA0 802E23A0 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0A1BA4 802E23A4 AFB00018 */  sw    $s0, 0x18($sp)
/* 0A1BA8 802E23A8 00A08025 */  move  $s0, $a1
/* 0A1BAC 802E23AC 00808825 */  move  $s1, $a0
/* 0A1BB0 802E23B0 2406000C */  li    $a2, 12
/* 0A1BB4 802E23B4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0A1BB8 802E23B8 8FA90068 */  lw    $t1, 0x68($sp)
/* 0A1BBC 802E23BC 24080001 */  li    $t0, 1
.L80200850:
/* 0A1BC0 802E23C0 14E000AD */  bnez  $a3, .L80200B08
/* 0A1BC4 802E23C4 3C0E8022 */   lui   $t6, %hi(gSeqLoadedPool) # $t6, 0x8022
/* 0A1BC8 802E23C8 25CE2670 */  addiu $t6, %lo(gSeqLoadedPool) # addiu $t6, $t6, 0x2670
/* 0A1BCC 802E23CC 162E0006 */  bne   $s1, $t6, .L80200878
/* 0A1BD0 802E23D0 26300194 */   addiu $s0, $s1, 0x194
/* 0A1BD4 802E23D4 3C058022 */  lui   $a1, %hi(gSeqLoadStatus) # $a1, 0x8022
/* 0A1BD8 802E23D8 24A52C58 */  addiu $a1, %lo(gSeqLoadStatus) # addiu $a1, $a1, 0x2c58
/* 0A1BDC 802E23DC AFA5003C */  sw    $a1, 0x3c($sp)
/* 0A1BE0 802E23E0 10000009 */  b     .L80200898
/* 0A1BE4 802E23E4 A3A0003B */   sb    $zero, 0x3b($sp)
.L80200878:
/* 0A1BE8 802E23E8 3C0F8022 */  lui   $t7, %hi(gBankLoadedPool) # $t7, 0x8022
/* 0A1BEC 802E23EC 25EF2840 */  addiu $t7, %lo(gBankLoadedPool) # addiu $t7, $t7, 0x2840
/* 0A1BF0 802E23F0 162F0005 */  bne   $s1, $t7, .L80200898
/* 0A1BF4 802E23F4 3C058022 */   lui   $a1, %hi(gBankLoadStatus) # $a1, 0x8022
/* 0A1BF8 802E23F8 24A52C18 */  addiu $a1, %lo(gBankLoadStatus) # addiu $a1, $a1, 0x2c18
/* 0A1BFC 802E23FC 240A0001 */  li    $t2, 1
/* 0A1C00 802E2400 A3AA003B */  sb    $t2, 0x3b($sp)
/* 0A1C04 802E2404 AFA5003C */  sw    $a1, 0x3c($sp)
.L80200898:
/* 0A1C08 802E2408 8E02001C */  lw    $v0, 0x1c($s0)
/* 0A1C0C 802E240C 2407FFFF */  li    $a3, -1
/* 0A1C10 802E2410 8FA5003C */  lw    $a1, 0x3c($sp)
/* 0A1C14 802E2414 14E20003 */  bne   $a3, $v0, .L802008B4
/* 0A1C18 802E2418 93AA003B */   lbu   $t2, 0x3b($sp)
/* 0A1C1C 802E241C 10000003 */  b     .L802008BC
/* 0A1C20 802E2420 00001825 */   move  $v1, $zero
.L802008B4:
/* 0A1C24 802E2424 0045C021 */  addu  $t8, $v0, $a1
/* 0A1C28 802E2428 93030000 */  lbu   $v1, ($t8)
.L802008BC:
/* 0A1C2C 802E242C 8E020028 */  lw    $v0, 0x28($s0)
/* 0A1C30 802E2430 14E20003 */  bne   $a3, $v0, .L802008D0
/* 0A1C34 802E2434 0045C821 */   addu  $t9, $v0, $a1
/* 0A1C38 802E2438 10000002 */  b     .L802008D4
/* 0A1C3C 802E243C 00002025 */   move  $a0, $zero
.L802008D0:
/* 0A1C40 802E2440 93240000 */  lbu   $a0, ($t9)
.L802008D4:
/* 0A1C44 802E2444 14600003 */  bnez  $v1, .L802008E4
/* 0A1C48 802E2448 00601025 */   move  $v0, $v1
/* 0A1C4C 802E244C 1000001D */  b     .L80200954
/* 0A1C50 802E2450 AE000000 */   sw    $zero, ($s0)
.L802008E4:
/* 0A1C54 802E2454 14800004 */  bnez  $a0, .L802008F8
/* 0A1C58 802E2458 00801825 */   move  $v1, $a0
/* 0A1C5C 802E245C 240B0001 */  li    $t3, 1
/* 0A1C60 802E2460 10000018 */  b     .L80200954
/* 0A1C64 802E2464 AE0B0000 */   sw    $t3, ($s0)
.L802008F8:
/* 0A1C68 802E2468 24040003 */  li    $a0, 3
/* 0A1C6C 802E246C 14820003 */  bne   $a0, $v0, .L8020090C
/* 0A1C70 802E2470 00000000 */   nop
/* 0A1C74 802E2474 50830014 */  beql  $a0, $v1, .L80200958
/* 0A1C78 802E2478 8E0E0000 */   lw    $t6, ($s0)
.L8020090C:
/* 0A1C7C 802E247C 14820003 */  bne   $a0, $v0, .L8020091C
/* 0A1C80 802E2480 00000000 */   nop
/* 0A1C84 802E2484 1000000F */  b     .L80200954
/* 0A1C88 802E2488 AE000000 */   sw    $zero, ($s0)
.L8020091C:
/* 0A1C8C 802E248C 14830003 */  bne   $a0, $v1, .L8020092C
/* 0A1C90 802E2490 240C0001 */   li    $t4, 1
/* 0A1C94 802E2494 1000000B */  b     .L80200954
/* 0A1C98 802E2498 AE0C0000 */   sw    $t4, ($s0)
.L8020092C:
/* 0A1C9C 802E249C 11020003 */  beq   $t0, $v0, .L8020093C
/* 0A1CA0 802E24A0 00000000 */   nop
/* 0A1CA4 802E24A4 10000007 */  b     .L80200954
/* 0A1CA8 802E24A8 AE000000 */   sw    $zero, ($s0)
.L8020093C:
/* 0A1CAC 802E24AC 11030003 */  beq   $t0, $v1, .L8020094C
/* 0A1CB0 802E24B0 240D0001 */   li    $t5, 1
/* 0A1CB4 802E24B4 10000003 */  b     .L80200954
/* 0A1CB8 802E24B8 AE0D0000 */   sw    $t5, ($s0)
.L8020094C:
/* 0A1CBC 802E24BC 10000099 */  b     .L80200BB4
/* 0A1CC0 802E24C0 00001025 */   move  $v0, $zero
.L80200954:
/* 0A1CC4 802E24C4 8E0E0000 */  lw    $t6, ($s0)
.L80200958:
/* 0A1CC8 802E24C8 01C60019 */  multu $t6, $a2
/* 0A1CCC 802E24CC 00007812 */  mflo  $t7
/* 0A1CD0 802E24D0 020FC021 */  addu  $t8, $s0, $t7
/* 0A1CD4 802E24D4 8F02001C */  lw    $v0, 0x1c($t8)
/* 0A1CD8 802E24D8 10E20010 */  beq   $a3, $v0, .L802009AC
/* 0A1CDC 802E24DC 00A2C821 */   addu  $t9, $a1, $v0
/* 0A1CE0 802E24E0 150A000E */  bne   $t0, $t2, .L802009AC
/* 0A1CE4 802E24E4 A3200000 */   sb    $zero, ($t9)
/* 0A1CE8 802E24E8 8E0B0000 */  lw    $t3, ($s0)
/* 0A1CEC 802E24EC 01660019 */  multu $t3, $a2
/* 0A1CF0 802E24F0 00006012 */  mflo  $t4
/* 0A1CF4 802E24F4 020C6821 */  addu  $t5, $s0, $t4
/* 0A1CF8 802E24F8 8DA4001C */  lw    $a0, 0x1c($t5)
/* 0A1CFC 802E24FC A3AA003B */  sb    $t2, 0x3b($sp)
/* 0A1D00 802E2500 AFA90068 */  sw    $t1, 0x68($sp)
/* 0A1D04 802E2504 0C0B87A3 */  jal   discard_bank
/* 0A1D08 802E2508 AFA5003C */   sw    $a1, 0x3c($sp)
/* 0A1D0C 802E250C 8FA5003C */  lw    $a1, 0x3c($sp)
/* 0A1D10 802E2510 24080001 */  li    $t0, 1
/* 0A1D14 802E2514 8FA90068 */  lw    $t1, 0x68($sp)
/* 0A1D18 802E2518 93AA003B */  lbu   $t2, 0x3b($sp)
.L802009AC:
/* 0A1D1C 802E251C 8E040000 */  lw    $a0, ($s0)
/* 0A1D20 802E2520 24010001 */  li    $at, 1
/* 0A1D24 802E2524 26230198 */  addiu $v1, $s1, 0x198
/* 0A1D28 802E2528 50800006 */  beql  $a0, $zero, .L802009D4
/* 0A1D2C 802E252C 8C6E0000 */   lw    $t6, ($v1)
/* 0A1D30 802E2530 1081002B */  beq   $a0, $at, .L80200A70
/* 0A1D34 802E2534 26230198 */   addiu $v1, $s1, 0x198
/* 0A1D38 802E2538 1000007A */  b     .L80200BB4
/* 0A1D3C 802E253C 00001025 */   move  $v0, $zero
/* 0A1D40 802E2540 8C6E0000 */  lw    $t6, ($v1)
.L802009D4:
/* 0A1D44 802E2544 AE09001C */  sw    $t1, 0x1c($s0)
/* 0A1D48 802E2548 AE120018 */  sw    $s2, 0x18($s0)
/* 0A1D4C 802E254C AE0E0014 */  sw    $t6, 0x14($s0)
/* 0A1D50 802E2550 8C6F0000 */  lw    $t7, ($v1)
/* 0A1D54 802E2554 01F21021 */  addu  $v0, $t7, $s2
/* 0A1D58 802E2558 AC620004 */  sw    $v0, 4($v1)
/* 0A1D5C 802E255C 8E180020 */  lw    $t8, 0x20($s0)
/* 0A1D60 802E2560 0302082B */  sltu  $at, $t8, $v0
/* 0A1D64 802E2564 50200019 */  beql  $at, $zero, .L80200A5C
/* 0A1D68 802E2568 8E030014 */   lw    $v1, 0x14($s0)
/* 0A1D6C 802E256C 8E190028 */  lw    $t9, 0x28($s0)
/* 0A1D70 802E2570 00B95821 */  addu  $t3, $a1, $t9
/* 0A1D74 802E2574 11400005 */  beqz  $t2, .L80200A1C
/* 0A1D78 802E2578 A1600000 */   sb    $zero, ($t3)
/* 0A1D7C 802E257C 51480009 */  beql  $t2, $t0, .L80200A34
/* 0A1D80 802E2580 8E040028 */   lw    $a0, 0x28($s0)
/* 0A1D84 802E2584 1000000B */  b     .L80200A44
/* 0A1D88 802E2588 240CFFFF */   li    $t4, -1
.L80200A1C:
/* 0A1D8C 802E258C 8E040028 */  lw    $a0, 0x28($s0)
/* 0A1D90 802E2590 0C0B87DC */  jal   discard_sequence
/* 0A1D94 802E2594 AFA3002C */   sw    $v1, 0x2c($sp)
/* 0A1D98 802E2598 10000005 */  b     .L80200A40
/* 0A1D9C 802E259C 8FA3002C */   lw    $v1, 0x2c($sp)
/* 0A1DA0 802E25A0 8E040028 */  lw    $a0, 0x28($s0)
.L80200A34:
/* 0A1DA4 802E25A4 0C0B87A3 */  jal   discard_bank
/* 0A1DA8 802E25A8 AFA3002C */   sw    $v1, 0x2c($sp)
/* 0A1DAC 802E25AC 8FA3002C */  lw    $v1, 0x2c($sp)
.L80200A40:
/* 0A1DB0 802E25B0 240CFFFF */  li    $t4, -1
.L80200A44:
/* 0A1DB4 802E25B4 AE0C0028 */  sw    $t4, 0x28($s0)
/* 0A1DB8 802E25B8 8C6E0008 */  lw    $t6, 8($v1)
/* 0A1DBC 802E25BC 8C6D0000 */  lw    $t5, ($v1)
/* 0A1DC0 802E25C0 01AE7821 */  addu  $t7, $t5, $t6
/* 0A1DC4 802E25C4 AE0F0020 */  sw    $t7, 0x20($s0)
/* 0A1DC8 802E25C8 8E030014 */  lw    $v1, 0x14($s0)
.L80200A5C:
/* 0A1DCC 802E25CC 8E180000 */  lw    $t8, ($s0)
/* 0A1DD0 802E25D0 00601025 */  move  $v0, $v1
/* 0A1DD4 802E25D4 3B190001 */  xori  $t9, $t8, 1
/* 0A1DD8 802E25D8 10000052 */  b     .L80200BB4
/* 0A1DDC 802E25DC AE190000 */   sw    $t9, ($s0)
.L80200A70:
/* 0A1DE0 802E25E0 8C6B0000 */  lw    $t3, ($v1)
/* 0A1DE4 802E25E4 8C6C0008 */  lw    $t4, 8($v1)
/* 0A1DE8 802E25E8 AE090028 */  sw    $t1, 0x28($s0)
/* 0A1DEC 802E25EC AE120024 */  sw    $s2, 0x24($s0)
/* 0A1DF0 802E25F0 016C6821 */  addu  $t5, $t3, $t4
/* 0A1DF4 802E25F4 01B27023 */  subu  $t6, $t5, $s2
/* 0A1DF8 802E25F8 25C2FFF0 */  addiu $v0, $t6, -0x10
/* 0A1DFC 802E25FC AE020020 */  sw    $v0, 0x20($s0)
/* 0A1E00 802E2600 8C780004 */  lw    $t8, 4($v1)
/* 0A1E04 802E2604 0058082B */  sltu  $at, $v0, $t8
/* 0A1E08 802E2608 10200017 */  beqz  $at, .L80200AF8
/* 0A1E0C 802E260C 00000000 */   nop
/* 0A1E10 802E2610 8E19001C */  lw    $t9, 0x1c($s0)
/* 0A1E14 802E2614 00B95821 */  addu  $t3, $a1, $t9
/* 0A1E18 802E2618 11400005 */  beqz  $t2, .L80200AC0
/* 0A1E1C 802E261C A1600000 */   sb    $zero, ($t3)
/* 0A1E20 802E2620 51480009 */  beql  $t2, $t0, .L80200AD8
/* 0A1E24 802E2624 8E04001C */   lw    $a0, 0x1c($s0)
/* 0A1E28 802E2628 1000000B */  b     .L80200AE8
/* 0A1E2C 802E262C 240CFFFF */   li    $t4, -1
.L80200AC0:
/* 0A1E30 802E2630 8E04001C */  lw    $a0, 0x1c($s0)
/* 0A1E34 802E2634 0C0B87DC */  jal   discard_sequence
/* 0A1E38 802E2638 AFA3002C */   sw    $v1, 0x2c($sp)
/* 0A1E3C 802E263C 10000005 */  b     .L80200AE4
/* 0A1E40 802E2640 8FA3002C */   lw    $v1, 0x2c($sp)
/* 0A1E44 802E2644 8E04001C */  lw    $a0, 0x1c($s0)
.L80200AD8:
/* 0A1E48 802E2648 0C0B87A3 */  jal   discard_bank
/* 0A1E4C 802E264C AFA3002C */   sw    $v1, 0x2c($sp)
/* 0A1E50 802E2650 8FA3002C */  lw    $v1, 0x2c($sp)
.L80200AE4:
/* 0A1E54 802E2654 240CFFFF */  li    $t4, -1
.L80200AE8:
/* 0A1E58 802E2658 AE0C001C */  sw    $t4, 0x1c($s0)
/* 0A1E5C 802E265C 8C6D0000 */  lw    $t5, ($v1)
/* 0A1E60 802E2660 AC6D0004 */  sw    $t5, 4($v1)
/* 0A1E64 802E2664 8E020020 */  lw    $v0, 0x20($s0)
.L80200AF8:
/* 0A1E68 802E2668 1000FFD8 */  b     .L80200A5C
/* 0A1E6C 802E266C 00401825 */   move  $v1, $v0
/* 0A1E70 802E2670 1000002C */  b     .L80200BB4
/* 0A1E74 802E2674 00001025 */   move  $v0, $zero
.L80200B08:
/* 0A1E78 802E2678 02120019 */  multu $s0, $s2
/* 0A1E7C 802E267C 26240004 */  addiu $a0, $s1, 4
/* 0A1E80 802E2680 AFA70064 */  sw    $a3, 0x64($sp)
/* 0A1E84 802E2684 AFA90068 */  sw    $t1, 0x68($sp)
/* 0A1E88 802E2688 00002812 */  mflo  $a1
/* 0A1E8C 802E268C 0C0B87F8 */  jal   soundAlloc
/* 0A1E90 802E2690 00000000 */   nop
/* 0A1E94 802E2694 8E2E0000 */  lw    $t6, ($s1)
/* 0A1E98 802E2698 2406000C */  li    $a2, 12
/* 0A1E9C 802E269C 8FA70064 */  lw    $a3, 0x64($sp)
/* 0A1EA0 802E26A0 01C60019 */  multu $t6, $a2
/* 0A1EA4 802E26A4 8FA90068 */  lw    $t1, 0x68($sp)
/* 0A1EA8 802E26A8 24080001 */  li    $t0, 1
/* 0A1EAC 802E26AC 24010002 */  li    $at, 2
/* 0A1EB0 802E26B0 00007812 */  mflo  $t7
/* 0A1EB4 802E26B4 022FC021 */  addu  $t8, $s1, $t7
/* 0A1EB8 802E26B8 14400009 */  bnez  $v0, .L80200B70
/* 0A1EBC 802E26BC AF020014 */   sw    $v0, 0x14($t8)
/* 0A1EC0 802E26C0 10E80005 */  beq   $a3, $t0, .L80200B68
/* 0A1EC4 802E26C4 00000000 */   nop
/* 0A1EC8 802E26C8 54E10006 */  bnel  $a3, $at, .L80200B74
/* 0A1ECC 802E26CC 8E390000 */   lw    $t9, ($s1)
/* 0A1ED0 802E26D0 1000FF3B */  b     .L80200850
/* 0A1ED4 802E26D4 00003825 */   move  $a3, $zero
.L80200B68:
/* 0A1ED8 802E26D8 10000012 */  b     .L80200BB4
/* 0A1EDC 802E26DC 00001025 */   move  $v0, $zero
.L80200B70:
/* 0A1EE0 802E26E0 8E390000 */  lw    $t9, ($s1)
.L80200B74:
/* 0A1EE4 802E26E4 03260019 */  multu $t9, $a2
/* 0A1EE8 802E26E8 00005812 */  mflo  $t3
/* 0A1EEC 802E26EC 022B6021 */  addu  $t4, $s1, $t3
/* 0A1EF0 802E26F0 AD89001C */  sw    $t1, 0x1c($t4)
/* 0A1EF4 802E26F4 8E2D0000 */  lw    $t5, ($s1)
/* 0A1EF8 802E26F8 01A60019 */  multu $t5, $a2
/* 0A1EFC 802E26FC 00007012 */  mflo  $t6
/* 0A1F00 802E2700 022E7821 */  addu  $t7, $s1, $t6
/* 0A1F04 802E2704 ADF20018 */  sw    $s2, 0x18($t7)
/* 0A1F08 802E2708 8E230000 */  lw    $v1, ($s1)
/* 0A1F0C 802E270C 00660019 */  multu $v1, $a2
/* 0A1F10 802E2710 246B0001 */  addiu $t3, $v1, 1
/* 0A1F14 802E2714 0000C012 */  mflo  $t8
/* 0A1F18 802E2718 0238C821 */  addu  $t9, $s1, $t8
/* 0A1F1C 802E271C 8F220014 */  lw    $v0, 0x14($t9)
/* 0A1F20 802E2720 AE2B0000 */  sw    $t3, ($s1)
.L80200BB4:
/* 0A1F24 802E2724 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0A1F28 802E2728 8FB00018 */  lw    $s0, 0x18($sp)
/* 0A1F2C 802E272C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0A1F30 802E2730 8FB20020 */  lw    $s2, 0x20($sp)
/* 0A1F34 802E2734 03E00008 */  jr    $ra
/* 0A1F38 802E2738 27BD0058 */   addiu $sp, $sp, 0x58
