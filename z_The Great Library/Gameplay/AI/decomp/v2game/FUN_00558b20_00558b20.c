// FUN_00558b20 @ 00558b20 body=[[00558b20, 00558b4d] [00558b50, 00558c1d]]


void FUN_00558b20(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_ESI;
  int iVar8;
  
  iVar8 = in_EAX - unaff_ESI >> 4;
  iVar2 = iVar8 - (in_EAX - unaff_ESI >> 0x1f) >> 1;
  if (0 < iVar2) {
    iVar4 = iVar2 * 2 + 2;
    do {
      iVar4 = iVar4 + -2;
      iVar2 = iVar2 + -1;
      iVar7 = iVar4;
      iVar1 = iVar2;
      while (iVar5 = iVar7, iVar5 < iVar8) {
        iVar7 = *(int *)(iVar5 * 0x10 + -4 + unaff_ESI);
        iVar6 = iVar5 * 0x10 + unaff_ESI;
        if ((iVar7 <= *(int *)(iVar6 + 0xc)) &&
           ((iVar7 < *(int *)(iVar6 + 0xc) || (*(uint *)(iVar6 + -8) < *(uint *)(iVar6 + 8))))) {
          iVar5 = iVar5 + -1;
        }
        iVar7 = iVar5 * 0x10 + unaff_ESI;
        puVar3 = (undefined4 *)(iVar1 * 0x10 + unaff_ESI);
        *puVar3 = *(undefined4 *)(iVar5 * 0x10 + unaff_ESI);
        puVar3[1] = *(undefined4 *)(iVar7 + 4);
        puVar3[2] = *(undefined4 *)(iVar7 + 8);
        puVar3[3] = *(undefined4 *)(iVar7 + 0xc);
        iVar1 = iVar5;
        iVar7 = iVar5 * 2 + 2;
      }
      if (iVar5 == iVar8) {
        iVar7 = unaff_ESI + -0x10 + iVar8 * 0x10;
        puVar3 = (undefined4 *)(iVar1 * 0x10 + unaff_ESI);
        *puVar3 = *(undefined4 *)(unaff_ESI + -0x10 + iVar8 * 0x10);
        puVar3[1] = *(undefined4 *)(iVar7 + 4);
        puVar3[2] = *(undefined4 *)(iVar7 + 8);
        puVar3[3] = *(undefined4 *)(iVar7 + 0xc);
      }
      FUN_0055a5c0();
    } while (0 < iVar2);
  }
  return;
}

