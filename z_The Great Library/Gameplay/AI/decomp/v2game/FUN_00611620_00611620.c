// FUN_00611620 @ 00611620 body=[[00611620, 00611758]]


void FUN_00611620(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = in_EAX - param_1 >> 5;
  iVar2 = iVar8 - (in_EAX - param_1 >> 0x1f) >> 1;
  if (0 < iVar2) {
    iVar6 = iVar2 * 2 + 2;
    do {
      iVar6 = iVar6 + -2;
      iVar2 = iVar2 + -1;
      iVar5 = iVar6;
      iVar3 = iVar2;
      while (iVar7 = iVar5, iVar7 < iVar8) {
        iVar5 = *(int *)(iVar7 * 0x20 + -0x14 + param_1);
        iVar4 = iVar7 * 0x20 + param_1;
        if ((iVar5 <= *(int *)(iVar4 + 0xc)) &&
           ((iVar5 < *(int *)(iVar4 + 0xc) || (*(uint *)(iVar4 + -0x18) < *(uint *)(iVar4 + 8))))) {
          iVar7 = iVar7 + -1;
        }
        iVar5 = iVar7 * 0x20 + param_1;
        *(undefined4 *)(iVar3 * 0x20 + param_1) = *(undefined4 *)(iVar7 * 0x20 + param_1);
        iVar3 = iVar3 * 0x20 + param_1;
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar5 + 8);
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
        *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
        *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar5 + 0x18);
        *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar5 + 0x1c);
        iVar3 = iVar7;
        iVar5 = iVar7 * 2 + 2;
      }
      if (iVar7 == iVar8) {
        puVar1 = (undefined4 *)(iVar8 * 0x20 + -0x20 + param_1);
        *(undefined4 *)(iVar3 * 0x20 + param_1) = *puVar1;
        iVar3 = iVar3 * 0x20 + param_1;
        *(undefined4 *)(iVar3 + 8) = puVar1[2];
        *(undefined4 *)(iVar3 + 0xc) = puVar1[3];
        *(undefined4 *)(iVar3 + 0x10) = puVar1[4];
        *(undefined4 *)(iVar3 + 0x14) = puVar1[5];
        *(undefined4 *)(iVar3 + 0x18) = puVar1[6];
        *(undefined4 *)(iVar3 + 0x1c) = puVar1[7];
      }
      FUN_00612f50(param_1,iVar2,param_2);
    } while (0 < iVar2);
  }
  return;
}

