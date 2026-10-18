// FUN_00610dd0 @ 00610dd0 body=[[00610dd0, 00610e0e] [00610e10, 00610ef4]]


void FUN_00610dd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = (in_EAX - param_1) / 0x18;
  iVar8 = iVar5 / 2;
  if (0 < iVar8) {
    iVar6 = iVar8 * 2 + 2;
    do {
      iVar8 = iVar8 + -1;
      iVar6 = iVar6 + -2;
      iVar2 = iVar8;
      for (iVar7 = iVar6; iVar7 < iVar5; iVar7 = iVar7 * 2 + 2) {
        iVar4 = *(int *)(param_1 + -0xc + iVar7 * 0x18);
        iVar3 = *(int *)(param_1 + 0xc + iVar7 * 0x18);
        iVar1 = param_1 + iVar7 * 0x18;
        if ((iVar4 <= iVar3) &&
           ((iVar4 < iVar3 || (*(uint *)(iVar1 + -0x10) < *(uint *)(iVar1 + 8))))) {
          iVar7 = iVar7 + -1;
        }
        iVar1 = param_1 + iVar7 * 0x18;
        *(undefined4 *)(param_1 + iVar2 * 0x18) = *(undefined4 *)(param_1 + iVar7 * 0x18);
        iVar2 = param_1 + iVar2 * 0x18;
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
        iVar2 = iVar7;
      }
      if (iVar7 == iVar5) {
        iVar7 = param_1 + -0x18 + iVar5 * 0x18;
        *(undefined4 *)(param_1 + iVar2 * 0x18) = *(undefined4 *)(param_1 + -0x18 + iVar5 * 0x18);
        iVar2 = param_1 + iVar2 * 0x18;
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar7 + 8);
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar7 + 0xc);
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar7 + 0x10);
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar7 + 0x14);
      }
      FUN_00612ec0(param_1,iVar8,param_2);
    } while (0 < iVar8);
  }
  return;
}

