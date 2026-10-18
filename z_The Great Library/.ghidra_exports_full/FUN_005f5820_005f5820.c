// FUN_005f5820 @ 005f5820 body=[[005f5820, 005f59d8]]


void FUN_005f5820(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined1 local_68 [28];
  undefined1 local_4c [56];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8df23;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0098fc50();
  FUN_009885d0();
  local_8 = 0;
  local_14 = FUN_00561bc0(DAT_012587f0);
  local_8 = 0xffffffff;
  FUN_00408ad0();
  if (local_14 == 0) {
    FUN_009885d0();
    local_8 = 1;
    (**(code **)(**(int **)(in_ECX + 0xc) + 0x1c))(local_4c);
    local_8._0_1_ = 2;
    FUN_004015b0(local_68,0x30b,0x10004);
    local_8._0_1_ = 3;
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x58);
    uVar1 = FUN_0098fc50("\'<==  for province: ",&DAT_00defdf4,uVar2,&DAT_00defdfc,FUN_00401280);
    uVar1 = FUN_00987d20(uVar1);
    uVar1 = FUN_00418e30(uVar1);
    uVar1 = FUN_00418e30(uVar1);
    uVar1 = FUN_00989050(uVar1);
    uVar1 = FUN_00418e30(uVar1);
    uVar1 = FUN_00455470(uVar1);
    FUN_00418e30(uVar1);
    FUN_00408bd0(uVar2);
    local_8._0_1_ = 2;
    FUN_00401650();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00408ad0();
    local_8 = 0xffffffff;
    FUN_00408ad0();
  }
  else {
    *(int *)(in_ECX + 0x10) = local_14;
  }
  ExceptionList = local_10;
  return;
}

