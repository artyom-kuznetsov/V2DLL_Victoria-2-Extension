// FUN_006e2100 @ 006e2100 body=[[006e2100, 006e2148]]


void FUN_006e2100(int param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int unaff_EDI;
  
  iVar7 = 0;
  if (0 < DAT_012587f4) {
    do {
      bVar3 = *(byte *)(param_1 + 8 + iVar7);
      if (bVar3 != 0) {
        uVar6 = (uint)*(byte *)(iVar7 + 8 + unaff_EDI);
        puVar1 = (uint *)(*(int *)(param_1 + 0x48) + (uint)bVar3 * 8);
        iVar4 = *(int *)(unaff_EDI + 0x48);
        uVar5 = *(uint *)(iVar4 + uVar6 * 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - uVar5;
        puVar1[1] = (puVar1[1] - *(int *)(iVar4 + 4 + uVar6 * 8)) - (uint)(uVar2 < uVar5);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_012587f4);
  }
  return;
}

