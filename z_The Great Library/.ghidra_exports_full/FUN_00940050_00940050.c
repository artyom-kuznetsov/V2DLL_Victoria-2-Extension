// FUN_00940050 @ 00940050 body=[[00940050, 00940088]]


undefined4 FUN_00940050(void)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(DAT_012588e8 + 0xb24);
  if (0x18 < (int)(*(int *)(iVar1 + 0xd84) - *(int *)(iVar1 + 0xd80) & 0xfffffffcU)) {
    cVar2 = (**(code **)(**(int **)(*(int *)(iVar1 + 0xd80) + 0x18) + 0x1c))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

