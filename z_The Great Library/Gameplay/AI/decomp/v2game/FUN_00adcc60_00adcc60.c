// FUN_00adcc60 @ 00adcc60 body=[[00adcc60, 00adccfb]]


void FUN_00adcc60(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b377f6;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *(undefined2 *)(in_ECX + 6) = 1;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *(undefined2 *)(in_ECX + 10) = 1;
  local_4 = 1;
  FUN_00aed770(uVar1);
  *(undefined2 *)(in_ECX + 6) = 600;
  *in_ECX = &DAT_01010101;
  in_ECX[1] = &DAT_01010101;
  in_ECX[2] = &DAT_01010101;
  in_ECX[0xb] = FUN_00ad9cc0;
  *(undefined2 *)(in_ECX + 10) = 600;
  ExceptionList = local_c;
  return;
}

