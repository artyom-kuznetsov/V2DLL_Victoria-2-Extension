// FUN_0098b350 @ 0098b350 body=[[0098b350, 0098b488]]


undefined4 * FUN_0098b350(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined **local_30 [3];
  undefined **local_24 [3];
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41dad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e378e8;
  param_1[3] = 0;
  iVar3 = FUN_00aae9af(0x18);
  if (iVar3 == 0) {
    local_18 = (char *)0x0;
    std::exception::exception((exception *)local_30,&local_18);
    local_30[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_00e6fb20);
  }
  param_1[2] = iVar3;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  *(undefined1 *)(param_1[2] + 0x14) = 1;
  *(undefined1 *)(param_1[2] + 0x15) = 1;
  local_8 = 0;
  puVar1 = param_1 + 5;
  *puVar1 = 0;
  puVar4 = (undefined4 *)FUN_00aae9af(8);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar1 = puVar4;
    puVar4[1] = 0;
    *puVar4 = 0;
    *(undefined4 **)*puVar1 = puVar1;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    FUN_009f8e80();
    uVar2 = DAT_00f092fc;
    param_1[0xb] = C3dObject::vftable;
    param_1[0x48] = uVar2;
    param_1[0x16] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    FUN_005da1e0();
    *(undefined2 *)(param_1 + 0x5e) = 0x100;
    *(undefined1 *)(param_1 + 0x4d) = 1;
    ExceptionList = local_10;
    return param_1;
  }
  local_14 = (char *)0x0;
  std::exception::exception((exception *)local_24,&local_14);
  local_24[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_24,&DAT_00e6fb20);
}

