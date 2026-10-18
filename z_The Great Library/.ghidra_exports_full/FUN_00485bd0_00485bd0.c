// FUN_00485bd0 @ 00485bd0 body=[[00485bd0, 00485d43]]


int FUN_00485bd0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = *(int *)(in_ECX + 0x7e8) - *(int *)(in_ECX + 0x7e4);
  iVar2 = iVar3 * -0x77777777;
  iVar3 = iVar3 / 0x78;
  if (0 < iVar3) {
    iVar2 = 0x30;
    do {
      iVar1 = *(int *)(in_ECX + 0x7e4);
      *(undefined4 *)(iVar2 + -0x30 + iVar1) = DAT_0125ba10;
      *(undefined4 *)(iVar2 + -0x2c + iVar1) = DAT_0125ba14;
      iVar1 = *(int *)(in_ECX + 0x7e4);
      *(undefined4 *)(iVar2 + -0x18 + iVar1) = DAT_0125ba10;
      *(undefined4 *)(iVar2 + -0x14 + iVar1) = DAT_0125ba14;
      iVar1 = *(int *)(in_ECX + 0x7e4);
      *(undefined4 *)(iVar2 + iVar1) = DAT_0125ba10;
      *(undefined4 *)(iVar2 + 4 + iVar1) = DAT_0125ba14;
      iVar1 = *(int *)(in_ECX + 0x7e4);
      *(undefined4 *)(iVar2 + 0x18 + iVar1) = DAT_0125ba10;
      *(undefined4 *)(iVar2 + 0x1c + iVar1) = DAT_0125ba14;
      iVar1 = *(int *)(in_ECX + 0x7e4);
      *(undefined4 *)(iVar2 + -0x28 + iVar1) = DAT_0125ba10;
      *(undefined4 *)(iVar2 + -0x24 + iVar1) = DAT_0125ba14;
      iVar1 = *(int *)(in_ECX + 0x7e4);
      *(undefined4 *)(iVar2 + -0x10 + iVar1) = DAT_0125ba10;
      *(undefined4 *)(iVar2 + -0xc + iVar1) = DAT_0125ba14;
      iVar1 = *(int *)(in_ECX + 0x7e4);
      *(undefined4 *)(iVar2 + 8 + iVar1) = DAT_0125ba10;
      *(undefined4 *)(iVar2 + 0xc + iVar1) = DAT_0125ba14;
      iVar1 = *(int *)(in_ECX + 0x7e4);
      *(undefined4 *)(iVar2 + 0x20 + iVar1) = DAT_0125ba10;
      *(undefined4 *)(iVar2 + 0x24 + iVar1) = DAT_0125ba14;
      iVar1 = *(int *)(in_ECX + 0x7e4);
      *(undefined4 *)(iVar2 + -0x20 + iVar1) = DAT_0125ba10;
      *(undefined4 *)(iVar2 + -0x1c + iVar1) = DAT_0125ba14;
      iVar1 = *(int *)(in_ECX + 0x7e4);
      *(undefined4 *)(iVar2 + -8 + iVar1) = DAT_0125ba10;
      *(undefined4 *)(iVar2 + -4 + iVar1) = DAT_0125ba14;
      iVar1 = *(int *)(in_ECX + 0x7e4);
      *(undefined4 *)(iVar2 + 0x10 + iVar1) = DAT_0125ba10;
      *(undefined4 *)(iVar2 + 0x14 + iVar1) = DAT_0125ba14;
      iVar1 = *(int *)(in_ECX + 0x7e4);
      *(undefined4 *)(iVar2 + 0x28 + iVar1) = DAT_0125ba10;
      *(undefined4 *)(iVar2 + 0x2c + iVar1) = DAT_0125ba14;
      iVar2 = iVar2 + 0x78;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar2;
}

