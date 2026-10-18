// FUN_0047df00 @ 0047df00 body=[[0047df00, 0047df76]]


void FUN_0047df00(int param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int unaff_EDI;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  iVar5 = 0;
  if (0 < DAT_012587f4) {
    do {
      bVar2 = *(byte *)(param_1 + 8 + iVar5);
      if (bVar2 != 0) {
        uVar3 = (uint)*(byte *)(iVar5 + 8 + unaff_EDI);
        local_18 = *(uint *)(*(int *)(unaff_EDI + 0x48) + uVar3 * 8);
        local_14 = *(int *)(*(int *)(unaff_EDI + 0x48) + 4 + uVar3 * 8);
        puVar1 = (uint *)(*(int *)(param_1 + 0x48) + (uint)bVar2 * 8);
        local_10 = *puVar1;
        local_c = puVar1[1];
        if ((local_14 < (int)local_c) || ((local_14 <= (int)local_c && (local_18 <= *puVar1)))) {
          puVar4 = &local_18;
        }
        else {
          puVar4 = &local_10;
        }
        uVar3 = puVar4[1];
        *puVar1 = *puVar4;
        puVar1[1] = uVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_012587f4);
  }
  return;
}

