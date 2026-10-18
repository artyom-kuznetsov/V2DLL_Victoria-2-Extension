// FUN_00403580 @ 00403580 body=[[00403580, 004036d6] [004036da, 00403713]]


void FUN_00403580(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_4c8 [12];
  undefined4 uStack_4bc;
  uint *local_4b8;
  char *local_4b4;
  undefined ***pppuStack_4b0;
  undefined **local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined1 local_3cc;
  undefined1 local_3c8;
  undefined4 *local_3c0;
  undefined1 local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_84;
  undefined4 local_80;
  int local_40;
  undefined1 *local_3c;
  undefined4 *local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b5c6c7;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffb54;
  local_8 = 0;
  pppuStack_4b0 = (undefined ***)0xf;
  local_4b4 = "UNNAMED_SESSION";
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_4b8 = (uint *)0x4035c5;
  ExceptionList = &local_10;
  FUN_00409350();
  pppuStack_4b0 = (undefined ***)0x114;
  local_8._0_1_ = 1;
  local_4b4 = (char *)0x4035d3;
  puVar1 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 2;
  local_34 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    local_3c0 = (undefined4 *)0x0;
  }
  else {
    pppuStack_4b0 = (undefined ***)0x3c;
    local_4b4 = (char *)0x4035ea;
    iVar2 = FUN_00aae9af();
    local_8._0_1_ = 3;
    local_40 = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      local_3c = local_4c8;
      local_4b4 = (char *)0xf;
      local_4b8 = (uint *)0x0;
      local_4c8[0] = 0;
      FUN_00409350(&DAT_00ded94d,0);
      uVar3 = FUN_00992740(iVar2,param_2,0);
    }
    local_8._0_1_ = 2;
    *puVar1 = &PTR_FUN_00e37c30;
    puVar1[1] = uVar3;
    *(undefined2 *)(puVar1 + 0x44) = 0x100;
    pppuStack_4b0 = (undefined ***)0x403646;
    FUN_00990100();
    *puVar1 = &PTR_FUN_00e37c3c;
    local_3c0 = puVar1;
  }
  local_3dc = &PTR_FUN_00e38524;
  local_3d8 = 0;
  local_3d4 = 0;
  local_3d0 = 0;
  local_3cc = 0;
  pppuStack_4b0 = (undefined ***)0xffffffff;
  local_8._0_1_ = 4;
  local_4b4 = (char *)0x0;
  local_4b8 = local_30;
  local_3c8 = 0;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0 = 0;
  uStack_4bc = 0x4036ab;
  FUN_00408ed0();
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_84 = 1;
  local_80 = 0;
  local_8._0_1_ = 6;
  if (0xf < local_1c) {
    pppuStack_4b0 = (undefined ***)local_30[0];
                    /* WARNING: Subroutine does not return */
    local_4b4 = &UNK_004036d7;
    FUN_00aae91b();
  }
  pppuStack_4b0 = &local_3dc;
  local_4b4 = (char *)param_1;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_4b8 = (uint *)0x4036f3;
  FUN_00402230();
  local_8 = (uint)local_8._1_3_ << 8;
  pppuStack_4b0 = (undefined ***)0x403701;
  FUN_009a0dc0();
  ExceptionList = local_10;
  return;
}

