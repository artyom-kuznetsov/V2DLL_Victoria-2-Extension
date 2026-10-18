// FUN_00922000 @ 00922000 body=[[00922000, 009222b4] [009222b8, 009222d7] [009222db, 009222f7] [009222fb, 00922317] [0092231b, 00922331]]


void FUN_00922000(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int in_ECX;
  int iVar8;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c;
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
  
  iVar4 = DAT_012587e4;
  iVar3 = DAT_012586dc;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b84d89;
  local_14 = ExceptionList;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x2c) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  iVar8 = 0;
  ExceptionList = &local_14;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  iVar2 = *(int *)(*(int *)(iVar3 + 0x30) + 0x404);
  if (iVar2 < 0) {
    iVar8 = -iVar2;
    *(int *)(iVar1 + 0x48) = iVar2;
  }
  *(int *)(iVar1 + 0x4c) = iVar8;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + *(int *)(in_ECX + 0x2c) * 4) + 0xbe8) +
                  *(int *)(in_ECX + 0x14) * 4);
  *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  *(int *)(iVar1 + 0x9c) =
       *(int *)(iVar1 + 0x9c) + (*(int *)(*(int *)(iVar3 + 0x30) + 0x2f4) / 1000) * 0x18;
  *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(in_ECX + 0xc);
  FUN_005179e0();
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  if ((*(int *)(DAT_012588e8 + 0xb0c) <= *(int *)(iVar1 + 0x90)) &&
     (*(int *)(iVar1 + 0x98) == *(int *)(in_ECX + 0x2c))) {
    *(undefined4 *)(iVar1 + 0x90) = DAT_01259abc;
    *(undefined4 *)(iVar1 + 0x94) = 0x2d2d2d;
    *(undefined4 *)(iVar1 + 0x98) = 0;
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  FUN_00409350("TARGET");
  local_c = 0;
  uVar6 = FUN_004f97a0();
  local_c._0_1_ = 1;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00408ed0(local_88,0);
  local_c._0_1_ = 2;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00408ed0(uVar6,0);
  local_c._0_1_ = 3;
  iVar1 = param_1[1];
  puVar7 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 4;
  uVar5 = (undefined1)local_c;
  local_c._0_1_ = 4;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    local_c._0_1_ = uVar5;
  }
  else {
    *(undefined4 *)(puVar7 + 0x14) = 0xf;
    *(undefined4 *)(puVar7 + 0x10) = 0;
    *puVar7 = 0;
    FUN_00408ed0(local_50,0);
    local_c._0_1_ = 5;
    *(undefined4 *)(puVar7 + 0x30) = 0xf;
    *(undefined4 *)(puVar7 + 0x2c) = 0;
    puVar7[0x1c] = 0;
    FUN_00408ed0(local_34,0);
    *(int *)(puVar7 + 0x38) = iVar1;
    *(undefined4 *)(puVar7 + 0x3c) = 0;
    puVar7[0x40] = 0;
  }
  iVar2 = param_1[2];
  param_1[1] = puVar7;
  param_1[2] = iVar2 + 1;
  if (iVar2 == 0) {
    *param_1 = puVar7;
  }
  else {
    *(undefined1 **)(iVar1 + 0x3c) = puVar7;
  }
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (local_58 < 0x10) {
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (local_74 < 0x10) {
      ExceptionList = local_14;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

