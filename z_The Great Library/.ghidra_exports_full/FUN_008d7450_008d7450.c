// FUN_008d7450 @ 008d7450 body=[[008d7450, 008d74a3]]


undefined4 FUN_008d7450(int param_1)

{
  int iVar1;
  undefined3 uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = (undefined3)((uint)iVar1 >> 8);
  if (*(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2 <= iVar1) {
    return CONCAT31(uVar2,*(char *)(in_ECX + 0x1c) == '\0');
  }
  return CONCAT31(uVar2,(*(int *)(*(int *)(DAT_012588e8 + 0xaec) + iVar1 * 4) == 0) ==
                        (bool)*(char *)(in_ECX + 0x1c));
}

