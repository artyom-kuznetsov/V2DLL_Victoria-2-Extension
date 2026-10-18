// FUN_00977e60 @ 00977e60 body=[[00977e60, 00977eae] [00977eb0, 00977f9d] [00977fa1, 00978039] [0097803d, 0097805f] [00978063, 00978093] [00978097, 009780f0]]


void FUN_00977e60(void)

{
  int iVar1;
  void **ppvVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 ****ppppuVar6;
  undefined4 extraout_ECX;
  undefined *puVar7;
  int local_164;
  undefined4 *local_15c;
  int local_158;
  undefined4 uStack_154;
  undefined4 ***apppuStack_150 [4];
  undefined4 uStack_140;
  uint uStack_13c;
  uint auStack_12c [4];
  undefined4 uStack_11c;
  uint uStack_118;
  uint uStack_110;
  undefined4 uStack_100;
  uint uStack_fc;
  uint uStack_f4;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined **appuStack_60 [18];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar1 = DAT_01258a48;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b83132;
  pvStack_14 = ExceptionList;
  local_164 = 1;
  ExceptionList = &pvStack_14;
  ppvVar2 = &pvStack_14;
  if (4 < (int)(*(int *)(DAT_01258a48 + 0x2c) - *(int *)(DAT_01258a48 + 0x28) & 0xfffffffcU)) {
    do {
      ExceptionList = ppvVar2;
      uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x28) + local_164 * 4);
      cVar3 = (**(code **)(**(int **)(in_ECX[0x16] + local_164 * 4) + 0x34))();
      if (cVar3 == '\0') {
        uStack_118 = 0xf;
        uStack_11c = 0;
        auStack_12c[0] = auStack_12c[0] & 0xffffff00;
        FUN_00409350("party.cpp",9);
        uStack_c = 0;
        local_15c = (undefined4 *)FUN_00974c50(uVar5);
        uStack_c._0_1_ = 1;
        puVar4 = (undefined4 *)FUN_0055dd40(" is missing definition for ");
        puVar7 = &DAT_00df12c8;
        uStack_c._0_1_ = 2;
        FUN_009790b0(in_ECX,apppuStack_150);
        uStack_c._0_1_ = 3;
        uVar5 = FUN_004015b0(auStack_12c,0xbf,0x10004,puVar7);
        uStack_c._0_1_ = 6;
        ppppuVar6 = (undefined4 ****)apppuStack_150[0];
        if (uStack_13c < 0x10) {
          ppppuVar6 = apppuStack_150;
        }
        uStack_154 = FUN_00418e30(uVar5,ppppuVar6);
        uStack_c._0_1_ = 5;
        if (0xf < uStack_13c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(apppuStack_150[0]);
        }
        uStack_13c = 0xf;
        uStack_140 = 0;
        apppuStack_150[0] = (undefined4 ***)((uint)apppuStack_150[0] & 0xffffff00);
        uVar5 = FUN_00418e30(uStack_154);
        if (0xf < (uint)puVar4[5]) {
          puVar4 = (undefined4 *)*puVar4;
        }
        uVar5 = FUN_00418e30(uVar5,puVar4,extraout_ECX);
        uVar5 = FUN_00418e30(uVar5);
        puVar4 = local_15c;
        if (0xf < (uint)local_15c[5]) {
          puVar4 = (undefined4 *)*local_15c;
        }
        uVar5 = FUN_00418e30(uVar5,puVar4);
        FUN_00401280(uVar5);
        uStack_c = CONCAT31(uStack_c._1_3_,2);
        FUN_00987ac0(appuStack_60);
        appuStack_60[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_60);
        if (0xf < uStack_fc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_110);
        }
        uStack_fc = 0xf;
        uStack_100 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_f4);
        }
        uStack_c = 0xffffffff;
        uStack_e0 = 0xf;
        uStack_e4 = 0;
        uStack_f4 = uStack_f4 & 0xffffff00;
        if (0xf < uStack_118) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_12c[0]);
        }
      }
      local_164 = local_164 + 1;
      ppvVar2 = ExceptionList;
    } while (local_164 < *(int *)(iVar1 + 0x2c) - *(int *)(iVar1 + 0x28) >> 2);
  }
  local_158 = DAT_00f09154;
  local_15c = (undefined4 *)0x2d;
  DAT_00f09154 = DAT_00f09154 + 1;
  (**(code **)(*in_ECX + 0x18))(&local_15c);
  ExceptionList = pvStack_18;
  return;
}

