// FUN_005de020 @ 005de020 body=[[005de020, 005de070]]


void FUN_005de020(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x3c);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  *(bool *)(iVar2 + 0x659) = *(char *)(iVar2 + 0x659) == '\0';
  if (*(int *)(in_ECX + 0x40) == *(int *)(DAT_012588e8 + 0xb60)) {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))(7,uVar1);
  }
  return;
}

