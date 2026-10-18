// FUN_00b23f10 @ 00b23f10 body=[[00b23f10, 00b24046]]


undefined4 FUN_00b23f10(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int local_c;
  
  iVar2 = FUN_00b23dc0();
  if (iVar2 == 0) {
    FUN_00b1f840();
    return 0;
  }
  *(int *)(param_1 + 0x10) = local_c;
  iVar2 = (*DAT_013f3aa8)(local_c * 0x18,0);
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 != 0) {
    iVar4 = local_c * 0x11 + 8;
    while( true ) {
      if (local_c == 0) {
        FUN_00b2a4f0(0);
        FUN_00b1f7b0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),FUN_00b23ec0,
                     FUN_00b244e0);
        return 1;
      }
      lVar5 = FUN_00b2a250(0,iVar2,0xd,1);
      if (lVar5 != 1) break;
      piVar1 = (int *)(iVar2 + 0x14);
      lVar5 = FUN_00b2a250(0,piVar1,4,1);
      if (lVar5 != 1) {
        FUN_00b2a4f0(0);
        return 0;
      }
      iVar3 = PHYSFS_swapSLE32(*piVar1);
      *(int *)(iVar2 + 0x10) = iVar4;
      *piVar1 = iVar3;
      iVar4 = iVar4 + iVar3;
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

