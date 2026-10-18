// FUN_008fbfc0 @ 008fbfc0 body=[[008fbfc0, 008fc04d]]


int FUN_008fbfc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint3 uVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar4 = *(int *)(param_1 + 0xc) * 0x58 + *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x7d4);
  uVar6 = (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x1c) + 8) + 8 + iVar4);
  iVar2 = *(int *)(iVar4 + 0x48);
  iVar3 = *(int *)(iVar2 + 4 + uVar6 * 8);
  iVar7 = 0;
  iVar8 = 0;
  uVar5 = (uint3)((uint)iVar4 >> 8);
  if (0 < DAT_012587f4) {
    do {
      uVar9 = (uint)*(byte *)(iVar4 + 8 + iVar8);
      iVar1 = *(int *)(iVar2 + 4 + uVar9 * 8);
      if ((iVar3 <= iVar1) &&
         (((iVar3 < iVar1 || (*(uint *)(iVar2 + uVar6 * 8) < *(uint *)(iVar2 + uVar9 * 8))) &&
          (iVar7 = iVar7 + 1, 5 < iVar7)))) {
        return (uint)uVar5 << 8;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < DAT_012587f4);
  }
  return CONCAT31(uVar5,1);
}

