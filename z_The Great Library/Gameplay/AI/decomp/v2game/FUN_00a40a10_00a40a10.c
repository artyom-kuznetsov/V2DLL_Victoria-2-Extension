// FUN_00a40a10 @ 00a40a10 body=[[00a40a10, 00a40a80]]


void FUN_00a40a10(undefined4 *param_1)

{
  int in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b8a1;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    param_1[1] = *(undefined4 *)(in_EDX + 4);
    *param_1 = &PTR_FUN_00e40cc0;
    param_1[2] = *(undefined4 *)(in_EDX + 8);
    param_1[3] = *(undefined4 *)(in_EDX + 0xc);
    param_1[9] = 0xf;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    FUN_00408ed0(in_EDX + 0x10,0,0xffffffff);
  }
  ExceptionList = local_10;
  return;
}

