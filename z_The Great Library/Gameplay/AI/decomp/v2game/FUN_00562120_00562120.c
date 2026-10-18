// FUN_00562120 @ 00562120 body=[[00562120, 0056219b]]


void FUN_00562120(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  
  iVar4 = DAT_012587f4;
  iVar5 = 0;
  if (0 < DAT_012587f4) {
    do {
      bVar1 = *(byte *)(in_ECX + 8 + iVar5);
      if (((bVar1 != 0) &&
          (iVar2 = *(int *)(*(int *)(DAT_012587f0 + 0xc) + iVar5 * 4), iVar2 != DAT_012587f0 + 0x48)
          ) && (iVar2 != 0)) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x48) + (uint)bVar1 * 8);
        iVar3 = *(int *)(*(int *)(in_ECX + 0x48) + 4 + (uint)bVar1 * 8);
        if (iVar2 != 0 || iVar3 != 0) {
          FUN_0099f370(iVar2,iVar3);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

