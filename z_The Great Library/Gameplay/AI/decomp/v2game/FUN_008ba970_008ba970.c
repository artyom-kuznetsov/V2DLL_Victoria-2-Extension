// FUN_008ba970 @ 008ba970 body=[[008ba970, 008ba9e3]]


undefined4 FUN_008ba970(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
  iVar2 = 0;
  for (iVar1 = (iVar1 - (int)((float)(int)((double)iVar1 / 365.0) * 365.0)) - DAT_00f1027c;
      -1 < iVar1; iVar1 = iVar1 - (&DAT_00f1027c)[iVar2]) {
    iVar2 = iVar2 + 1;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(in_ECX + 0x1c) <= iVar2);
}

