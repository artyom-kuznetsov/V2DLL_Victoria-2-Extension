// FUN_0093bd30 @ 0093bd30 body=[[0093bd30, 0093bdcd]]


undefined4 FUN_0093bd30(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(in_EDX + 0x30) - *(int *)(in_EDX + 0x2c) >> 3;
  local_8 = 0;
  local_c = 0;
  if (0 < iVar1) {
    iVar2 = *(int *)(in_EDX + 0x2c);
    do {
      if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 4) * 4) + 0x31) != '\0')
      {
        local_8 = local_8 + 1;
      }
      iVar2 = iVar2 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(in_EDX + 0x40) - *(int *)(in_EDX + 0x3c) >> 3;
  if (0 < iVar1) {
    iVar2 = *(int *)(in_EDX + 0x3c);
    do {
      if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 4) * 4) + 0x31) != '\0')
      {
        local_c = local_c + 1;
      }
      iVar2 = iVar2 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((1 < local_8) && (1 < local_c)) {
    return 1;
  }
  return 0;
}

