// FUN_00a41200 @ 00a41200 body=[[00a41200, 00a4128e] [00a41292, 00a412bb]]


void FUN_00a41200(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e536;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e40ce0;
  local_8 = 1;
  iVar3 = 0;
  iVar1 = (int)(param_1[0x53] - param_1[0x52]) >> 2;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(int **)(param_1[0x52] + iVar3 * 4) + 0x44))();
      FUN_009962f0(uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  if (param_1[0x50] != 0) {
    FUN_00a6faa0();
  }
  if (param_1[0x52] == 0) {
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    FUN_007d9930();
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x52]);
}

