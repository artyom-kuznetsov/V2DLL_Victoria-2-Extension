// FUN_00926ec0 @ 00926ec0 body=[[00926ec0, 00927022] [00927026, 0092704a] [0092704e, 0092706a] [0092706e, 00927095] [00927099, 00927122]]


void FUN_00926ec0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int in_ECX;
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
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b84d89;
  local_14 = ExceptionList;
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350("CASUSBELLI",10);
  local_c = 0;
  uVar5 = FUN_0090a830(*(undefined4 *)(in_ECX + 0x28),local_6c);
  local_c._0_1_ = 1;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00408ed0(local_88,0,0xffffffff);
  local_c._0_1_ = 2;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00408ed0(uVar5,0,0xffffffff);
  local_c._0_1_ = 3;
  iVar1 = param_1[1];
  puVar6 = (undefined1 *)FUN_00aae9af(0x44);
  local_c._0_1_ = 4;
  uVar4 = (undefined1)local_c;
  local_c._0_1_ = 4;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    local_c._0_1_ = uVar4;
  }
  else {
    *(undefined4 *)(puVar6 + 0x14) = 0xf;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *puVar6 = 0;
    FUN_00408ed0(local_50,0,0xffffffff);
    local_c._0_1_ = 5;
    *(undefined4 *)(puVar6 + 0x30) = 0xf;
    *(undefined4 *)(puVar6 + 0x2c) = 0;
    puVar6[0x1c] = 0;
    FUN_00408ed0(local_34,0,0xffffffff);
    *(int *)(puVar6 + 0x38) = iVar1;
    *(undefined4 *)(puVar6 + 0x3c) = 0;
    puVar6[0x40] = 0;
  }
  iVar2 = param_1[2];
  param_1[1] = puVar6;
  param_1[2] = iVar2 + 1;
  if (iVar2 == 0) {
    *param_1 = puVar6;
  }
  else {
    *(undefined1 **)(iVar1 + 0x3c) = puVar6;
  }
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_c = 0xffffffff;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4);
  puVar7 = (undefined4 *)FUN_00aae9af(0x1c);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    uVar5 = *(undefined4 *)(in_ECX + 0x28);
    puVar7[1] = 0x18d;
    *puVar7 = CCasusBelliConstruction::vftable;
    puVar7[2] = uVar5;
    puVar7[3] = 0;
    puVar7[4] = *(undefined4 *)(in_ECX + 0x10);
    puVar7[5] = *(undefined4 *)(in_ECX + 0x14);
    *(undefined1 *)(puVar7 + 6) = 0;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x156c);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  *(undefined4 **)(iVar1 + 0x156c) = puVar7;
  ExceptionList = local_14;
  return;
}

