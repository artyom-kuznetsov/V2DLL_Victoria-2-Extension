// FUN_00b23820 @ 00b23820 body=[[00b23820, 00b239c0]]


undefined4 FUN_00b23820(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 local_10;
  int local_c;
  
  iVar3 = FUN_00b23630();
  if (iVar3 == 0) {
    FUN_00b1f840();
    return 0;
  }
  *(int *)(param_1 + 0x10) = local_c;
  iVar3 = (*DAT_013f3aa8)(local_c * 0x1c,0);
  *(int *)(param_1 + 0x18) = iVar3;
  if (iVar3 == 0) {
    FUN_00b2a4f0(0);
    FUN_00b1f840("Out of memory");
    return 0;
  }
  FUN_00b2a2f0(0,local_10,0);
  iVar3 = *(int *)(param_1 + 0x18);
  while( true ) {
    if (local_c == 0) {
      FUN_00b2a4f0(0);
      FUN_00b1f7b0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),FUN_00b23760,
                   FUN_00b237c0);
      return 1;
    }
    puVar1 = (undefined4 *)(iVar3 + 0x14);
    lVar5 = FUN_00b2a250(0,puVar1,4,1);
    if (lVar5 != 1) {
      FUN_00b2a4f0(0);
      return 0;
    }
    puVar2 = (undefined4 *)(iVar3 + 0x18);
    lVar5 = FUN_00b2a250(0,puVar2,4,1);
    if (lVar5 != 1) {
      FUN_00b2a4f0(0);
      return 0;
    }
    lVar5 = FUN_00b2a250(0,iVar3,8,1);
    if (lVar5 != 1) break;
    *(undefined1 *)(iVar3 + 8) = 0;
    uVar4 = PHYSFS_swapSLE32(*puVar2);
    *puVar2 = uVar4;
    uVar4 = PHYSFS_swapSLE32(*puVar1);
    *puVar1 = uVar4;
    local_c = local_c + -1;
    iVar3 = iVar3 + 0x1c;
  }
  FUN_00b2a4f0(0);
  return 0;
}

