// FUN_007539f0 @ 007539f0 body=[[007539f0, 00753ad2] [00753ad6, 00753b22] [00753b26, 00753b5d]]


undefined4 FUN_007539f0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fe40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x10))();
  (**(code **)(*(int *)in_ECX[0x13] + 0x50))();
  piVar1 = (int *)(**(code **)(*(int *)in_ECX[0x15] + 0x34))();
  iVar3 = *piVar1;
  local_14 = (int *)(in_ECX[0x13] + 0x18);
  uVar2 = (**(code **)(*(int *)in_ECX[0x15] + 0x3c))();
  uVar2 = (**(code **)(*local_14 + 0x44))(uVar2);
  iVar3 = (**(code **)(iVar3 + 0x2c))(uVar2);
  in_ECX[0x13] = iVar3;
  (**(code **)(*(int *)(in_ECX[0x14] + 0x18) + 0x38))();
  (**(code **)(*(int *)in_ECX[0x14] + 0x50))();
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("topcolor_politics",0x11);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(*(int *)in_ECX[0x15] + 0x34))();
  iVar3 = *piVar1;
  uVar2 = (**(code **)(*(int *)in_ECX[0x15] + 0x3c))();
  iVar3 = (**(code **)(iVar3 + 0x2c))(local_4c,uVar2);
  local_8 = 0xffffffff;
  in_ECX[0x14] = iVar3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("close_button",0xc);
  local_8 = 1;
  iVar3 = (**(code **)(*(int *)in_ECX[0x13] + 0x34))(local_30);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 8);
  }
  ExceptionList = local_10;
  return 1;
}

