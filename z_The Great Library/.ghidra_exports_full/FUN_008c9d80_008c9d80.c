// FUN_008c9d80 @ 008c9d80 body=[[008c9d80, 008c9dc3]]


undefined4 FUN_008c9d80(int param_1)

{
  int iVar1;
  undefined3 uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
  uVar2 = (undefined3)((uint)(iVar1 + 0x130) >> 8);
  if ((*(char *)(iVar1 + 0x130) == 'R') && (*(char *)(iVar1 + 0x131) == 'E')) {
    return CONCAT31(uVar2,(*(char *)(iVar1 + 0x132) == 'B') == (bool)*(char *)(in_ECX + 0x1c));
  }
  return CONCAT31(uVar2,*(char *)(in_ECX + 0x1c) == '\0');
}

