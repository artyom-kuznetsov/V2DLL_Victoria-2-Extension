// FUN_005843f0 @ 005843f0 body=[[005843f0, 00584669] [0058466d, 0058468b] [0058468f, 005846ad] [005846b1, 005846cc] [005846d0, 005846e4]]


void FUN_005843f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b45990;
  local_14 = ExceptionList;
  if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x44) * 4) + 0x1494) <
      *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x44) * 4) + 0x1488)) {
    iVar5 = *(int *)(in_ECX + 0x48);
    ExceptionList = &local_14;
    iVar2 = FUN_00565b70();
    iVar3 = DAT_012588dc;
    iVar6 = DAT_01258804;
    if ((-1 < iVar5) && (iVar5 < *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2)) {
      iVar6 = *(int *)(*(int *)(iVar2 + 0xc) + iVar5 * 4);
    }
    iVar5 = *(int *)(in_ECX + 0x3c);
    iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar5 * 4);
    if (*(int *)(iVar2 + 0x164) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int **)(iVar2 + 0x15c);
    }
    iVar2 = *(int *)(iVar2 + 0x6c);
    *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + *(int *)(in_ECX + 0x44) * 0x10) + iVar2 * 4)
         = iVar6;
    if (iVar3 != 0) {
      FUN_00645de0(*(undefined4 *)(*(int *)(iVar3 + 0x20d8) + iVar5 * 4),
                   *(undefined4 *)(in_ECX + 0x44),*(undefined4 *)(iVar6 + 0x4c));
      piVar1 = (int *)(*(int *)(*(int *)(DAT_0125870c + 0x2a88) + iVar2 * 4) + 0x70);
      *piVar1 = *piVar1 + 1;
    }
    iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x3c) * 4);
    if (*(int *)(iVar5 + 0x164) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = **(undefined4 **)(iVar5 + 0x15c);
    }
    FUN_005367b0(uVar4);
    iVar5 = DAT_012588e8;
    *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0x24) + 0x24) = 1;
    if (((*(int *)(iVar5 + 0xb60) == *(int *)(in_ECX + 0x44)) &&
        (iVar3 = (**(code **)(**(int **)(iVar5 + 0xb24) + 0x124))(), iVar5 = DAT_012588e8,
        iVar3 != 0)) &&
       (iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))(), iVar5 = DAT_012588e8,
       *(char *)(*(int *)(iVar3 + 0x20) + 0x67) != '\0')) {
      uVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
      FUN_00740050(uVar4);
      iVar5 = DAT_012588e8;
    }
    if (*(char *)(iVar5 + 0xd11) != '\0') {
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      uStack_c = 0;
      uStack_74 = 0xf;
      uStack_78 = 0;
      auStack_88[0] = auStack_88[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      uStack_c._0_1_ = 1;
      piVar1 = *(int **)(DAT_012588e8 + 0xb24);
      uVar4 = FUN_009888f0(auStack_34);
      uStack_c._0_1_ = 2;
      uVar4 = FUN_00988fa0(uVar4);
      uStack_c = CONCAT31(uStack_c._1_3_,3);
      (**(code **)(*piVar1 + 0x120))(uVar4,auStack_88,local_6c,0);
      if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_50);
      }
      uStack_3c = 0xf;
      uStack_40 = 0;
      uStack_50 = uStack_50 & 0xffffff00;
      if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_34[0]);
      }
      uStack_20 = 0xf;
      uStack_24 = 0;
      auStack_34[0] = auStack_34[0] & 0xffffff00;
      if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_88[0]);
      }
      uStack_74 = 0xf;
      uStack_78 = 0;
      auStack_88[0] = auStack_88[0] & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

