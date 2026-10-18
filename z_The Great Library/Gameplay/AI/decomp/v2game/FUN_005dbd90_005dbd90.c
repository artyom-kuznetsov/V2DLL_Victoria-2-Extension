// FUN_005dbd90 @ 005dbd90 body=[[005dbd90, 005dbda7] [005dbdb0, 005dbf0c]]


void FUN_005dbd90(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 *in_EAX;
  int iVar5;
  int iVar6;
  undefined1 uStack_1d;
  
  piVar1 = (int *)*in_EAX;
joined_r0x005dbda0:
  while( true ) {
    do {
      if (piVar1 == (int *)0x0) {
        return;
      }
      piVar2 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      cVar4 = (**(code **)(*piVar2 + 0x3c))();
    } while (cVar4 != '\0');
    cVar4 = (**(code **)(*piVar2 + 0x38))();
    if ((cVar4 == '\0') || (iVar5 = (**(code **)(*piVar2 + 0x2c))(), *(int *)(iVar5 + 0x1b4) == 0))
    break;
    *(undefined1 *)(piVar2 + 0x59) = 0;
  }
  if ((char)piVar2[0x59] == '\0') goto LAB_005dbeaa;
  iVar5 = piVar2[0x37];
  iVar3 = piVar2[0x31];
  if ((*(int *)(iVar5 + 0x134) == iVar3) ||
     (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x134) * 4)
                                + 0xbe8) + iVar3 * 4) + 0x34) != 0)) {
LAB_005dbe9f:
    uStack_1d = 0;
  }
  else {
    uStack_1d = 1;
    cVar4 = FUN_0051b040(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar3 * 4));
    if ((cVar4 != '\0') && (iVar5 = *(int *)(iVar5 + 0xe8), iVar5 != 0)) {
      if (*(char *)(iVar5 + 0x38) != '\0') {
        iVar5 = *(int *)(iVar5 + 0x14);
        do {
          if (iVar5 == 0) goto LAB_005dbed8;
          iVar5 = *(int *)(iVar5 + 8);
          iVar6 = FUN_0048e120();
        } while (*(int *)(iVar6 + 4) != iVar3);
      }
      goto LAB_005dbe9f;
    }
  }
  goto LAB_005dbed8;
LAB_005dbeaa:
  cVar4 = FUN_0051b040(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + piVar2[0x31] * 4));
  if (cVar4 == '\0') {
    uStack_1d = 1;
LAB_005dbed8:
    if ((((char)piVar2[0x30] == 'R') && (*(char *)((int)piVar2 + 0xc1) == 'E')) &&
       (*(char *)((int)piVar2 + 0xc2) == 'B')) {
      uStack_1d = 0;
    }
    *(undefined1 *)(piVar2 + 0x59) = uStack_1d;
  }
  goto joined_r0x005dbda0;
}

