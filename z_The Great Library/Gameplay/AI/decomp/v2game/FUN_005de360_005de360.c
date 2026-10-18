// FUN_005de360 @ 005de360 body=[[005de360, 005de3b2]]


void FUN_005de360(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_009c1d40();
  }
  *(int *)(in_ECX + 0x3c) = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0xd4) = *(undefined1 *)(in_ECX + 100);
  }
  return;
}

