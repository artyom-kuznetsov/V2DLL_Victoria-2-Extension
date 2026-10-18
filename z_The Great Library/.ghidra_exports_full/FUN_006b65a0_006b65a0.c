// FUN_006b65a0 @ 006b65a0 body=[[006b65a0, 006b6650] [006b6654, 006b69ee]]


undefined4 * FUN_006b65a0(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f1ac;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00647d30(param_1,param_3);
  local_8 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("nudge_window",0xc);
  local_8._0_1_ = 1;
  iVar2 = (**(code **)(*param_3 + 0x48))(local_34);
  local_14 = param_1 + 0x22;
  *local_14 = &PTR___purecall_00e38700;
  local_18 = param_1 + 0x23;
  param_1[0x28] = 0xf;
  param_1[0x27] = 0;
  *(undefined1 *)local_18 = 0;
  FUN_00408ed0(iVar2 + 0x24,0,0xffffffff);
  local_8._0_1_ = 2;
  FUN_009a4bd0(local_18,local_14);
  local_8._0_1_ = 4;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  param_1[0x2c] = param_3;
  puVar1 = param_1 + 0x2e;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  *param_1 = CNudgeIdler::vftable;
  param_1[0x22] = CNudgeIdler::vftable;
  param_1[0x2b] = param_2;
  param_1[0x2d] = param_4;
  FUN_0063f480(puVar1);
  local_8._0_1_ = 5;
  param_1[0x10b] = 0;
  FUN_0098b350(param_1 + 0x10c);
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  *(undefined1 *)(param_1 + 0x172) = 0;
  param_1[0x173] = 0;
  FUN_006becc0(FUN_006ba840,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_006becc0(FUN_006baa50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_006becc0(FUN_006bac20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_006becc0(FUN_006bae10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_006becc0(FUN_006bb2e0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_006becc0(FUN_006bb7b0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_006becc0(FUN_006bbc80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_006becc0(FUN_006bc150,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_006becc0(FUN_006bc1e0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_006becc0(FUN_006bc5b0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_006becc0(FUN_006bc860,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_006becc0(FUN_006bcc00,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8 = CONCAT31(local_8._1_3_,0x13);
  param_1[0x266] = 0;
  FUN_009fa120(param_1 + 0x267,param_2,param_3);
  param_1[0x294] = CRadioButtonGroupObserverGlue<CNudgeIdler>::vftable;
  param_1[0x295] = param_1;
  param_1[0x297] = 0;
  param_1[0x296] = FUN_006bcef0;
  param_1[0x29a] = 0;
  param_1[0x29b] = 0;
  param_1[0x29c] = FUN_006b6bc0;
  param_1[0x29d] = 0;
  param_1[0x29e] = FUN_006b6bc0;
  param_1[0x298] = CCheckBoxObserverGlue<CNudgeIdler>::vftable;
  param_1[0x299] = param_1;
  param_1[0x29f] = 0;
  param_1[0x2a0] = 0;
  param_1[0x2a1] = 0;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a5] = 0;
  param_1[0x2a6] = 0;
  param_1[0x2aa] = 0;
  param_1[0x2ab] = 0;
  param_1[0x2ac] = 0;
  param_1[0x2ad] = 0;
  DAT_012589a4 = 1;
  DAT_00f092fb = 0;
  if (*(char *)((int)param_1 + 0x40e) == '\0') {
    param_1[0xfb] = DAT_00f07eb0;
    param_1[0xfc] = 0x44160000;
    param_1[0xfd] = param_1[0xfb];
    param_1[0xfe] = param_1[0xfc];
  }
  iVar2 = *(int *)(param_1[0x2d] + 0x124);
  *(undefined4 **)(iVar2 + 4) = puVar1;
  *(undefined4 **)(iVar2 + 0x20cc) = puVar1;
  ExceptionList = local_10;
  return param_1;
}

