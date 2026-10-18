// FUN_0097f2f0 @ 0097f2f0 body=[[0097f2f0, 0097f3e0] [0097f3e4, 0097f45b] [0097f45f, 0097f524] [0097f528, 0097f551] [0097f555, 0097f578] [0097f57c, 0097f5a0] [0097f5a4, 0097f5ff] [0097f603, 0097f62c]]


void FUN_0097f2f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8;
  undefined4 local_98;
  uint local_94;
  undefined4 *local_8c;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41f22;
  local_10 = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x28);
  local_8 = 0;
  local_8c = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350("pop_legend_item",0xf);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = 1;
    local_14 = (int *)(**(code **)(*in_ECX + 0x3c))();
    piVar2 = (int *)(**(code **)(*in_ECX + 0x34))();
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    DAT_013f08e0 = DAT_013f08e0 + 1;
    *(undefined1 *)(puVar1 + 5) = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = &PTR_FUN_00e39158;
    local_8 = 5;
    *puVar1 = &PTR_FUN_00e392f0;
    puVar1[7] = &PTR_FUN_00e39320;
    *(undefined1 *)(puVar1 + 9) = 0;
    uVar3 = (**(code **)(*piVar2 + 0x2c))(local_6c,local_14);
    puVar1[8] = uVar3;
  }
  local_8 = 0xffffffff;
  if ((local_18 & 1) != 0) {
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("legend_title",0xc);
  local_8 = 7;
  (**(code **)(*(int *)puVar1[8] + 0x3c))(local_34);
  FUN_00408ed0(param_2,0,0xffffffff);
  FUN_00a5ecc0(param_2,0);
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  FUN_00409350("legend_value",0xc);
  local_8 = 8;
  local_14 = (int *)puVar1[8];
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00df9644,1);
  local_8._0_1_ = 9;
  FUN_00988d00(local_c4,1);
  local_8._0_1_ = 10;
  uVar3 = FUN_00988f20(local_34);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  local_14 = (int *)(**(code **)(*local_14 + 0x3c))(local_88);
  FUN_00408ed0(uVar3,0,0xffffffff);
  FUN_00a5ecc0(uVar3,0);
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a8);
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = local_a8 & 0xffffff00;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c4[0]);
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_8 = 0xffffffff;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("legend_color",0xc);
  local_8 = 0xc;
  iVar4 = (**(code **)(*(int *)puVar1[8] + 0x44))(local_50);
  (**(code **)(**(int **)(iVar4 + 0x94) + 0x110))(param_3,1);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  (**(code **)(*param_1 + 0x10))(puVar1,0);
  ExceptionList = local_10;
  return;
}

