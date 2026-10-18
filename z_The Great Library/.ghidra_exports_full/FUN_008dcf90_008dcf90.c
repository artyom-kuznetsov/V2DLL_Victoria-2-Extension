// FUN_008dcf90 @ 008dcf90 body=[[008dcf90, 008dcfd7]]


undefined4 FUN_008dcf90(int param_1)

{
  int iVar1;
  undefined3 uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
  uVar2 = (undefined3)((uint)iVar1 >> 8);
  if ((*(int *)(iVar1 + 0x188) != 0) &&
     (*(int *)(*(int *)(iVar1 + 0x188) + 0x268) == *(int *)(iVar1 + 0x58))) {
    return CONCAT31(uVar2,*(char *)(in_ECX + 0x1c) == '\x01');
  }
  return CONCAT31(uVar2,*(char *)(in_ECX + 0x1c) == '\0');
}

