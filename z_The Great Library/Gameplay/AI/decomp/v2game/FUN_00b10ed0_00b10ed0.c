// FUN_00b10ed0 @ 00b10ed0 body=[[00b10ed0, 00b10eff]]


void FUN_00b10ed0(void)

{
  int *in_ECX;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (in_ECX[1] != 0) {
    iVar2 = 0;
    do {
      *(undefined1 *)(*in_ECX + 0x20 + iVar2) = 0;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x24;
    } while (uVar1 < (uint)in_ECX[1]);
  }
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  return;
}

