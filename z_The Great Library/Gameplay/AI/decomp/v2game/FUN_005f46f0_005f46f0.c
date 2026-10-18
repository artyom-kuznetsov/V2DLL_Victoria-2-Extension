// FUN_005f46f0 @ 005f46f0 body=[[005f46f0, 005f4871]]


void FUN_005f46f0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  code *pcVar3;
  undefined1 local_50 [56];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  uVar2 = DAT_012587e4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5a41b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_0098fc50();
  FUN_0055c6c0(uVar2,&local_18,uVar1);
  *(undefined4 *)(in_ECX + 0x10) = local_18;
  *(undefined4 *)(in_ECX + 0x14) = local_14;
  if (*(int *)(in_ECX + 0x14) == 0) {
    FUN_009885d0();
    local_8 = 0;
    FUN_004c4540(*(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x5c));
    local_8._0_1_ = 1;
    FUN_004015b0(local_50,0x196,0x10004);
    local_8._0_1_ = 2;
    pcVar3 = FUN_00401280;
    uVar2 = FUN_0098fc50(" for add-core in ",FUN_00401280);
    uVar2 = FUN_00987d20(uVar2);
    uVar2 = FUN_00418e30(uVar2);
    uVar2 = FUN_00418e30(uVar2);
    FUN_00989050(uVar2);
    FUN_00408bd0(pcVar3);
    local_8._0_1_ = 1;
    FUN_00401650();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00408ad0();
    local_8 = 0xffffffff;
    FUN_00408ad0();
  }
  ExceptionList = local_10;
  return;
}

