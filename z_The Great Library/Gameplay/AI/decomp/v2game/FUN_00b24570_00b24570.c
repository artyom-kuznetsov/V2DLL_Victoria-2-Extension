// FUN_00b24570 @ 00b24570 body=[[00b24570, 00b246a7]]


undefined4 FUN_00b24570(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int local_c;
  
  iVar2 = FUN_00b242c0();
  if (iVar2 == 0) {
    FUN_00b1f840(0);
    return 0;
  }
  *(int *)(param_1 + 0x10) = local_c;
  iVar2 = (*DAT_013f3aa8)(local_c * 0x18,0);
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 == 0) {
    FUN_00b2a4f0(0);
    FUN_00b1f840("Out of memory");
    return 0;
  }
  while( true ) {
    if (local_c == 0) {
      FUN_00b2a4f0(0);
      FUN_00b1f7b0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),FUN_00b244b0,
                   FUN_00b244e0);
      return 1;
    }
    lVar4 = FUN_00b2a250(0,iVar2,0xd,1);
    if (lVar4 != 1) break;
    piVar1 = (int *)(iVar2 + 0x14);
    lVar4 = FUN_00b2a250(0,piVar1,4,1);
    if (lVar4 != 1) break;
    iVar3 = PHYSFS_swapSLE32(*piVar1);
    *piVar1 = iVar3;
    iVar3 = FUN_00b2a340(0);
    *(int *)(iVar2 + 0x10) = iVar3;
    if ((iVar3 == -1) || (iVar3 = FUN_00b2a2f0(0,*piVar1 + iVar3,0), iVar3 == 0)) break;
    local_c = local_c + -1;
    iVar2 = iVar2 + 0x18;
  }
  FUN_00b2a4f0(0);
  return 0;
}

