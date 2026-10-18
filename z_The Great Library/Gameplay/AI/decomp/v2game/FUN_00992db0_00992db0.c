// FUN_00992db0 @ 00992db0 body=[[00992db0, 00992e05]]


void FUN_00992db0(void)

{
  int in_ECX;
  longlong lVar1;
  undefined4 uStack_8;
  
  if (*(char *)(in_ECX + 0xf) == '\n') {
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
  }
  if (*(char *)(in_ECX + 0x10) == '\0') {
    uStack_8 = in_ECX;
    lVar1 = PHYSFS_read(*(undefined4 *)(in_ECX + 0x30),(int)&uStack_8 + 3,1,1);
    if (lVar1 != 1) {
      *(undefined1 *)(in_ECX + 0x38) = 1;
      *(undefined1 *)(in_ECX + 0xf) = 0xff;
      return;
    }
    *(undefined1 *)(in_ECX + 0xf) = uStack_8._3_1_;
    return;
  }
  *(undefined1 *)(in_ECX + 0x10) = 0;
  return;
}

