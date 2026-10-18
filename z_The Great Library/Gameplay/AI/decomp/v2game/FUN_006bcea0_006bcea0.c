// FUN_006bcea0 @ 006bcea0 body=[[006bcea0, 006bceea]]


void FUN_006bcea0(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0xa98);
  if (*(char *)(iVar1 + 0x4f) != '\0') {
    cVar2 = FUN_004c8a70();
    if (cVar2 == '\0') {
      if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
        *(undefined4 *)(iVar1 + 0x10c) = 0;
        *(undefined4 *)(iVar1 + 0x6c) = 0;
        return;
      }
    }
    else {
      *(undefined4 *)(iVar1 + 0x10c) = 1;
      *(undefined4 *)(iVar1 + 0x6c) = 1;
    }
  }
  return;
}

