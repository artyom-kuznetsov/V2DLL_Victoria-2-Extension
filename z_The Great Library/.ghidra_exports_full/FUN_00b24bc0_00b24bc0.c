// FUN_00b24bc0 @ 00b24bc0 body=[[00b24bc0, 00b24cf8]]


undefined4 FUN_00b24bc0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  iVar3 = FUN_00b249d0();
  if (iVar3 == 0) {
    FUN_00b1f840();
    return 0;
  }
  *(int *)(param_1 + 0x10) = local_8;
  iVar3 = (*DAT_013f3aa8)(local_8 << 6,0);
  uVar2 = local_c;
  *(int *)(param_1 + 0x14) = iVar3;
  if (iVar3 == 0) {
    FUN_00b2a4f0(local_c);
    FUN_00b1f840("Out of memory");
    return 0;
  }
  if (local_8 != 0) {
    do {
      lVar5 = FUN_00b2a250(uVar2,iVar3,0x38,1);
      if ((lVar5 != 1) || (lVar5 = FUN_00b2a250(uVar2,&local_c,4,1), lVar5 != 1)) {
LAB_00b24ce7:
        FUN_00b2a4f0(uVar2);
        return 0;
      }
      puVar1 = (undefined4 *)(iVar3 + 0x3c);
      lVar5 = FUN_00b2a250(uVar2,puVar1,4,1);
      if (lVar5 != 1) goto LAB_00b24ce7;
      uVar4 = PHYSFS_swapSLE32(*puVar1);
      *puVar1 = uVar4;
      uVar4 = PHYSFS_swapSLE32(local_c);
      *(undefined4 *)(iVar3 + 0x38) = uVar4;
      local_8 = local_8 + -1;
      iVar3 = iVar3 + 0x40;
    } while (local_8 != 0);
    local_8 = 0;
  }
  FUN_00b2a4f0(uVar2);
  FUN_00b1f7b0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),FUN_00b24b40,
               FUN_00b24b70);
  return 1;
}

