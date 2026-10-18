// FUN_0047e180 @ 0047e180 body=[[0047e180, 0047e210]]


void FUN_0047e180(void)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_EDI;
  
  iVar8 = 0;
  if (0 < DAT_012587f4) {
    do {
      bVar2 = *(byte *)(unaff_EDI + 8 + iVar8);
      if ((bVar2 != 0) && ((&DAT_013f1aa0)[iVar8] != 0)) {
        puVar1 = (uint *)(DAT_013f1ae0 + (uint)(byte)(&DAT_013f1aa0)[iVar8] * 8);
        iVar5 = (uint)bVar2 * 8;
        uVar3 = *(uint *)(*(int *)(unaff_EDI + 0x48) + iVar5);
        iVar7 = uVar3 - *puVar1;
        iVar6 = (*(int *)(*(int *)(unaff_EDI + 0x48) + 4 + iVar5) - puVar1[1]) -
                (uint)(uVar3 < *puVar1);
        if (iVar6 < 0) {
          *puVar1 = -iVar7;
          puVar1[1] = -(iVar6 + (uint)(iVar7 != 0));
          iVar6 = *(int *)(unaff_EDI + 0x48);
          *(undefined4 *)(iVar5 + iVar6) = 0;
          *(undefined4 *)(iVar5 + 4 + iVar6) = 0;
        }
        else {
          *puVar1 = 0;
          puVar1[1] = 0;
          iVar4 = *(int *)(unaff_EDI + 0x48);
          *(int *)(iVar5 + iVar4) = iVar7;
          *(int *)(iVar5 + 4 + iVar4) = iVar6;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < DAT_012587f4);
  }
  return;
}

