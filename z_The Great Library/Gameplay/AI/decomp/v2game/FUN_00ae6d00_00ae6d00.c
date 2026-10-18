// FUN_00ae6d00 @ 00ae6d00 body=[[00ae6d00, 00ae6d49] [00ae6d50, 00ae6dc7]]


void FUN_00ae6d00(void)

{
  int *in_ECX;
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b37e81;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if ((undefined4 *)*in_ECX != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*in_ECX)(1,DAT_00ef259c ^ (uint)&stack0xffffffe0);
  }
  uVar1 = 0;
  if (in_ECX[2] != 0) {
    do {
      FUN_00b13650();
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)in_ECX[2]);
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  if (in_ECX[1] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[1]);
    in_ECX[1] = 0;
  }
  local_4 = 0xffffffff;
  if (in_ECX[2] != 0) {
    uVar1 = 0;
    do {
      FUN_00b13650();
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)in_ECX[2]);
  }
  if (in_ECX[1] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[1]);
  }
  ExceptionList = local_c;
  return;
}

