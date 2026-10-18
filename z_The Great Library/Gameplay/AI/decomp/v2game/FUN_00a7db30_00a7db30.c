// FUN_00a7db30 @ 00a7db30 body=[[00a7db30, 00a7dbb6]]


void FUN_00a7db30(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b42d;
  local_10 = ExceptionList;
  puVar2 = param_1;
  puVar3 = in_ECX;
  ExceptionList = &local_10;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  local_8 = 0;
  FUN_00a7dbc0(param_1 + 0x10);
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  local_8 = 2;
  FUN_00a7dd30(param_1 + 0x14);
  ExceptionList = local_10;
  return;
}

