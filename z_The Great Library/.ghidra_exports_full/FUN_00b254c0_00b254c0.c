// FUN_00b254c0 @ 00b254c0 body=[[00b254c0, 00b25612]]


undefined4 FUN_00b254c0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int local_c;
  
  iVar2 = FUN_00b25370();
  if (iVar2 == 0) {
    FUN_00b1f840();
    return 0;
  }
  *(int *)(param_1 + 0x10) = local_c;
  iVar2 = (*DAT_013f3aa8)(local_c * 0x18,0);
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 != 0) {
    iVar5 = (local_c + 1) * 0x10;
    while( true ) {
      if (local_c == 0) {
        FUN_00b2a4f0(0);
        FUN_00b1f7b0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),FUN_00b23ec0,
                     FUN_00b244e0);
        return 1;
      }
      lVar6 = FUN_00b2a250(0,iVar2,0xc,1);
      if (lVar6 != 1) break;
      *(undefined1 *)(iVar2 + 0xc) = 0;
      puVar3 = (undefined1 *)FUN_00ab4790(iVar2,0x20);
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0;
      }
      piVar1 = (int *)(iVar2 + 0x14);
      lVar6 = FUN_00b2a250(0,piVar1,4,1);
      if (lVar6 != 1) {
        FUN_00b2a4f0(0);
        return 0;
      }
      iVar4 = PHYSFS_swapSLE32(*piVar1);
      *(int *)(iVar2 + 0x10) = iVar5;
      *piVar1 = iVar4;
      iVar5 = iVar5 + iVar4;
      local_c = local_c + -1;
      iVar2 = iVar2 + 0x18;
    }
    FUN_00b2a4f0(0);
    return 0;
  }
  FUN_00b2a4f0(0);
  FUN_00b1f840("Out of memory");
  return 0;
}

