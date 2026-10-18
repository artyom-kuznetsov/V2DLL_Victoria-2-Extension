// FUN_00729020 @ 00729020 body=[[00729020, 007290db]]


void FUN_00729020(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EDX;
  uint uVar5;
  uint uVar6;
  
  while( true ) {
    iVar3 = param_1 * 2 + 2;
    if (param_2 <= iVar3) break;
    iVar4 = *(int *)(DAT_012588e8 + 0xb60) * 0x58 + *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x3f4)
    ;
    uVar5 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(in_EDX + -4 + iVar3 * 4) + 0x28) + 8) + 8 +
                           iVar4);
    iVar1 = *(int *)(iVar4 + 0x48);
    uVar6 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(in_EDX + iVar3 * 4) + 0x28) + 8) + 8 + iVar4)
    ;
    iVar2 = *(int *)(iVar1 + 4 + uVar5 * 8);
    iVar4 = *(int *)(iVar1 + 4 + uVar6 * 8);
    if ((iVar2 <= iVar4) &&
       ((iVar2 < iVar4 || (*(uint *)(iVar1 + uVar5 * 8) < *(uint *)(iVar1 + uVar6 * 8))))) {
      iVar3 = param_1 * 2 + 1;
    }
    *(undefined4 *)(in_EDX + param_1 * 4) = *(undefined4 *)(in_EDX + iVar3 * 4);
    param_1 = iVar3;
  }
  if (iVar3 == param_2) {
    *(undefined4 *)(in_EDX + param_1 * 4) = *(undefined4 *)(in_EDX + -4 + param_2 * 4);
  }
  FUN_00729610();
  return;
}

