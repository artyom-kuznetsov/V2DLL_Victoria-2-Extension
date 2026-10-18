// FUN_007d91d0 @ 007d91d0 body=[[007d91d0, 007d920b] [007d9210, 007d92e1]]


void FUN_007d91d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_ESI;
  
  iVar5 = (in_EAX - unaff_ESI) / 0xc;
  iVar9 = iVar5 / 2;
  if (0 < iVar9) {
    iVar7 = iVar9 * 2 + 2;
    do {
      iVar9 = iVar9 + -1;
      iVar7 = iVar7 + -2;
      iVar6 = iVar9;
      for (iVar8 = iVar7; iVar8 < iVar5; iVar8 = iVar8 * 2 + 2) {
        iVar3 = *(int *)(unaff_ESI + iVar8 * 0xc);
        iVar4 = *(int *)(unaff_ESI + -0xc + iVar8 * 0xc);
        iVar1 = unaff_ESI + iVar8 * 0xc;
        if (iVar3 < iVar4) {
LAB_007d9274:
          iVar8 = iVar8 + -1;
        }
        else if (iVar3 <= iVar4) {
          if (((*(char *)(iVar1 + 8) != '\0') && (*(char *)(iVar1 + -4) == '\0')) ||
             ((*(char *)(iVar1 + 8) == *(char *)(iVar1 + -4) && (iVar1 + 4U < iVar1 - 8U))))
          goto LAB_007d9274;
        }
        iVar1 = unaff_ESI + iVar8 * 0xc;
        puVar2 = (undefined4 *)(unaff_ESI + iVar6 * 0xc);
        *puVar2 = *(undefined4 *)(unaff_ESI + iVar8 * 0xc);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(iVar1 + 8);
        iVar6 = iVar8;
      }
      if (iVar8 == iVar5) {
        iVar8 = unaff_ESI + -0xc + iVar5 * 0xc;
        puVar2 = (undefined4 *)(unaff_ESI + iVar6 * 0xc);
        *puVar2 = *(undefined4 *)(unaff_ESI + -0xc + iVar5 * 0xc);
        puVar2[1] = *(undefined4 *)(iVar8 + 4);
        *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(iVar8 + 8);
      }
      FUN_007d9660();
    } while (0 < iVar9);
  }
  return;
}

