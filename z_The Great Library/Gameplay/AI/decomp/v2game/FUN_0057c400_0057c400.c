// FUN_0057c400 @ 0057c400 body=[[0057c400, 0057c56a] [0057c56e, 0057c596] [0057c59a, 0057c5c4] [0057c5c8, 0057c61c] [0057c620, 0057c6e6] [0057c6ea, 0057c715] [0057c719, 0057c746] [0057c74a, 0057c7df]]


void FUN_0057c400(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int local_cc;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 uStack_40;
  uint uStack_3c;
  uint local_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9fc86;
  local_14 = ExceptionList;
  local_cc = 0;
  if ((*(uint *)(in_ECX + 0x44) != 0) || (ExceptionList = &local_14, *(int *)(in_ECX + 0x48) != 0))
  {
    iVar5 = DAT_01258a94;
    if (*(uint *)(in_ECX + 0x44) < 0x1269) {
      iVar5 = DAT_01258a98;
    }
    if (iVar5 == 0) {
      local_cc = 0;
      ExceptionList = &local_14;
    }
    else {
      ExceptionList = &local_14;
      local_cc = FUN_009c1d40();
    }
  }
  if (*(char *)(in_ECX + 0x54) != '\0') {
    FUN_004a4cb0(local_cc + 0x1c8);
    goto LAB_0057c798;
  }
  if (*(int *)(in_ECX + 0x3c) == 0) {
    FUN_0052ce60(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x50) * 4),
                 *(undefined4 *)(in_ECX + 0x40));
    if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
      iVar2 = *(int *)(local_cc + 0x60);
      for (iVar5 = *(int *)(in_ECX + 0x40); iVar5 != 0; iVar5 = iVar5 + -1) {
        iVar2 = *(int *)(iVar2 + 0x224);
      }
      iVar5 = *(int *)(iVar2 + 0x18);
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_c = 3;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_c._0_1_ = 4;
      piVar1 = *(int **)(DAT_012588e8 + 0xb24);
      uVar4 = FUN_00988fa0(iVar5 + 0x20);
      local_c = CONCAT31(local_c._1_3_,5);
      (**(code **)(*piVar1 + 0x120))(uVar4,local_6c,local_a4,0);
      if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34);
      }
      uStack_20 = 0xf;
      uStack_24 = 0;
      local_34 = local_34 & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
      local_c = 0xffffffff;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a4[0]);
      }
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      goto LAB_0057c75a;
    }
  }
  else {
    FUN_0052c6b0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x50) * 4),
                 *(int *)(in_ECX + 0x3c),local_cc);
    if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
      local_ac = 0xf;
      local_b0 = 0;
      local_c0[0] = local_c0[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_c = 0;
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_c._0_1_ = 1;
      piVar1 = *(int **)(DAT_012588e8 + 0xb24);
      uVar4 = FUN_00988fa0(*(int *)(in_ECX + 0x3c) + 0x20);
      local_c = CONCAT31(local_c._1_3_,2);
      (**(code **)(*piVar1 + 0x120))(uVar4,local_88,local_c0,0);
      if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50);
      }
      uStack_3c = 0xf;
      uStack_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_88[0]);
      }
      local_c = 0xffffffff;
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c0[0]);
      }
      local_ac = 0xf;
      local_b0 = 0;
      local_c0[0] = local_c0[0] & 0xffffff00;
LAB_0057c75a:
      local_c = 0xffffffff;
    }
  }
  if (((*(int *)(local_cc + 0x244) == 0) || (*(int *)(local_cc + 0x244) == 3)) &&
     (cVar3 = FUN_004a50e0(), cVar3 == '\0')) {
    *(undefined4 *)(local_cc + 0x244) = 4;
    *(undefined4 *)(local_cc + 0x238) = 0;
    *(undefined4 *)(local_cc + 0x23c) = 0;
    *(undefined4 *)(local_cc + 0x240) = 0;
  }
LAB_0057c798:
  iVar2 = DAT_012588e8;
  *(undefined1 *)(DAT_012588dc + 0x3a28) = 1;
  iVar5 = *(int *)(iVar2 + 0xb60);
  if ((*(int *)(local_cc + 0x5c) == iVar5) || (*(int *)(in_ECX + 0x50) == iVar5)) {
    (**(code **)(**(int **)(iVar2 + 0xb24) + 0xe0))(0);
  }
  ExceptionList = local_14;
  return;
}

