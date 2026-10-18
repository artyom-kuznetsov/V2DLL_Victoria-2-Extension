// FUN_009547e0 @ 009547e0 body=[[009547e0, 00954814]]


void FUN_009547e0(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iStack_14;
  int iStack_8;
  
  *(undefined4 *)(in_EAX + 0x34) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(in_EAX + 0x1c) * 4) + 0xbe8) +
                           *(int *)(in_EAX + 0x24) * 4) + 0x34);
  if (iVar3 == 0) {
    return;
  }
  iVar6 = *(int *)(iVar3 + 0x30);
  iVar2 = *(int *)(iVar3 + 0x2c);
  if (iVar2 != iVar6) {
    do {
      if (*(int *)(iVar2 + 4) == *(int *)(in_EAX + 0x24)) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar6);
    if (iVar2 != iVar6) {
      piVar5 = (int *)(iVar3 + 0x2c);
      goto LAB_00954850;
    }
  }
  piVar5 = (int *)(iVar3 + 0x3c);
LAB_00954850:
  iVar3 = *piVar5;
  iStack_14 = 0;
  if (0 < (int)(piVar5[1] - iVar3 & 0xfffffff8U)) {
    do {
      iStack_8 = *(int *)(iVar3 + 4 + iStack_14 * 8);
      piVar4 = (int *)FUN_0093d080(&iStack_8);
      iVar3 = *piVar4;
      iVar6 = *(int *)(iVar3 + 0x10);
      iVar2 = 0;
      if (0 < (int)(*(int *)(iVar3 + 0x14) - iVar6 & 0xffffffc0U)) {
        iStack_8 = 0;
        do {
          iVar6 = iStack_8 + iVar6;
          cVar1 = FUN_00952f10();
          if ((cVar1 != '\0') && (*(int *)(iVar6 + 0x2c) / 1000 < 0)) {
            *(undefined4 *)(iVar6 + 0x2c) = 0;
          }
          iVar6 = *(int *)(iVar3 + 0x10);
          iStack_8 = iStack_8 + 0x40;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(iVar3 + 0x14) - iVar6 >> 6);
      }
      iVar3 = *piVar5;
      iStack_14 = iStack_14 + 1;
    } while (iStack_14 < piVar5[1] - iVar3 >> 3);
  }
  return;
}

