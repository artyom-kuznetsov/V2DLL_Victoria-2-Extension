// FUN_00734e00 @ 00734e00 body=[[00734e00, 00734f69] [00734f6d, 00734fd1] [00734fd5, 0073502a] [0073502e, 00735075] [00735080, 007351e4] [007351e8, 00735213] [00735217, 00735242] [00735246, 007352e3] [007352e7, 00735311] [00735315, 0073536f] [00735373, 007353cb]]


undefined4 FUN_00734e00(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  undefined3 uVar9;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  int in_ECX;
  int iVar10;
  uint uStack_dc;
  uint local_d8;
  int local_d4;
  undefined4 uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  undefined1 local_b4 [4];
  undefined4 uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int *local_a4;
  undefined4 local_a0;
  int *piStack_9c;
  int *local_94 [3];
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_78;
  uint uStack_74;
  undefined4 uStack_68;
  uint uStack_64;
  uint uStack_5c;
  undefined4 uStack_4c;
  uint uStack_48;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  undefined3 extraout_var;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b91eed;
  local_14 = ExceptionList;
  uVar9 = (undefined3)((uint)*(int *)(in_ECX + 0x60) >> 8);
  if (*(char *)(*(int *)(in_ECX + 0x60) + 0x67) != '\0') {
    iVar6 = *(int *)(in_ECX + 0xfc);
    iVar1 = *(int *)(in_ECX + 0xf8);
    local_94[0] = (int *)(in_ECX + 0xf8);
    local_d4 = (*(int *)(in_ECX + 0xec) - *(int *)(in_ECX + 0xe8)) / 0x18;
    uVar3 = local_d8 >> 8;
    local_d8 = local_d8 & 0xffffff00;
    ExceptionList = &local_14;
    if (*(char *)(in_ECX + 0x160) != '\0') {
      ExceptionList = &local_14;
      *(undefined1 *)(in_ECX + 0x160) = 0;
      local_d8 = CONCAT31((int3)uVar3,1);
      FUN_00735ed0(in_ECX,local_94[0]);
      FUN_007353d0(in_ECX,in_ECX + 0xe8,in_ECX + 0xd8);
    }
    if ((iVar6 - iVar1) / 0x28 != (local_94[0][1] - *local_94[0]) / 0x28) {
      FUN_007360e0();
    }
    if (local_d4 != (*(int *)(in_ECX + 0xec) - *(int *)(in_ECX + 0xe8)) / 0x18) {
      FUN_00735dc0();
    }
    FUN_007346d0(local_d8);
    local_a0 = 0xf;
    local_a4 = (int *)0x0;
    local_b4[0] = 0;
    FUN_00409350(&DAT_00dfad80,4);
    local_c = 0;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x7c))(local_b4);
    (**(code **)(*piVar5 + 0x80))();
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_b8);
    }
    FUN_00734890();
    local_a4 = (int *)0xf;
    uStack_a8 = 0;
    uStack_b8 = uStack_b8 & 0xffffff00;
    FUN_00409350("queue",5);
    puStack_10 = (undefined1 *)0x1;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x7c))(&uStack_b8);
    (**(code **)(*piVar5 + 0x80))();
    local_14 = (void *)0xffffffff;
    if (0xf < uStack_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_bc);
    }
    uStack_c4 = 0xf;
    uStack_c8 = 0;
    local_d8 = local_d8 & 0xffffff00;
    FUN_00409350("units_being_built_number",0x18);
    local_14 = (void *)0x2;
    iVar6 = (**(code **)(**(int **)(in_ECX + 0x60) + 0x3c))(&local_d8);
    uStack_18 = 0xffffffff;
    if (0xf < uStack_c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_dc);
    }
    uStack_c8 = 0xf;
    uStack_cc = 0;
    uStack_dc = uStack_dc & 0xffffff00;
    if (iVar6 != 0) {
      iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
      piVar5 = *(int **)(iVar1 + 0x9d8);
      iVar6 = 0;
      iVar10 = DAT_012588e8;
      piStack_9c = *(int **)(DAT_012588e8 + 0xb5c);
      while ((*(int **)(iVar1 + 0x9d8) <= piVar5 && (piVar5 < *(int **)(iVar1 + 0x9dc)))) {
        puVar2 = *(undefined4 **)(*(int *)(*(int *)(iVar10 + 0xacc) + *piVar5 * 4) + 0xd8);
        piVar5 = piVar5 + 1;
        while (piStack_9c = piVar5, puVar2 != (undefined4 *)0x0) {
          local_a4 = (int *)*puVar2;
          puVar2 = (undefined4 *)puVar2[2];
          cVar4 = (**(code **)(*local_a4 + 0x34))();
          piVar5 = piStack_9c;
          iVar10 = DAT_012588e8;
          if ((cVar4 != '\0') && (*(char *)(local_a4[0x22] + 0x39) == *(char *)(in_ECX + 0x78))) {
            iVar6 = iVar6 + 1;
          }
        }
      }
      uStack_ac = 0xf;
      uStack_b0 = 0;
      uStack_c0 = uStack_c0 & 0xffffff00;
      if (iVar6 == 0) {
        FUN_00409350(&DAT_00dfe280,1);
        uStack_18 = 8;
        uStack_c8 = 0xf;
        uStack_cc = 0;
        uStack_dc = uStack_dc & 0xffffff00;
        FUN_00409350("units_being_built_number",0x18);
        uStack_18 = CONCAT31(uStack_18._1_3_,9);
        (**(code **)(**(int **)(in_ECX + 0x60) + 0x3c))(&uStack_dc);
        FUN_00408ed0(&uStack_c0,0,0xffffffff);
        FUN_00a5ecc0(&uStack_c0,0);
      }
      else {
        FUN_00409350(&DAT_00defdfc,1);
        uStack_18 = 3;
        uStack_c8 = 0xf;
        uStack_cc = 0;
        uStack_dc = uStack_dc & 0xffffff00;
        FUN_00409350("units_being_built_number",0x18);
        uStack_18._0_1_ = 4;
        uVar7 = FUN_009888f0(auStack_40);
        uStack_18._0_1_ = 5;
        FUN_00988fa0(uVar7);
        uStack_18._0_1_ = 6;
        uVar7 = FUN_00988f20(&uStack_c0);
        uStack_18 = CONCAT31(uStack_18._1_3_,7);
        local_a4 = (int *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x3c))(&uStack_dc);
        FUN_00408ed0(uVar7,0,0xffffffff);
        FUN_00a5ecc0(uVar7,0);
        if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_5c);
        }
        uStack_48 = 0xf;
        uStack_4c = 0;
        uStack_5c = uStack_5c & 0xffffff00;
        if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_78);
        }
        uStack_64 = 0xf;
        uStack_68 = 0;
        uStack_78 = uStack_78 & 0xffffff00;
        if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_40[0]);
        }
        uStack_2c = 0xf;
        uStack_30 = 0;
        auStack_40[0] = auStack_40[0] & 0xffffff00;
      }
      if (0xf < uStack_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_dc);
      }
      uStack_18 = 0xffffffff;
      uStack_dc = uStack_dc & 0xffffff00;
      uStack_cc = 0;
      uStack_c8 = 0xf;
      if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_c0);
      }
    }
    uStack_18 = 0xffffffff;
    uStack_c8 = 0xf;
    uStack_cc = 0;
    uStack_80 = 0xf;
    uStack_84 = 0;
    local_94[0] = (int *)((uint)local_94[0] & 0xffffff00);
    FUN_00409350("cancel_all_units",0x10);
    uStack_18 = 10;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x34))(local_94);
    local_c = 0xffffffff;
    if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_88);
    }
    uStack_74 = 0xf;
    uStack_78 = 0;
    uStack_88 = uStack_88 & 0xffffff00;
    uVar9 = 0;
    if (piVar5 != (int *)0x0) {
      if ((local_94[0][1] - *local_94[0]) / 0x28 < 1) {
        pcVar8 = *(code **)(*piVar5 + 0xbc);
      }
      else {
        pcVar8 = *(code **)(*piVar5 + 0xb8);
      }
      (*pcVar8)();
      uVar9 = extraout_var;
    }
  }
  ExceptionList = local_14;
  return CONCAT31(uVar9,1);
}

