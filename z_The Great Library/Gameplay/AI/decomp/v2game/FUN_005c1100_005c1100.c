// FUN_005c1100 @ 005c1100 body=[[005c1100, 005c117a] [005c117e, 005c11d2] [005c11d6, 005c12c0] [005c12c4, 005c12df] [005c12e3, 005c1301] [005c1305, 005c1351] [005c1355, 005c1397] [005c139b, 005c14a4] [005c14a8, 005c14c3] [005c14c7, 005c14e6] [005c14ea, 005c15dd] [005c15e1, 005c15fc] [005c1600, 005c161e] [005c1622, 005c166e] [005c1672, 005c16b4] [005c16b8, 005c17a6] [005c17aa, 005c17c5] [005c17c9, 005c17e7] [005c17eb, 005c1835] [005c1839, 005c1868] [005c186c, 005c18ad] [005c18b1, 005c18f5] [005c18f9, 005c190d]]


undefined1 * FUN_005c1100(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 **ppuStack_e0;
  undefined4 **ppuStack_dc;
  uint *puStack_d8;
  uint *puStack_d4;
  undefined1 local_c4 [4];
  char *local_c0;
  undefined4 local_b0;
  char local_ac [4];
  char *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  char local_98 [4];
  char *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  char *local_84 [4];
  undefined4 local_74;
  uint local_70;
  int *local_68;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  char *local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined4 *local_2c;
  char local_28 [4];
  char *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b7175f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  puStack_d4 = (uint *)local_48;
  local_b0 = 1;
  puStack_d8 = (uint *)0x5c1157;
  local_68 = in_ECX;
  ppuStack_e0 = (undefined4 **)(**(code **)(*in_ECX + 0x20))();
  puStack_d8 = (uint *)0xffffffff;
  ppuStack_dc = (undefined4 **)0x0;
  local_8 = 1;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_34) {
    puStack_d8 = (uint *)local_48[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_dc = (undefined4 **)&UNK_005c117b;
    FUN_00aae91b();
  }
  puStack_d8 = (uint *)0x1;
  ppuStack_dc = (undefined4 **)&DAT_00dee2cc;
  ppuStack_e0 = (undefined4 **)0x5c118c;
  FUN_00448740();
  puStack_d8 = (uint *)0xd;
  ppuStack_dc = (undefined4 **)0xe02998;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  ppuStack_e0 = (undefined4 **)0x5c11a9;
  FUN_00409350();
  puStack_d8 = local_64;
  ppuStack_dc = (undefined4 **)local_c4;
  local_8 = 2;
  ppuStack_e0 = (undefined4 **)0x5c11c0;
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  if (0xf < local_50) {
    puStack_d8 = (uint *)local_64[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_dc = (undefined4 **)&UNK_005c11d3;
    FUN_00aae91b();
  }
  puStack_d8 = (uint *)0x4;
  ppuStack_dc = (undefined4 **)&DAT_00e029a8;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = (char *)((uint)local_84[0] & 0xffffff00);
  ppuStack_e0 = (undefined4 **)0x5c11f7;
  FUN_00409350();
  local_8._0_1_ = 5;
  puStack_d8 = (uint *)local_48;
  ppuStack_dc = (undefined4 **)0x5c1208;
  ppuStack_dc = (undefined4 **)(**(code **)(*in_ECX + 0x38))();
  ppuStack_e0 = (undefined4 **)local_28;
  local_8._0_1_ = 6;
  puVar1 = (undefined4 *)FUN_009a8ee0();
  ppuStack_dc = (undefined4 **)0x38;
  local_8._0_1_ = 7;
  ppuStack_e0 = (undefined4 **)0x5c1223;
  puVar2 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 8;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = local_c4;
    ppuStack_dc = (undefined4 **)0xffffffff;
    *puVar2 = &PTR_FUN_00e38ecc;
    ppuStack_e0 = (undefined4 **)0x0;
    puVar2[7] = 0xf;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    local_14 = puVar2;
    FUN_00408ed0(local_84);
    *puVar2 = &PTR_FUN_00e38f08;
    local_2c = puVar2 + 9;
    *local_2c = *puVar1;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    local_8._0_1_ = 10;
    ppuStack_dc = (undefined4 **)0x5c127f;
    FUN_009a97b0();
  }
  ppuStack_dc = &local_14;
  local_8._0_1_ = 7;
  ppuStack_e0 = (undefined4 **)local_84;
  local_14 = puVar2;
  FUN_009e6810();
  local_8._0_1_ = 0xb;
  ppuStack_dc = (undefined4 **)0x5c12a9;
  FUN_009adb70();
  if (local_24 != (char *)0x0) {
    ppuStack_dc = (undefined4 **)0x5c12b8;
    FUN_009e6a80();
    ppuStack_dc = (undefined4 **)local_24;
                    /* WARNING: Subroutine does not return */
    ppuStack_e0 = (undefined4 **)&UNK_005c12c1;
    FUN_00aae91b();
  }
  local_24 = (char *)0x0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_34) {
    ppuStack_dc = (undefined4 **)local_48[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_e0 = (undefined4 **)&UNK_005c12e0;
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = (char *)((uint)local_48[0] & 0xffffff00);
  if (0xf < local_70) {
    ppuStack_dc = (undefined4 **)local_84[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_e0 = (undefined4 **)&UNK_005c1302;
    FUN_00aae91b();
  }
  ppuStack_dc = (undefined4 **)0x5c130a;
  iVar3 = FUN_00475500();
  ppuStack_e0 = (undefined4 **)*(undefined8 *)(iVar3 + 0x74);
  ppuStack_dc = (undefined4 **)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20);
  uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                       (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20));
  ppuStack_dc = (undefined4 **)0xffffffff;
  ppuStack_e0 = (undefined4 **)0x0;
  local_8._0_1_ = 0xc;
  FUN_00448aa0(uVar4);
  local_8._0_1_ = 4;
  if (0xf < local_34) {
    ppuStack_dc = (undefined4 **)local_48[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_e0 = (undefined4 **)&UNK_005c1352;
    FUN_00aae91b();
  }
  ppuStack_dc = (undefined4 **)0xe;
  ppuStack_e0 = (undefined4 **)0xe029b0;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = (char *)((uint)local_84[0] & 0xffffff00);
  FUN_00409350();
  ppuStack_dc = (undefined4 **)local_84;
  ppuStack_e0 = (undefined4 **)local_98;
  local_8._0_1_ = 0xd;
  FUN_009a8ee0();
  local_8._0_1_ = 0xf;
  if (0xf < local_70) {
    ppuStack_dc = (undefined4 **)local_84[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_e0 = (undefined4 **)&UNK_005c1398;
    FUN_00aae91b();
  }
  ppuStack_dc = (undefined4 **)0x4;
  ppuStack_e0 = (undefined4 **)&DAT_00e029a8;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = (char *)((uint)local_84[0] & 0xffffff00);
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x10;
  ppuStack_dc = (undefined4 **)0x2;
  local_2c = &ppuStack_e0;
  if ((local_68[0x1d] == 0) || (*(char *)(local_68[0x1d] + 0x164) == '\0')) {
    ppuStack_e0 = (undefined4 **)local_68[0x10];
  }
  else {
    ppuStack_e0 = (undefined4 **)0x0;
  }
  ppuStack_dc = (undefined4 **)FUN_00988a50(local_48);
  ppuStack_e0 = (undefined4 **)local_28;
  local_8._0_1_ = 0x11;
  puVar1 = (undefined4 *)FUN_009a8ee0();
  ppuStack_dc = (undefined4 **)0x38;
  local_8._0_1_ = 0x12;
  ppuStack_e0 = (undefined4 **)0x5c1407;
  puVar2 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x13;
  local_2c = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    ppuStack_dc = (undefined4 **)0xffffffff;
    *puVar2 = &PTR_FUN_00e38ecc;
    puVar2[1] = local_98;
    ppuStack_e0 = (undefined4 **)0x0;
    puVar2[7] = 0xf;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    FUN_00408ed0(local_64);
    *puVar2 = &PTR_FUN_00e38f08;
    local_14 = puVar2 + 9;
    *local_14 = *puVar1;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    local_8._0_1_ = 0x15;
    ppuStack_dc = (undefined4 **)0x5c1463;
    FUN_009a97b0();
    local_14 = puVar2;
  }
  ppuStack_dc = &local_14;
  local_8._0_1_ = 0x12;
  ppuStack_e0 = (undefined4 **)local_64;
  FUN_009e6810();
  local_8._0_1_ = 0x16;
  ppuStack_dc = (undefined4 **)0x5c148d;
  FUN_009adb70();
  if (local_24 != (char *)0x0) {
    ppuStack_dc = (undefined4 **)0x5c149c;
    FUN_009e6a80();
    ppuStack_dc = (undefined4 **)local_24;
                    /* WARNING: Subroutine does not return */
    ppuStack_e0 = (undefined4 **)&UNK_005c14a5;
    FUN_00aae91b();
  }
  local_24 = (char *)0x0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_34) {
    ppuStack_dc = (undefined4 **)local_48[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_e0 = (undefined4 **)&UNK_005c14c4;
    FUN_00aae91b();
  }
  local_8._0_1_ = 0xf;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = (char *)((uint)local_48[0] & 0xffffff00);
  if (0xf < local_50) {
    ppuStack_dc = (undefined4 **)local_64[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_e0 = (undefined4 **)&UNK_005c14e7;
    FUN_00aae91b();
  }
  ppuStack_dc = (undefined4 **)0x3;
  ppuStack_e0 = (undefined4 **)&DAT_00dfad2c;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x17;
  ppuStack_dc = (undefined4 **)0x2;
  local_2c = &ppuStack_e0;
  ppuStack_e0 = *(undefined4 ***)(local_68[0xe] + 0xb4);
  ppuStack_dc = (undefined4 **)FUN_00988a50(local_48);
  ppuStack_e0 = (undefined4 **)local_28;
  local_8._0_1_ = 0x18;
  puVar1 = (undefined4 *)FUN_009a8ee0();
  ppuStack_dc = (undefined4 **)0x38;
  local_8._0_1_ = 0x19;
  ppuStack_e0 = (undefined4 **)0x5c1540;
  puVar2 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x1a;
  local_2c = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = local_98;
    ppuStack_dc = (undefined4 **)0xffffffff;
    *puVar2 = &PTR_FUN_00e38ecc;
    ppuStack_e0 = (undefined4 **)0x0;
    puVar2[7] = 0xf;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    FUN_00408ed0(local_64);
    *puVar2 = &PTR_FUN_00e38f08;
    local_14 = puVar2 + 9;
    *local_14 = *puVar1;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    local_8._0_1_ = 0x1c;
    ppuStack_dc = (undefined4 **)0x5c159c;
    FUN_009a97b0();
    local_14 = puVar2;
  }
  ppuStack_dc = &local_14;
  local_8._0_1_ = 0x19;
  ppuStack_e0 = (undefined4 **)local_64;
  FUN_009e6810();
  local_8._0_1_ = 0x1d;
  ppuStack_dc = (undefined4 **)0x5c15c6;
  FUN_009adb70();
  if (local_24 != (char *)0x0) {
    ppuStack_dc = (undefined4 **)0x5c15d5;
    FUN_009e6a80();
    ppuStack_dc = (undefined4 **)local_24;
                    /* WARNING: Subroutine does not return */
    ppuStack_e0 = (undefined4 **)&UNK_005c15de;
    FUN_00aae91b();
  }
  local_24 = (char *)0x0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_34) {
    ppuStack_dc = (undefined4 **)local_48[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_e0 = (undefined4 **)&UNK_005c15fd;
    FUN_00aae91b();
  }
  local_8._0_1_ = 0xf;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = (char *)((uint)local_48[0] & 0xffffff00);
  if (0xf < local_50) {
    ppuStack_dc = (undefined4 **)local_64[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_e0 = (undefined4 **)&UNK_005c161f;
    FUN_00aae91b();
  }
  ppuStack_dc = (undefined4 **)0x5c1627;
  iVar3 = FUN_00475500();
  ppuStack_e0 = (undefined4 **)*(undefined8 *)(iVar3 + 0x74);
  ppuStack_dc = (undefined4 **)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20);
  uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                       (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20));
  ppuStack_dc = (undefined4 **)0xffffffff;
  ppuStack_e0 = (undefined4 **)0x0;
  local_8._0_1_ = 0x1e;
  FUN_00448aa0(uVar4);
  local_8._0_1_ = 0xf;
  if (0xf < local_34) {
    ppuStack_dc = (undefined4 **)local_48[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_e0 = (undefined4 **)&UNK_005c166f;
    FUN_00aae91b();
  }
  ppuStack_dc = (undefined4 **)0x8;
  ppuStack_e0 = (undefined4 **)0xe01a8c;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350();
  ppuStack_dc = (undefined4 **)local_64;
  ppuStack_e0 = (undefined4 **)local_ac;
  local_8._0_1_ = 0x1f;
  FUN_009a8ee0();
  local_8._0_1_ = 0x21;
  if (0xf < local_50) {
    ppuStack_dc = (undefined4 **)local_64[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_e0 = (undefined4 **)&UNK_005c16b5;
    FUN_00aae91b();
  }
  ppuStack_dc = (undefined4 **)0x4;
  ppuStack_e0 = (undefined4 **)&DAT_00df7e80;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = (char *)((uint)local_84[0] & 0xffffff00);
  FUN_00409350();
  local_8._0_1_ = 0x22;
  ppuStack_dc = (undefined4 **)local_48;
  ppuStack_e0 = (undefined4 **)0x5c16ee;
  ppuStack_e0 = (undefined4 **)(**(code **)(*(int *)local_68[0xe] + 0x18))();
  local_8._0_1_ = 0x23;
  puVar1 = (undefined4 *)FUN_009a8ee0(local_28);
  ppuStack_e0 = (undefined4 **)0x38;
  local_8._0_1_ = 0x24;
  puVar2 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x25;
  local_2c = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = local_ac;
    ppuStack_e0 = (undefined4 **)0xffffffff;
    *puVar2 = &PTR_FUN_00e38ecc;
    puVar2[7] = 0xf;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    FUN_00408ed0(local_84,0);
    *puVar2 = &PTR_FUN_00e38f08;
    local_14 = puVar2 + 9;
    *local_14 = *puVar1;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    local_8._0_1_ = 0x27;
    ppuStack_e0 = (undefined4 **)0x5c1765;
    FUN_009a97b0();
    local_14 = puVar2;
  }
  ppuStack_e0 = &local_14;
  local_8._0_1_ = 0x24;
  FUN_009e6810(local_84);
  local_8._0_1_ = 0x28;
  ppuStack_e0 = (undefined4 **)0x5c178f;
  FUN_009adb70();
  if ((undefined4 **)local_24 != (undefined4 **)0x0) {
    ppuStack_e0 = (undefined4 **)0x5c179e;
    FUN_009e6a80();
    ppuStack_e0 = (undefined4 **)local_24;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = (char *)0x0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_34) {
    ppuStack_e0 = (undefined4 **)local_48[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x21;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = (char *)((uint)local_48[0] & 0xffffff00);
  if (0xf < local_70) {
    ppuStack_e0 = (undefined4 **)local_84[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppuStack_e0 = (undefined4 **)0x5c17f0;
  iVar3 = FUN_00475500();
  ppuStack_e0 = (undefined4 **)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20);
  uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                       (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                       (int)*(undefined8 *)(iVar3 + 0x74));
  ppuStack_e0 = (undefined4 **)0xffffffff;
  local_8._0_1_ = 0x29;
  FUN_00448aa0(uVar4,0);
  if (0xf < local_34) {
    ppuStack_e0 = (undefined4 **)local_48[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x2a;
  ppuStack_e0 = (undefined4 **)0x5c1848;
  FUN_009adb70();
  if ((undefined4 **)local_a8 != (undefined4 **)0x0) {
    ppuStack_e0 = (undefined4 **)0x5c185d;
    FUN_009e6a80();
    ppuStack_e0 = (undefined4 **)local_a8;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a8 = (char *)0x0;
  local_a4 = 0;
  local_a0 = 0;
  local_8 = CONCAT31(local_8._1_3_,0x2b);
  ppuStack_e0 = (undefined4 **)0x5c188d;
  FUN_009adb70();
  if ((undefined4 **)local_94 != (undefined4 **)0x0) {
    ppuStack_e0 = (undefined4 **)0x5c18a2;
    FUN_009e6a80();
    ppuStack_e0 = (undefined4 **)local_94;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = (char *)0x0;
  local_90 = 0;
  local_8c = 0;
  local_8 = 0x2c;
  ppuStack_e0 = (undefined4 **)0x5c18d5;
  FUN_009adb70();
  if ((undefined4 **)local_c0 != (undefined4 **)0x0) {
    ppuStack_e0 = (undefined4 **)0x5c18ea;
    FUN_009e6a80();
    ppuStack_e0 = (undefined4 **)local_c0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

