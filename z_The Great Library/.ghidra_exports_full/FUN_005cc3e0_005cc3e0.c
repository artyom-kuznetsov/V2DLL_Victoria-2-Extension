// FUN_005cc3e0 @ 005cc3e0 body=[[005cc3e0, 005cc4cb]]


undefined4 FUN_005cc3e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  
  if (*(int *)(DAT_012588e8 + 0x18) != 0) {
    iVar2 = *(int *)(DAT_012587e4 + 4);
    iVar3 = *(int *)(*(int *)(iVar2 + *(int *)(in_EAX + 0xc4) * 4) + 0xcfc);
    iVar4 = *(int *)(DAT_012588e8 + 0x18);
    do {
      piVar1 = (int *)(iVar4 + 0x3c);
      if (((iVar3 != 0) && (iVar3 == *(int *)(iVar4 + 0x24))) &&
         (*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + *(int *)(in_EAX + 0xc4) * 4) + 0xbe8) +
                           iVar3 * 4) + 0x1c) == iVar3)) {
        if (((*(int *)(in_EAX + 0xc4) <
              *(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2) &&
            (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + *(int *)(in_EAX + 0xc4) * 4) == 0)) &&
           (*(char *)(*(int *)(*(int *)(*(int *)(iVar2 + *(int *)(in_EAX + 0xc4) * 4) + 0xbe8) +
                              iVar3 * 4) + 0x70) != '\0')) {
          return 1;
        }
      }
      iVar4 = *piVar1;
    } while (*piVar1 != 0);
  }
  return 0;
}

