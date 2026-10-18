// FUN_005dddf0 @ 005dddf0 body=[[005dddf0, 005dde40]]


void FUN_005dddf0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x3c);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  *(bool *)(iVar2 + 0x658) = *(char *)(iVar2 + 0x658) == '\0';
  if (*(int *)(in_ECX + 0x40) == *(int *)(DAT_012588e8 + 0xb60)) {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))(7,uVar1);
  }
  return;
}

