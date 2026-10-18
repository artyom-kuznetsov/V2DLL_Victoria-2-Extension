// FUN_005c4fb0 @ 005c4fb0 body=[[005c4fb0, 005c4fde]]


void FUN_005c4fb0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0x1c + iVar1 != iVar1) {
    FUN_005c5590((int *)(in_ECX + 8));
  }
  return;
}

