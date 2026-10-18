// FUN_007a8b60 @ 007a8b60 body=[[007a8b60, 007a8bf4] [007a8bf8, 007a8d2d] [007a8d31, 007a8d72] [007a8d76, 007a8d91] [007a8d95, 007a8db4] [007a8db8, 007a8dce]]


void FUN_007a8b60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int *local_a0 [2];
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  uint uStack_88;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined1 local_50;
  uint local_40;
  undefined4 local_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6b808;
  local_14 = ExceptionList;
  if (param_1 == 0xb) {
    local_3c = 0xf;
    local_40 = 0;
    local_50 = 0;
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 0;
    local_a0[0] = (int *)FUN_009c7290();
    iVar2 = *local_a0[0];
    uVar1 = FUN_009c7870(1);
    (**(code **)(iVar2 + 0x24))(uVar1);
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_007a8070();
    if (*(undefined4 **)(in_ECX + 0x3a8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x3a8))();
    }
    *(undefined4 *)(in_ECX + 0x3a8) = 0;
    if (*(undefined4 **)(in_ECX + 0x3d0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x3d0))();
    }
    *(undefined4 *)(in_ECX + 0x3d0) = 0;
    if (*(undefined4 **)(in_ECX + 0x3ac) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x3ac))();
    }
    *(undefined4 *)(in_ECX + 0x3ac) = 0;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x390) + 0x18) + 0x34))();
    uStack_5c = 0xf;
    uStack_60 = 0;
    auStack_70[0] = 0;
    FUN_00409350("MS_CONNECTION_LOST",0x12);
    puStack_10 = (undefined1 *)0x1;
    uStack_78 = 0xf;
    uStack_7c = 0;
    uStack_8c = 0;
    FUN_00409350("LoginResultText",0xf);
    puStack_10._0_1_ = 2;
    FUN_009a8ee0(local_a0,auStack_70);
    puStack_10._0_1_ = 3;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
    (**(code **)(**(int **)(in_ECX + 0x390) + 0x38))();
    FUN_009e7500();
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_34);
    }
    uStack_20 = 0xf;
    uStack_24 = 0;
    uStack_34 = uStack_34 & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,5);
    FUN_009adb70();
    if (iStack_98 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_98);
    }
    iStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_88);
    }
    uStack_74 = 0xf;
    uStack_78 = 0;
    uStack_88 = uStack_88 & 0xffffff00;
    if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_6c);
    }
  }
  ExceptionList = local_14;
  return;
}

