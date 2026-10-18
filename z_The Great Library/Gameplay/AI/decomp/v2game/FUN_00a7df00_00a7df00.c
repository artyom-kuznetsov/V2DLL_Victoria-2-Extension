// FUN_00a7df00 @ 00a7df00 body=[[00a7df00, 00a7df9f] [00a7dfc7, 00a7dfd9]]


undefined4 * FUN_00a7df00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3d61e;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      param_3[0x10] = 0;
      param_3[0x11] = 0;
      param_3[0x12] = 0;
      local_8 = 2;
      FUN_00a7dbc0(param_1 + 0x10);
      param_3[0x14] = 0;
      param_3[0x15] = 0;
      param_3[0x16] = 0;
      local_8 = 4;
      FUN_00a7dd30(param_1 + 0x14);
    }
    param_3 = param_3 + 0x18;
  }
  ExceptionList = local_10;
  return param_3;
}

