// FUN_00b159f0 @ 00b159f0 body=[[00b159f0, 00b15a4b]]


void FUN_00b159f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b39e16;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00de0628;
  local_4 = 0;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1,uVar1);
  }
  *in_ECX = &PTR_LAB_00de061c;
  ExceptionList = local_c;
  return;
}

