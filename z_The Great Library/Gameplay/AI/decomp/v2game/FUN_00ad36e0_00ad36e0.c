// FUN_00ad36e0 @ 00ad36e0 body=[[00ad36e0, 00ad3816]]


void FUN_00ad36e0(void)

{
  undefined1 *puVar1;
  undefined4 *in_ECX;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b36d95;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (undefined1 *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  FUN_00b13d30(&local_18,&DAT_00e37888,0x4022000000000000,DAT_00ef259c ^ (uint)&stack0xffffffe0);
  FUN_00b13c30();
  FUN_00b13c30();
  FUN_00b13c90();
  FUN_00b13c90();
  FUN_00b15c30();
  FUN_00b15c30("EMotion FX - Information");
  FUN_00b15c30("-----------------------------------------------");
  puVar1 = local_18;
  if (local_18 == (undefined1 *)0x0) {
    puVar1 = &DAT_00ded94d;
  }
  FUN_00b15c30("Version:          v%d.%s",in_ECX[9],puVar1);
  puVar1 = (undefined1 *)*in_ECX;
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_00ded94d;
  }
  FUN_00b15c30("Version string:   %s",puVar1);
  puVar1 = (undefined1 *)in_ECX[3];
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_00ded94d;
  }
  FUN_00b15c30("Compilation date: %s",puVar1);
  FUN_00b15c30("OpenMP supported: No");
  FUN_00b15c30("License System:   No");
  FUN_00b15c30("-----------------------------------------------");
  local_4 = 0xffffffff;
  FUN_00b13650();
  ExceptionList = local_c;
  return;
}

