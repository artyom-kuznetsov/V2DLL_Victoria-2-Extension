// FUN_00adfbd0 @ 00adfbd0 body=[[00adfbd0, 00adfc48]]


void FUN_00adfbd0(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b378e8;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 1;
  *(undefined1 *)(in_ECX + 7) = 0;
  local_4 = 0;
  in_ECX[5] = param_1;
  in_ECX[6] = 0xffffffff;
  in_ECX[4] = param_2;
  *(undefined4 **)(param_2 + 0x1b4) = in_ECX;
  FUN_00adfa80(uVar1);
  ExceptionList = local_c;
  return;
}

