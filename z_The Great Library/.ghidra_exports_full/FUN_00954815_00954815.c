// FUN_00954815 @ 00954815 body=[[00954815, 00954903]]


void FUN_00954815(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int in_EDX;
  int unaff_EBP;
  int iVar6;
  int iVar7;
  
  iVar1 = *(int *)(in_ECX + 0x34);
  if (iVar1 == 0) {
    return;
  }
  iVar7 = *(int *)(iVar1 + 0x30);
  iVar4 = *(int *)(iVar1 + 0x2c);
  if (iVar4 != iVar7) {
    do {
      if (*(int *)(iVar4 + 4) == in_EDX) break;
      iVar4 = iVar4 + 8;
    } while (iVar4 != iVar7);
    if (iVar4 != iVar7) {
      piVar5 = (int *)(iVar1 + 0x2c);
      *(int **)(unaff_EBP + -0xc) = piVar5;
      goto LAB_00954850;
    }
  }
  piVar5 = (int *)(iVar1 + 0x3c);
  *(int **)(unaff_EBP + -0xc) = piVar5;
LAB_00954850:
  iVar7 = *piVar5;
  iVar4 = piVar5[1];
  iVar6 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (0 < (int)(iVar4 - iVar7 & 0xfffffff8U)) {
    *(int *)(unaff_EBP + -0x14) = iVar1 + 0xdc;
    do {
      uVar2 = *(undefined4 *)(iVar7 + iVar6 * 8);
      *(undefined4 *)(unaff_EBP + -4) = *(undefined4 *)(iVar7 + 4 + iVar6 * 8);
      *(undefined4 *)(unaff_EBP + -8) = uVar2;
      piVar5 = (int *)FUN_0093d080(unaff_EBP + -4);
      iVar1 = *piVar5;
      iVar7 = *(int *)(iVar1 + 0x10);
      iVar4 = 0;
      if (0 < (int)(*(int *)(iVar1 + 0x14) - iVar7 & 0xffffffc0U)) {
        *(undefined4 *)(unaff_EBP + -4) = 0;
        do {
          iVar7 = *(int *)(unaff_EBP + -4) + iVar7;
          cVar3 = FUN_00952f10();
          if ((cVar3 != '\0') && (*(int *)(iVar7 + 0x2c) / 1000 < 0)) {
            *(undefined4 *)(iVar7 + 0x2c) = 0;
          }
          iVar7 = *(int *)(iVar1 + 0x10);
          iVar6 = *(int *)(iVar1 + 0x14);
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 0x40;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar6 - iVar7 >> 6);
        iVar6 = *(int *)(unaff_EBP + -0x10);
      }
      iVar7 = **(int **)(unaff_EBP + -0xc);
      iVar1 = (*(int **)(unaff_EBP + -0xc))[1];
      iVar6 = iVar6 + 1;
      *(int *)(unaff_EBP + -0x10) = iVar6;
    } while (iVar6 < iVar1 - iVar7 >> 3);
  }
  return;
}

