// FUN_00adb7e0 @ 00adb7e0 body=[[00adb7e0, 00adb851]]


void FUN_00adb7e0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b3756c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00aed790(DAT_00ef259c ^ (uint)&stack0xffffffe8);
  *in_ECX = &PTR_FUN_00ddd13c;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  *(undefined2 *)(in_ECX + 0xc) = 600;
  local_4 = 1;
  FUN_00ada7b0();
  *(undefined2 *)(in_ECX + 0xd) = 1;
  ExceptionList = local_c;
  return;
}

