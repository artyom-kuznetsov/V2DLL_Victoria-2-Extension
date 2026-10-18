// FUN_00b2f770 @ 00b2f770 body=[[00b2f770, 00b2f79c] [00b2f7a0, 00b2f7ca]]


int FUN_00b2f770(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *param_1;
  iVar4 = 0;
  iVar6 = 0;
  uVar5 = 0;
  if (1 < (int)uVar1) {
    piVar2 = (int *)(param_1[1] + 0x1c);
    iVar3 = (uVar1 - 2 >> 1) + 1;
    uVar5 = iVar3 * 2;
    do {
      iVar4 = iVar4 + piVar2[-6];
      iVar6 = iVar6 + *piVar2;
      piVar2 = piVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  if (uVar5 < uVar1) {
    iVar3 = *(int *)(param_1[1] + 4 + uVar5 * 0x18);
  }
  return iVar6 + iVar4 + iVar3;
}

