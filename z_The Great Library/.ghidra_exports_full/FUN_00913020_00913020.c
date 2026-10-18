// FUN_00913020 @ 00913020 body=[[00913020, 009130c3] [009130c7, 009130d9]]


void FUN_00913020(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a0d4;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x70);
  local_8 = 0;
  local_18 = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("DefaultDialog",0xd);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_14 = 1;
    uVar2 = FUN_00615960(iVar1,local_34);
  }
  local_8 = 2;
  (**(code **)(*param_1 + 100))(uVar2,in_ECX + 8);
  if ((iVar1 != 0) && (0xf < local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_10;
  return;
}

