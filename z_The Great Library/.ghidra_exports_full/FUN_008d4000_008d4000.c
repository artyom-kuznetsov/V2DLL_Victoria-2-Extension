// FUN_008d4000 @ 008d4000 body=[[008d4000, 008d4075]]


undefined4 FUN_008d4000(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0x20);
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') goto LAB_008d406a;
    iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x30);
    if (iVar1 != 0) goto LAB_008d406a;
    iVar2 = *(int *)(param_1 + 0x34);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
    if (iVar1 != 0) goto LAB_008d406a;
    iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x10);
  }
  if (0 < iVar2) {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4) + 300);
  }
LAB_008d406a:
  return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(param_1 + 0xc) == iVar1);
}

