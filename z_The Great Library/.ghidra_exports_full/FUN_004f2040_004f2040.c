// FUN_004f2040 @ 004f2040 body=[[004f2040, 004f20ba] [004f20be, 004f2189] [004f218d, 004f21b0] [004f21b4, 004f2201] [004f2205, 004f224e] [004f2252, 004f2294] [004f2298, 004f22be] [004f22c2, 004f22d6]]


undefined1 *
FUN_004f2040(undefined4 param_1,undefined1 *param_2,undefined4 param_3,int param_4,
            undefined8 *param_5,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_9c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined1 local_30 [4];
  int local_2c;
  uint local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00baf676;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_9c = 0x2300dfe190;
  local_14 = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350();
  local_9c = CONCAT44(local_4c,local_30);
  local_8 = 1;
  FUN_009a8ee0();
  local_8._0_1_ = 3;
  if (0xf < local_38) {
    local_9c = CONCAT44(local_4c[0],&UNK_004f20bb);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9c = 0x400dfced8;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 4;
  local_18 = ((int)param_5 >> 0x1f) << 0xf | (uint)param_5 >> 0x11;
  puVar1 = (undefined4 *)(*(int *)(param_4 + 0x6c) + (uint)*(byte *)(param_4 + 0x2c + param_6) * 8);
  iVar5 = (int)param_5 << 0xf;
  param_5 = &local_9c;
  local_9c = __allmul(*puVar1,puVar1[1],iVar5,local_18);
  local_9c = local_9c >> 0xf;
  uVar3 = FUN_00988bb0(local_84,2);
  local_8._0_1_ = 5;
  local_9c = 0x40004f2140;
  param_5 = (undefined8 *)FUN_00aae9af();
  local_8._0_1_ = 6;
  if (param_5 == (undefined8 *)0x0) {
    param_5 = (undefined8 *)0x0;
  }
  else {
    local_9c = CONCAT44(uVar3,local_30);
    param_5 = (undefined8 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 5;
  local_9c = CONCAT44(&param_5,local_68);
  FUN_009e6810();
  if (0xf < local_70) {
    local_9c = CONCAT44(local_84[0],&UNK_004f218a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_54) {
    local_9c = CONCAT44(local_68[0],&UNK_004f21b1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9c = CONCAT44(0x4f21b9,(undefined4)local_9c);
  iVar4 = FUN_00475500();
  local_9c = *(undefined8 *)(iVar4 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
  local_8._0_1_ = 7;
  local_9c = 0xffffffff00000000;
  FUN_00448aa0();
  uVar2 = local_18;
  local_8._0_1_ = 3;
  if (0xf < local_70) {
    local_9c = CONCAT44(local_84[0],&UNK_004f2202);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  param_5 = &local_9c;
  local_9c = CONCAT44(local_18,iVar5);
  FUN_004efad0(param_1,local_84,param_3,param_4,0);
  local_9c = 0xffffffff00000000;
  local_8._0_1_ = 8;
  FUN_00448aa0();
  local_8._0_1_ = 3;
  if (0xf < local_70) {
    local_9c = CONCAT44(local_84[0],&UNK_004f224f);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  param_5 = &local_9c;
  local_9c = CONCAT44(uVar2,iVar5);
  FUN_004efad0(param_1,local_84,param_3,param_4,2);
  local_9c = 0xffffffff00000000;
  local_8 = CONCAT31(local_8._1_3_,9);
  FUN_00448aa0();
  if (0xf < local_70) {
    local_9c = CONCAT44(local_84[0],&UNK_004f2295);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 10;
  local_9c = CONCAT44(0x4f22a7,(undefined4)local_9c);
  FUN_009adb70();
  if (local_2c != 0) {
    local_9c = CONCAT44(0x4f22b6,(undefined4)local_9c);
    FUN_009e6a80();
    local_9c = CONCAT44(local_2c,&UNK_004f22bf);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

