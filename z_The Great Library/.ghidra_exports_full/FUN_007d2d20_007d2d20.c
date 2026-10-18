// FUN_007d2d20 @ 007d2d20 body=[[007d2d20, 007d2e5a] [007d2e5e, 007d2e70]]


uint FUN_007d2d20(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined **local_78 [18];
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b596e3;
  local_10 = ExceptionList;
  param_2 = param_2 * 0x10;
  iVar3 = *(int *)(param_2 + 4 + *(int *)(param_1 + 0x18)) -
          *(int *)(param_2 + *(int *)(param_1 + 0x18));
  uVar2 = iVar3 * -0x6db6db6d;
  if ((uint)(iVar3 / 0x1c) < 5000) {
    ExceptionList = &local_10;
    FUN_007d4190();
    piVar4 = (int *)(param_2 + *(int *)(param_1 + 0x18));
    if (DAT_012589b4 < (uint)((piVar4[1] - *piVar4) / 0x1c)) {
      DAT_012589b4 = (piVar4[1] - *piVar4) / 0x1c;
    }
    uVar2 = DAT_012589b4;
    if (5000 < (int)DAT_012589b4) {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("beachmanager.cpp",0x10);
      local_8 = 0;
      FUN_004015b0(local_30,0x221,0x10004);
      local_8._0_1_ = 1;
      uVar1 = FUN_00987d20(DAT_012589b4);
      uVar1 = FUN_00455470(uVar1);
      FUN_00401280(uVar1);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00987ac0(local_78);
      local_78[0] = std::ios_base::vftable;
      uVar2 = FUN_00aad52d(local_78);
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
    }
  }
  ExceptionList = local_10;
  return uVar2;
}

