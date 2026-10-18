// FUN_00905360 @ 00905360 body=[[00905360, 00905469] [0090546f, 009054c8] [009054cc, 009054e2]]


void FUN_00905360(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_134 [8];
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint *local_124;
  char *local_120;
  undefined ***pppuStack_11c;
  undefined4 *local_108;
  int local_104;
  undefined4 local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  undefined1 *local_dc;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b58861;
  pvStack_14 = ExceptionList;
  local_108 = (undefined4 *)0x0;
  local_104 = 0;
  local_100 = 0;
  pppuStack_11c = (undefined ***)&local_108;
  local_120 = (char *)param_1;
  local_c = 0;
  local_124 = (uint *)0x9053a9;
  ExceptionList = &pvStack_14;
  FUN_0045be80();
  puVar1 = local_108;
  if ((local_104 - (int)local_108) / 0x1c == 2) {
    pppuStack_11c = (undefined ***)local_108;
    if (0xf < (uint)local_108[5]) {
      pppuStack_11c = (undefined ***)*local_108;
    }
    local_120 = (char *)0x905481;
    uVar2 = FUN_00aaf0c5();
    local_dc = local_134;
    *(undefined4 *)(in_ECX + 0x1c) = uVar2;
    local_120 = (char *)0xf;
    local_124 = (uint *)0x0;
    local_134[0] = 0;
    FUN_00408ed0(puVar1 + 7,0,0xffffffff);
    FUN_0043bb10();
    *(undefined1 *)(in_ECX + 0x24) = 1;
  }
  else {
    pppuStack_11c = (undefined ***)0xb;
    local_120 = "trigger.cpp";
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8[0] = local_f8[0] & 0xffffff00;
    local_124 = (uint *)0x9053f0;
    FUN_00409350();
    pppuStack_11c = (undefined ***)0x10004;
    local_124 = local_f8;
    local_120 = (char *)0x27f9;
    local_c._0_1_ = 1;
    uStack_128 = 0x905410;
    uStack_128 = FUN_004015b0();
    pppuStack_11c = (undefined ***)0x0;
    local_120 = (char *)0x29;
    local_124 = (uint *)0xe2faa0;
    local_c._0_1_ = 2;
    uStack_12c = 0x905429;
    FUN_00987d50();
    pppuStack_11c = appuStack_60;
    local_c = CONCAT31(local_c._1_3_,1);
    local_120 = (char *)0x90543e;
    FUN_00987ac0();
    pppuStack_11c = appuStack_60;
    appuStack_60[0] = std::ios_base::vftable;
    local_120 = (char *)0x905456;
    FUN_00aad52d();
    if (0xf < local_e4) {
      pppuStack_11c = (undefined ***)local_f8[0];
                    /* WARNING: Subroutine does not return */
      local_120 = &UNK_0090546a;
      FUN_00aae91b();
    }
  }
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = pvStack_14;
    return;
  }
  pppuStack_11c = (undefined ***)0x9054c3;
  FUN_00413860();
  pppuStack_11c = (undefined ***)puVar1;
                    /* WARNING: Subroutine does not return */
  local_120 = &UNK_009054c9;
  FUN_00aae91b();
}

