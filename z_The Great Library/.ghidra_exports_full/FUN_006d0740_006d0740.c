// FUN_006d0740 @ 006d0740 body=[[006d0740, 006d089c] [006d08a0, 006d08c8] [006d08cc, 006d08ee] [006d08f2, 006d091b] [006d091f, 006d099d] [006d09a1, 006d0a36] [006d0a3a, 006d0a60] [006d0a64, 006d0b29] [006d0b2d, 006d0b42] [006d0b46, 006d0b5a]]


/* WARNING: Type propagation algorithm not settling */

void FUN_006d0740(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 unaff_ESI;
  char ****local_e0;
  uint *local_dc;
  int iStack_cc;
  int iStack_c8;
  uint local_c4;
  undefined1 ****local_c0;
  uint local_bc [2];
  undefined4 uStack_b4;
  uint uStack_b0;
  uint local_ac;
  uint local_a8;
  undefined1 ****local_a0;
  uint uStack_9c;
  undefined1 auStack_98 [4];
  uint local_94;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 local_84;
  uint local_80 [2];
  undefined4 local_78;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  undefined1 auStack_54 [4];
  undefined4 local_50 [5];
  uint uStack_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4bffa;
  local_14 = ExceptionList;
  local_dc = (uint *)0x6d0770;
  ExceptionList = &local_14;
  iVar3 = FUN_006d06b0();
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x24);
    local_78 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
    local_e0 = *(char *****)(iVar3 + 0x20);
    local_c0 = (undefined1 ****)&local_e0;
    local_dc = (uint *)iVar1;
    local_a0 = local_e0;
    FUN_00988bb0(local_50,1);
    local_c._0_1_ = 0;
    local_c._1_3_ = 0;
    if ((-1 < iVar1) && ((0 < iVar1 || ((undefined1 ****)0x1e0000 < local_a0)))) {
      local_dc = (uint *)0x2;
      local_e0 = (char ****)&DAT_00dedc20;
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = local_bc[0] & 0xffffff00;
      FUN_00409350();
      local_c._0_1_ = 1;
      local_dc = (uint *)0x2;
      local_e0 = (char ****)&DAT_00df8510;
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      FUN_00409350();
      local_dc = local_50;
      local_c._0_1_ = 2;
      local_e0 = (undefined1 ****)0x6d084f;
      FUN_00988f20();
      local_dc = local_bc;
      local_c._0_1_ = 3;
      local_e0 = (undefined1 ****)0x6d086a;
      uVar4 = FUN_00988f20();
      local_dc = (uint *)0xffffffff;
      local_e0 = (undefined1 ****)0x0;
      local_c._0_1_ = 4;
      FUN_00408ed0(uVar4);
      if (0xf < local_20) {
        local_dc = (uint *)local_34;
                    /* WARNING: Subroutine does not return */
        local_e0 = (char ****)&UNK_006d089d;
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      if (0xf < local_80[0]) {
        local_dc = (uint *)local_94;
                    /* WARNING: Subroutine does not return */
        local_e0 = (char ****)&UNK_006d08c9;
        FUN_00aae91b();
      }
      local_80[0] = 0xf;
      local_84 = 0;
      local_94 = local_94 & 0xffffff00;
      if (0xf < local_58) {
        local_dc = (uint *)local_6c;
                    /* WARNING: Subroutine does not return */
        local_e0 = (char ****)&UNK_006d08ef;
        FUN_00aae91b();
      }
      local_c._0_1_ = 0;
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      if (0xf < local_a8) {
        local_dc = (uint *)local_bc[0];
                    /* WARNING: Subroutine does not return */
        local_e0 = (char ****)&UNK_006d091c;
        FUN_00aae91b();
      }
    }
    local_c._0_1_ = 0;
    local_dc = (uint *)0xb;
    local_e0 = (char ****)0xe0d888;
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    FUN_00409350();
    local_c = CONCAT31(local_c._1_3_,5);
    local_dc = local_bc;
    local_e0 = (undefined1 ****)0x6d095a;
    (**(code **)(**(int **)(local_c4 + 4) + 0x3c))();
    local_e0 = (undefined1 ****)0xffffffff;
    FUN_00408ed0(auStack_54,0);
    local_e0 = (undefined1 ****)0x0;
    FUN_00a5ecc0(auStack_54);
    puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
    if (0xf < local_ac) {
      local_e0 = local_c0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e0 = (undefined1 ****)0x4;
    local_ac = 0xf;
    uStack_b0 = 0;
    local_c0 = (undefined1 ****)((uint)local_c0 & 0xffffff00);
    FUN_00409350(&DAT_00e0d70c);
    puStack_10._0_1_ = 6;
    piVar5 = *(int **)(iStack_c8 + 4);
    local_e0 = (undefined1 ****)0x2;
    local_c4 = FUN_009c9c70(auStack_98);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,7);
    local_e0 = (char ****)&local_c0;
    (**(code **)(*piVar5 + 0x3c))();
    FUN_00408ed0(iStack_c8,0,0xffffffff);
    FUN_00a5ecc0(iStack_c8,0);
    if (0xf < uStack_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_9c);
    }
    local_14 = (void *)((uint)local_14 & 0xffffff00);
    uStack_88 = 0xf;
    uStack_8c = 0;
    uStack_9c = uStack_9c & 0xffffff00;
    if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c4);
    }
    if (*(int *)(iVar3 + 0x28) != 0) {
      uVar2 = *(uint *)(local_80[0] + 0x15a0);
      local_a8 = __alldiv(uVar2 << 0x1e,
                          (((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf |
                          (uVar2 & 0x1ffff) >> 2,0x1f40000,0);
      FUN_00472300(local_80);
    }
    uStack_b0 = 0xf;
    uStack_b4 = 0;
    local_c4 = local_c4 & 0xffffff00;
    FUN_00409350("suppress_button",0xf);
    local_14 = (void *)CONCAT31(local_14._1_3_,8);
    piVar5 = (int *)(**(code **)(**(int **)(iStack_cc + 4) + 0x34))(&local_c4);
    if ((char)((uint)unaff_ESI >> 0x18) == '\0') {
      pcVar6 = *(code **)(*piVar5 + 0xbc);
    }
    else {
      pcVar6 = *(code **)(*piVar5 + 0xb8);
    }
    (*pcVar6)();
    if (0xf < local_a8) {
      local_dc = (uint *)local_bc[0];
                    /* WARNING: Subroutine does not return */
      local_e0 = (char ****)&UNK_006d0b2a;
      FUN_00aae91b();
    }
    if (0xf < uStack_3c) {
      local_dc = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_e0 = (char ****)&UNK_006d0b43;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return;
}

