// FUN_004ea300 @ 004ea300 body=[[004ea300, 004ea5e9] [004ea5ed, 004ea601]]


undefined4 * FUN_004ea300(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_ECX;
  uint uVar7;
  undefined8 uVar8;
  uint in_stack_0000001c;
  int in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b626d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  param_1[3] = in_ECX;
  *param_1 = CRebelType::vftable;
  param_1[2] = in_stack_00000024;
  param_1[1] = 0x18d;
  param_1[9] = 0xf;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00408ed0(&param_2,0,0xffffffff);
  param_1[0xc] = 0x18d;
  param_1[0xb] = CMeanTimeToHappen::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 1000;
  param_1[0x13] = 0x18d;
  param_1[0x12] = CMeanTimeToHappen::vftable;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 1000;
  param_1[0x1a] = 0x18d;
  param_1[0x19] = CMeanTimeToHappen::vftable;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 1000;
  param_1[0x21] = 0x18d;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  param_1[0x20] = CAndTrigger::vftable;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x28] = 0x18d;
  param_1[0x27] = CEffect::vftable;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0x18d;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0x35) = 0;
  param_1[0x2f] = CAndTrigger::vftable;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x37] = 0x18d;
  param_1[0x36] = CEffect::vftable;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  local_8._0_1_ = 8;
  param_1[0x3e] = 6;
  param_1[0x3f] = 6;
  param_1[0x40] = 6;
  param_1[0x41] = 0xc;
  FUN_00401000(0x3f000000);
  uVar3 = FUN_00b31c00();
  param_1[0x42] = uVar3;
  FUN_00401000(0x447a1fff);
  uVar4 = FUN_00b31c00();
  param_1[0x43] = uVar4;
  param_1[0x44] = uVar3;
  uVar8 = FUN_00b31c36();
  *(undefined8 *)(param_1 + 0x46) = uVar8;
  param_1[0x4a] = 1;
  iVar5 = DAT_01258a34;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  *(undefined1 *)((int)param_1 + 0x126) = 0;
  param_1[0x4b] = &DAT_01010101;
  if (iVar5 == 0) {
    in_stack_00000024 = FUN_00aae9af(0x1dc);
    local_8._0_1_ = 9;
    if (in_stack_00000024 == 0) {
      iVar5 = 0;
      DAT_01258a34 = iVar5;
    }
    else {
      iVar5 = FUN_00972e50();
      DAT_01258a34 = iVar5;
    }
  }
  param_1[0x4c] = iVar5;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  local_8._0_1_ = 10;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 10;
  *(undefined1 *)(param_1 + 0x51) = 0;
  if (DAT_0131bd5c == 0) {
    in_stack_00000024 = FUN_00aae9af(0x1c);
    local_8._0_1_ = 0xb;
    if (in_stack_00000024 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_008b0060();
    }
    local_8._0_1_ = 10;
    FUN_00972090(uVar3);
    uVar2 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar2;
  iVar5 = param_1[0x4e];
  piVar1 = param_1 + 0x4d;
  in_stack_00000024 = 0;
  uVar6 = *(int *)(DAT_0131bd5c + 0x10) - *(int *)(DAT_0131bd5c + 0xc) >> 2;
  uVar7 = iVar5 - *piVar1 >> 2;
  if (uVar7 < uVar6) {
    FUN_0043cb20(piVar1,iVar5,&stack0x00000024);
  }
  else if (uVar6 < uVar7) {
    FUN_0054ab90(piVar1,*piVar1 + uVar6 * 4,iVar5);
  }
  if (in_stack_0000001c < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_2);
}

