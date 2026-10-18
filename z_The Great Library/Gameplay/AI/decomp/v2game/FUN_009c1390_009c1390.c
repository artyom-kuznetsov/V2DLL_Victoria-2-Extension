// FUN_009c1390 @ 009c1390  (requested 009C1390, first bytes: 55 8B EC 83 E4 F8 6A FF)


void FUN_009c1390(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 uStack_114;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  pvStack_14 = ExceptionList;
  uVar1 = *param_1;
  iVar2 = DAT_01258a94;
  if (uVar1 < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  ExceptionList = &pvStack_14;
  if (iVar2 == 0) {
LAB_009c1510:
    if ((param_1[1] != DAT_01268ff0) || (*param_1 != DAT_01268fec)) {
      *(uint *)(in_ECX + 8) = *param_1;
      *(uint *)(in_ECX + 0xc) = param_1[1];
      goto LAB_009c1568;
    }
  }
  else {
    ExceptionList = &pvStack_14;
    iVar2 = FUN_009c1d40();
    if (iVar2 == 0) goto LAB_009c1510;
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    FUN_00409350("id.cpp",6);
    local_c = 0;
    uVar3 = FUN_004015b0(local_f4,0x54,0x1000);
    local_c._0_1_ = 1;
    FUN_00987d50(uVar3,"Failed to create id ",0x14,0);
    uVar3 = FUN_00447240(uVar3,uVar1,extraout_ECX,&DAT_00ded950,extraout_ECX,uStack_114,extraout_ECX
                         ,". Already exists in game.");
    uVar3 = FUN_00418e30(uVar3);
    uVar3 = FUN_00447240(uVar3);
    uVar3 = FUN_00418e30(uVar3);
    FUN_00401280(uVar3);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    local_c = 0xffffffff;
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    if (*param_1 < 0x65) {
      *(uint *)(in_ECX + 8) = *param_1;
      *(uint *)(in_ECX + 0xc) = param_1[1];
      goto LAB_009c1568;
    }
  }
  DAT_0131ca68 = FUN_009c12d0();
  iVar2 = DAT_01258a9c + 1;
  DAT_01258a9c = iVar2;
  *(uint *)(in_ECX + 8) = DAT_01258a90 + 0x1268;
  *(int *)(in_ECX + 0xc) = iVar2;
LAB_009c1568:
  FUN_009c1590();
  *(undefined1 *)(in_ECX + 0x10) = 1;
  ExceptionList = pvStack_14;
  return;
}

