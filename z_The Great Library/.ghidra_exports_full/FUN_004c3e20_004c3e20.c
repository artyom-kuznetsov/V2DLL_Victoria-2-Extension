// FUN_004c3e20 @ 004c3e20 body=[[004c3e20, 004c3e6c] [004c3e70, 004c3e8e]]


undefined4 FUN_004c3e20(void)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(in_EAX + 0x2a) != '\0') {
    return 0;
  }
  if (*(char *)(in_EAX + 0x1c) != '\0') {
    return 1;
  }
  iVar1 = (*(int *)(in_EAX + 0xcc) - *(int *)(in_EAX + 200)) / 0x24;
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = (int *)(*(int *)(in_EAX + 200) + 4);
    do {
      if (*(char *)(*(int *)(*(int *)(DAT_0125870c + 0x2aa4) + *piVar2 * 4) + 0x2a) == '\0') {
        return 0;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 9;
    } while (iVar3 < iVar1);
  }
  return 1;
}

