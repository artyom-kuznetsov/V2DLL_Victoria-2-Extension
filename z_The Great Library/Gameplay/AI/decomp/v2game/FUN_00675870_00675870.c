// FUN_00675870 @ 00675870 body=[[00675870, 006758dc] [006758e0, 00675967] [0067596b, 00675992] [00675996, 006759af] [006759b3, 006759cc] [006759d0, 00675a01] [00675a05, 00675a19] [00675a1d, 00675a2a]]


void FUN_00675870(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_a4;
  uint local_90;
  undefined4 local_88;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9e3f6;
  local_10 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("save games/",0xb);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  uVar1 = FUN_00475500();
  iVar2 = FUN_0040b410(uVar1);
  local_11 = *(int *)(iVar2 + 0x10) != 0;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  if ((bool)local_11) {
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350("/save games/",0xc);
    local_8._0_1_ = 1;
    uVar1 = FUN_00475500();
    uVar1 = FUN_0040b410(uVar1);
    local_8._0_1_ = 2;
    FUN_00988fa0(uVar1);
    local_8._0_1_ = 3;
    uVar1 = FUN_00988f20(local_6c);
    local_8._0_1_ = 4;
    FUN_00408ed0(uVar1,0,0xffffffff);
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a4);
    }
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
    local_8._0_1_ = 0;
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
  }
  FUN_00988f20(local_18 + 0x68);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00675a80(*(undefined4 *)(local_18 + 0x84));
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  *(undefined1 *)(local_18 + 100) = 1;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50);
  }
  ExceptionList = local_10;
  return;
}

