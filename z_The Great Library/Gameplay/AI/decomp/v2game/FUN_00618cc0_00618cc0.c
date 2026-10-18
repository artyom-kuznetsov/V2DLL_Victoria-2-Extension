// FUN_00618cc0 @ 00618cc0 body=[[00618cc0, 00618d5d] [00618d61, 00618e26] [00618e2a, 00618e52] [00618e56, 00618f55] [00618f59, 00618f82] [00618f86, 00618fa1] [00618fa5, 00618fc8] [00618fcc, 006190e9] [006190ed, 00619113] [00619117, 0061913b] [0061913f, 00619162] [00619166, 00619269] [0061926d, 00619293] [00619297, 006192bb] [006192bf, 006192e2] [006192e6, 00619341] [00619345, 006193ad] [006193b1, 00619432] [00619436, 0061944e]]


bool FUN_00618cc0(void)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  int in_ECX;
  uint extraout_ECX;
  undefined8 local_f0;
  bool bStack_d9;
  undefined1 *local_d4;
  uint local_d0 [3];
  undefined4 uStack_c4;
  uint local_c0;
  uint local_bc;
  undefined1 *local_b4;
  undefined4 local_b0;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  int *piStack_78;
  int local_74;
  int local_70 [5];
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8c999;
  pvStack_14 = ExceptionList;
  local_f0 = CONCAT44(&local_40,0x618cf7);
  ExceptionList = &pvStack_14;
  local_74 = in_ECX;
  FUN_00618bd0();
  local_f0 = 0x1200e05ea4;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_f0 = CONCAT44(local_34,local_70);
  local_c = 0;
  FUN_009a8ee0();
  local_c._0_1_ = 2;
  if (0xf < local_20) {
    local_f0 = CONCAT44(local_34[0],&UNK_00618d5e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f0 = 0x900dfe8c8;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_bc = 0xf;
  local_c0 = 0;
  local_d0[0] = local_d0[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 3;
  local_b4 = *(undefined1 **)(*(int *)(in_ECX + 0x6c) + 0x10);
  local_b0 = *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x14);
  local_f0 = CONCAT44(0x618db8,(undefined4)local_f0);
  uVar3 = FUN_0055dd40();
  local_c._0_1_ = 4;
  local_f0 = 0x4000618dc9;
  local_b4 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 5;
  if (local_b4 == (undefined1 *)0x0) {
    local_d4 = (undefined1 *)0x0;
  }
  else {
    local_f0 = CONCAT44(uVar3,local_70);
    local_d4 = (undefined1 *)FUN_009a9ce0(local_b4);
  }
  local_c._0_1_ = 4;
  local_f0 = CONCAT44(&local_d4,local_d0);
  FUN_009e6810();
  if (0xf < local_98) {
    local_f0 = CONCAT44(local_ac[0],&UNK_00618e27);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c._0_1_ = 2;
  local_98 = 0xf;
  local_9c = 0;
  uVar1 = local_ac[0] >> 8;
  local_ac[0] = uVar1 << 8;
  if (0xf < local_bc) {
    local_f0 = CONCAT44(local_d0[0],&UNK_00618e53);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f0 = 0x100df830c;
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = uVar1 << 8;
  FUN_00409350();
  local_c._0_1_ = 6;
  local_f0 = 0x600dfb810;
  local_bc = 0xf;
  local_c0 = 0;
  local_d0[0] = local_d0[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 7;
  local_b4 = (undefined1 *)&local_f0;
  FUN_00988bb0(local_90,3);
  local_c._0_1_ = 8;
  local_f0 = CONCAT44(local_ac,0x618ee1);
  uVar3 = FUN_00988f20();
  local_c._0_1_ = 9;
  local_f0 = 0x4000618ef2;
  local_b4 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 10;
  if (local_b4 == (undefined1 *)0x0) {
    local_d4 = (undefined1 *)0x0;
  }
  else {
    local_f0 = CONCAT44(uVar3,local_70);
    local_d4 = (undefined1 *)FUN_009a9ce0(local_b4);
  }
  local_c._0_1_ = 9;
  local_f0 = CONCAT44(&local_d4,local_d0);
  FUN_009e6810();
  if (0xf < local_48) {
    local_f0 = CONCAT44(local_5c[0],&UNK_00618f56);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  if (0xf < local_7c) {
    local_f0 = CONCAT44(local_90[0],&UNK_00618f83);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  if (0xf < local_bc) {
    local_f0 = CONCAT44(local_d0[0],&UNK_00618fa2);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c._0_1_ = 2;
  local_bc = 0xf;
  local_c0 = 0;
  local_d0[0] = local_d0[0] & 0xffffff00;
  if (0xf < local_98) {
    local_f0 = CONCAT44(local_ac[0],&UNK_00618fc9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f0 = 0x100df9644;
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = local_ac[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 0xb;
  local_f0 = 0x700e05eb8;
  local_bc = 0xf;
  local_c0 = 0;
  local_d0[0] = local_d0[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 0xc;
  iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x10) + 0x14);
  local_b4 = (undefined1 *)((int)&local_f0 + 4);
  local_f0._0_4_ = 0x47c35040;
  local_f0._4_4_ = (uint *)extraout_ECX;
  FUN_00401000();
  local_f0._0_4_ = 0x619041;
  local_b4 = (undefined1 *)FUN_00b31c00();
  local_f0 = ZEXT48(local_f0._4_4_) << 0x20;
  uVar3 = __alldiv((longlong)(int)local_b4 * (longlong)iVar4,1000);
  local_f0 = CONCAT44(uVar3,local_5c);
  FUN_00988970();
  local_c._0_1_ = 0xd;
  local_f0 = CONCAT44(local_ac,0x61907b);
  uVar3 = FUN_00988f20();
  local_c._0_1_ = 0xe;
  local_f0 = 0x400061908c;
  local_d4 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 0xf;
  if (local_d4 == (undefined1 *)0x0) {
    local_d4 = (undefined1 *)0x0;
  }
  else {
    local_f0 = CONCAT44(uVar3,local_70);
    local_d4 = (undefined1 *)FUN_009a9ce0(local_d4);
  }
  local_c._0_1_ = 0xe;
  local_f0 = CONCAT44(&local_d4,local_d0);
  FUN_009e6810();
  if (0xf < local_7c) {
    local_f0 = CONCAT44(local_90[0],&UNK_006190ea);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  if (0xf < local_48) {
    local_f0 = CONCAT44(local_5c[0],&UNK_00619114);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  if (0xf < local_bc) {
    local_f0 = CONCAT44(local_d0[0],&UNK_0061913c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c._0_1_ = 2;
  local_bc = 0xf;
  local_c0 = 0;
  local_d0[0] = local_d0[0] & 0xffffff00;
  if (0xf < local_98) {
    local_f0 = CONCAT44(local_ac[0],&UNK_00619163);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f0 = 0x100df9644;
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = local_ac[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 0x10;
  local_f0 = 0x800e05ec0;
  local_bc = 0xf;
  local_c0 = 0;
  local_d0[0] = local_d0[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 0x11;
  uVar1 = *(uint *)(*(int *)(DAT_012586dc + 0x10) + 0x18);
  local_d4 = (undefined1 *)((int)&local_f0 + 4);
  local_f0 = (ulonglong)uVar1 << 0x20;
  uVar3 = __alldiv((longlong)(int)local_b4 * (longlong)(int)uVar1,1000);
  local_f0 = CONCAT44(uVar3,local_5c);
  FUN_00988970();
  local_c._0_1_ = 0x12;
  local_f0 = CONCAT44(local_ac,0x6191fb);
  uVar3 = FUN_00988f20();
  local_c._0_1_ = 0x13;
  local_f0 = 0x400061920c;
  local_b4 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 0x14;
  if (local_b4 == (undefined1 *)0x0) {
    local_b4 = (undefined1 *)0x0;
  }
  else {
    local_f0 = CONCAT44(uVar3,local_70);
    local_b4 = (undefined1 *)FUN_009a9ce0(local_b4);
  }
  local_c._0_1_ = 0x13;
  local_f0 = CONCAT44(&local_b4,local_d0);
  FUN_009e6810();
  if (0xf < local_7c) {
    local_f0 = CONCAT44(local_90[0],&UNK_0061926a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  if (0xf < local_48) {
    local_f0 = CONCAT44(local_5c[0],&UNK_00619294);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  if (0xf < local_bc) {
    local_f0 = CONCAT44(local_d0[0],&UNK_006192bc);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c._0_1_ = 2;
  local_bc = 0xf;
  local_c0 = 0;
  local_d0[0] = local_d0[0] & 0xffffff00;
  if (0xf < local_98) {
    local_f0 = CONCAT44(local_ac[0],&UNK_006192e3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f0 = CONCAT44(0x6192eb,(undefined4)local_f0);
  iVar4 = FUN_00475500();
  local_f0 = *(undefined8 *)(iVar4 + 0x74);
  FUN_009a9880((int)*(undefined8 *)(iVar4 + 0x6c),
               (int)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20));
  local_c._0_1_ = 0x15;
  local_f0 = CONCAT44(0x619329,(undefined4)local_f0);
  FUN_006417b0();
  local_c._0_1_ = 2;
  if (0xf < local_7c) {
    local_f0 = CONCAT44(local_90[0],&UNK_00619342);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar4 = *(int *)(local_74 + 0x6c);
  *(undefined4 *)(iVar4 + 0x28) = local_40;
  local_f0 = 0xb00df290c;
  *(undefined4 *)(iVar4 + 0x2c) = local_3c;
  local_bc = 0xf;
  local_c0 = 0;
  local_d0[0] = local_d0[0] & 0xffffff00;
  FUN_00409350();
  local_c = CONCAT31(local_c._1_3_,0x16);
  local_f0._4_4_ = local_d0;
  local_f0._0_4_ = 0x619393;
  piVar5 = (int *)(**(code **)(**(int **)(local_74 + 4) + 0x34))();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
  if (0xf < local_c0) {
    local_f0 = CONCAT44(local_f0._4_4_,local_d4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f0 = ZEXT48(local_f0._4_4_) << 0x20;
  local_c0 = 0xf;
  uStack_c4 = 0;
  local_d4 = (undefined1 *)((uint)local_d4 & 0xffffff00);
  cVar2 = FUN_00911760();
  if (cVar2 == '\0') {
    pcVar6 = *(code **)(*piVar5 + 0xbc);
  }
  else {
    pcVar6 = *(code **)(*piVar5 + 0xb8);
  }
  local_f0._0_4_ = 0x6193e2;
  (*pcVar6)();
  local_f0._0_4_ = 0x6193ef;
  cVar2 = (**(code **)(*piStack_78 + 0x20))();
  if (cVar2 == '\0') {
    bStack_d9 = false;
  }
  else {
    bStack_d9 = (char)piStack_78[0x19] == '\0';
  }
  puStack_10 = (undefined1 *)0x17;
  local_f0._0_4_ = 0x619415;
  FUN_009adb70();
  if (local_70[0] != 0) {
    local_f0._0_4_ = 0x619429;
    FUN_009e6a80();
    local_f0 = CONCAT44(local_f0._4_4_,local_70[0]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_18;
  return bStack_d9;
}

