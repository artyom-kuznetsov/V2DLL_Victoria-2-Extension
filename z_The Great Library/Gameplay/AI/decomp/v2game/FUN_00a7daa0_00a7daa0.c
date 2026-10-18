// FUN_00a7daa0 @ 00a7daa0 body=[[00a7daa0, 00a7db2d]]


void FUN_00a7daa0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3b46e;
  local_10 = ExceptionList;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    ExceptionList = &local_10;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    local_8 = 1;
    uStack_7 = 0;
    FUN_00a7dbc0(param_2 + 0x10);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    _local_8 = CONCAT31(uStack_7,3);
    FUN_00a7dd30(param_2 + 0x14);
  }
  ExceptionList = local_10;
  return;
}

