// FUN_0091f3f0 @ 0091f3f0 body=[[0091f3f0, 0091f4a7] [0091f4ab, 0091f554] [0091f558, 0091f57f] [0091f583, 0091f5a4] [0091f5a8, 0091f5c3] [0091f5c7, 0091f5e2] [0091f5e6, 0091f5ff] [0091f603, 0091f61c]]


undefined4 FUN_0091f3f0(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  int iStack_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  uint uStack_ac;
  undefined1 local_a8;
  undefined4 uStack_9c;
  uint local_98;
  undefined4 local_94;
  uint uStack_90;
  undefined1 local_8c;
  undefined4 uStack_80;
  uint local_7c;
  undefined4 local_78;
  uint uStack_74;
  undefined1 local_70;
  undefined4 uStack_64;
  uint local_60;
  undefined4 local_5c;
  uint uStack_58;
  undefined4 local_54 [3];
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  uint local_38;
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b84fc1;
  pvStack_14 = ExceptionList;
  local_38 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_c = 0;
  ExceptionList = &pvStack_14;
  FUN_0091fa10(in_ECX,0);
  local_78 = 0xf;
  local_7c = 0;
  local_8c = 0;
  local_c._0_1_ = 1;
  if ((local_b4 - local_b8 & 0xfffffffcU) != 0) {
    uVar1 = FUN_0091fc40(in_ECX,local_54,&local_b8,1);
    local_c._0_1_ = 2;
    FUN_00408ed0(uVar1,0,0xffffffff);
    local_c._0_1_ = 1;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
  }
  local_c._0_1_ = 1;
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = 0;
  FUN_00409350("VERSUS",6);
  local_c._0_1_ = 3;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = 0;
  FUN_00409350("_DESC",5);
  local_c = CONCAT31(local_c._1_3_,4);
  (**(code **)(*in_ECX + 0x24))(local_54);
  puStack_10._0_1_ = 5;
  uVar1 = FUN_00988f20(&uStack_74);
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
  FUN_0055d590(param_1,uVar1,&uStack_90);
  if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38);
  }
  uStack_24 = 0xf;
  uStack_28 = 0;
  local_38 = local_38 & 0xffffff00;
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_58);
  }
  uStack_44 = 0xf;
  uStack_48 = 0;
  uStack_58 = uStack_58 & 0xffffff00;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_74);
  }
  local_60 = 0xf;
  uStack_64 = 0;
  uStack_74 = uStack_74 & 0xffffff00;
  if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_ac);
  }
  local_98 = 0xf;
  uStack_9c = 0;
  uStack_ac = uStack_ac & 0xffffff00;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_90);
  }
  local_7c = 0xf;
  uStack_80 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  if (iStack_bc != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iStack_bc);
  }
  ExceptionList = pvStack_18;
  return param_1;
}

