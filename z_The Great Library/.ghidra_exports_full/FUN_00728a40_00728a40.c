// FUN_00728a40 @ 00728a40 body=[[00728a40, 00728b30]]


void FUN_00728a40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EDI;
  
  iVar5 = DAT_012588e8;
  while( true ) {
    iVar6 = param_1 * 2 + 2;
    if (param_2 <= iVar6) break;
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0xb60) * 4);
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0xb60) * 4);
    uVar7 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(unaff_EDI + -4 + iVar6 * 4) + 0x28) + 8) +
                            0x118c + iVar1);
    iVar3 = *(int *)(iVar1 + 0x11cc);
    uVar8 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(unaff_EDI + iVar6 * 4) + 0x28) + 8) + 0x118c
                           + iVar2);
    iVar2 = *(int *)(iVar2 + 0x11cc);
    iVar4 = *(int *)(iVar3 + 4 + uVar7 * 8);
    iVar1 = *(int *)(iVar2 + 4 + uVar8 * 8);
    if ((iVar4 <= iVar1) &&
       ((iVar4 < iVar1 || (*(uint *)(iVar3 + uVar7 * 8) < *(uint *)(iVar2 + uVar8 * 8))))) {
      iVar6 = param_1 * 2 + 1;
    }
    *(undefined4 *)(unaff_EDI + param_1 * 4) = *(undefined4 *)(unaff_EDI + iVar6 * 4);
    param_1 = iVar6;
  }
  if (iVar6 == param_2) {
    *(undefined4 *)(unaff_EDI + param_1 * 4) = *(undefined4 *)(unaff_EDI + -4 + param_2 * 4);
  }
  FUN_00729300();
  return;
}

