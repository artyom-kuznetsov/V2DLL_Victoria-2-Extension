// FUN_004f2bc0 @ 004f2bc0 body=[[004f2bc0, 004f2e14]]


void FUN_004f2bc0(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b514c2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CSelectable::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = DAT_012586ec;
  local_8 = 0;
  uStack_7 = 0;
  param_1[4] = 0;
  if (iVar1 == 0) {
    iVar1 = FUN_00aae9af(0x2c);
    local_8 = 1;
    if (iVar1 == 0) {
      iVar1 = 0;
      DAT_012586ec = iVar1;
    }
    else {
      iVar1 = FUN_0044bbb0(iVar1);
      DAT_012586ec = iVar1;
    }
  }
  param_1[5] = iVar1;
  param_1[3] = 0x18d;
  *param_1 = CStateBuilding::vftable;
  param_1[2] = CStateBuilding::vftable;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  param_1[9] = 0;
  param_1[0xb] = 0x18d;
  param_1[10] = CGoodsPool::vftable;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  local_8 = 2;
  _memset(param_1 + 0xc,0,0x40);
  FUN_00423920();
  param_1[0x21] = 0x18d;
  param_1[0x20] = CGoodsPool::vftable;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  local_8 = 4;
  _memset(param_1 + 0x22,0,0x40);
  FUN_00423920();
  _local_8 = CONCAT31(uStack_7,5);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_004edf30(param_1 + 0x38);
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  uVar2 = FUN_00b31c36();
  *(undefined8 *)(param_1 + 0x82) = uVar2;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  FUN_004f57f0();
  ExceptionList = local_10;
  return;
}

