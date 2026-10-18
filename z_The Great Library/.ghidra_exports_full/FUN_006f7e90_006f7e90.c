// FUN_006f7e90 @ 006f7e90 body=[[006f7e90, 006f7ee8]]


void FUN_006f7e90(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x474);
  iVar2 = *(int *)(iVar1 + 8);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x67) != '\0')) {
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0x2d2d2d;
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  FUN_0043e000();
  return;
}

