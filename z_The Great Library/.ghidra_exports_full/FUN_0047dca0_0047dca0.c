// FUN_0047dca0 @ 0047dca0 body=[[0047dca0, 0047dd2a]]


void FUN_0047dca0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int unaff_ESI;
  
  iVar7 = DAT_012587f4;
  iVar8 = 0;
  if (0 < DAT_012587f4) {
    do {
      bVar3 = *(byte *)(param_1 + 8 + iVar8);
      if (bVar3 != 0) {
        bVar4 = *(byte *)(iVar8 + 8 + unaff_ESI);
        if (bVar4 == 0) {
          *(char *)(iVar8 + 8 + unaff_ESI) =
               (char)(*(int *)(unaff_ESI + 0x4c) - *(int *)(unaff_ESI + 0x48) >> 3);
          FUN_00423920();
        }
        else {
          puVar1 = (uint *)(*(int *)(unaff_ESI + 0x48) + (uint)bVar4 * 8);
          iVar5 = *(int *)(param_1 + 0x48);
          uVar6 = *(uint *)(iVar5 + (uint)bVar3 * 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - uVar6;
          puVar1[1] = (puVar1[1] - *(int *)(iVar5 + 4 + (uint)bVar3 * 8)) - (uint)(uVar2 < uVar6);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
  }
  return;
}

