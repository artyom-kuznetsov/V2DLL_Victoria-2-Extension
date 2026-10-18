// FUN_009c3330 @ 009c3330 body=[[009c3330, 009c33b6]]


void FUN_009c3330(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b41b15;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e3a800;
  in_ECX[0x15] = &PTR_LAB_00e3a91c;
  local_8 = 1;
  FUN_009963d0(in_ECX[0x25]);
  local_8 = local_8 & 0xffffff00;
  if ((undefined4 *)in_ECX[0x2b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x2b])(1);
  }
  local_8 = 0xffffffff;
  *in_ECX = &PTR_FUN_00e3a6d8;
  in_ECX[0x15] = &PTR_LAB_00e3a7f0;
  FUN_009c2f40();
  ExceptionList = local_10;
  return;
}

