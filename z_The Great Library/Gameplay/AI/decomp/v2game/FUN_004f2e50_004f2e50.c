// FUN_004f2e50 @ 004f2e50 body=[[004f2e50, 004f30cf]]


void FUN_004f2e50(undefined4 *param_1)

{
  int iVar1;
  int unaff_EDI;
  undefined8 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b5146c;
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
  local_8 = 0;
  param_1[5] = iVar1;
  param_1[3] = 0x18d;
  *param_1 = CStateBuilding::vftable;
  param_1[2] = CStateBuilding::vftable;
  param_1[6] = *(undefined4 *)(unaff_EDI + 0x18);
  param_1[7] = *(undefined4 *)(unaff_EDI + 0x1c);
  param_1[8] = *(undefined4 *)(unaff_EDI + 0x20);
  param_1[9] = *(undefined4 *)(unaff_EDI + 0x24);
  FUN_0047db00(param_1 + 10,unaff_EDI + 0x28);
  local_8 = 2;
  FUN_0047db00(param_1 + 0x20,unaff_EDI + 0x80);
  _local_8 = CONCAT31(uStack_7,3);
  param_1[0x36] = *(undefined4 *)(unaff_EDI + 0xd8);
  param_1[0x37] = *(undefined4 *)(unaff_EDI + 0xdc);
  FUN_004c2e10(param_1 + 0x38);
  param_1[0x54] = *(undefined4 *)(unaff_EDI + 0x150);
  param_1[0x55] = *(undefined4 *)(unaff_EDI + 0x154);
  param_1[0x56] = *(undefined4 *)(unaff_EDI + 0x158);
  param_1[0x57] = *(undefined4 *)(unaff_EDI + 0x15c);
  param_1[0x58] = *(undefined4 *)(unaff_EDI + 0x160);
  param_1[0x59] = *(undefined4 *)(unaff_EDI + 0x164);
  param_1[0x5a] = *(undefined4 *)(unaff_EDI + 0x168);
  param_1[0x5b] = *(undefined4 *)(unaff_EDI + 0x16c);
  param_1[0x5c] = *(undefined4 *)(unaff_EDI + 0x170);
  param_1[0x5d] = *(undefined4 *)(unaff_EDI + 0x174);
  param_1[0x5e] = *(undefined4 *)(unaff_EDI + 0x178);
  param_1[0x5f] = *(undefined4 *)(unaff_EDI + 0x17c);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(unaff_EDI + 0x180);
  param_1[0x61] = *(undefined4 *)(unaff_EDI + 0x184);
  *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(unaff_EDI + 0x188);
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
  param_1[0x74] = *(undefined4 *)(unaff_EDI + 0x1d0);
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

