// FUN_005e9500 @ 005e9500 body=[[005e9500, 005e9741]]


void FUN_005e9500(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  code *pcVar3;
  undefined1 local_94 [115];
  char local_21;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8deee;
  local_10 = ExceptionList;
  local_18 = 0;
  local_14 = *(int *)(*(int *)(in_ECX + 0xc) + 0x82c);
  ExceptionList = &local_10;
  do {
    if (local_14 == 0) goto LAB_005e9625;
    local_20 = local_14;
    local_14 = *(int *)(local_14 + 8);
    piVar1 = (int *)FUN_0043a900();
    local_1c = *piVar1;
    FUN_0098fc50();
    FUN_009885d0();
    local_8 = 0;
    FUN_00979160(local_1c);
    local_8._0_1_ = 1;
    local_21 = thunk_FUN_00416db0();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00408ad0();
    local_8 = 0xffffffff;
    FUN_00408ad0();
  } while (local_21 == '\0');
  local_18 = local_1c;
LAB_005e9625:
  if (local_18 == 0) {
    FUN_009885d0();
    local_8 = 2;
    FUN_004f97a0();
    local_8._0_1_ = 3;
    FUN_004015b0(local_94,0x27d,0x10004);
    local_8._0_1_ = 4;
    pcVar3 = FUN_00401280;
    uVar2 = FUN_0098fc50(&DAT_00df12c8,FUN_00401280);
    uVar2 = FUN_00987d20(uVar2);
    uVar2 = FUN_00418e30(uVar2);
    uVar2 = FUN_00418e30(uVar2);
    FUN_00989050(uVar2);
    FUN_00408bd0(pcVar3);
    local_8._0_1_ = 3;
    FUN_00401650();
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00408ad0();
    local_8 = 0xffffffff;
    FUN_00408ad0();
  }
  else {
    *(int *)(in_ECX + 0x10) = local_18;
  }
  ExceptionList = local_10;
  return;
}

