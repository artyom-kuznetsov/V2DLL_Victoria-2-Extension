// FUN_005eb1c0 @ 005eb1c0 body=[[005eb1c0, 005eb368]]


void FUN_005eb1c0(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  code *pcVar3;
  undefined1 local_68 [84];
  int *local_14;
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
  local_14 = (int *)FUN_0055f640();
  local_8 = 0xffffffff;
  FUN_00408ad0();
  if ((local_14 != (int *)0x0) && (cVar1 = (**(code **)(*local_14 + 0x18))(), cVar1 != '\0')) {
    *(int **)(in_ECX + 0x10) = local_14;
    ExceptionList = local_10;
    return;
  }
  FUN_009885d0();
  local_8 = 1;
  FUN_004f97a0();
  local_8._0_1_ = 2;
  FUN_004015b0(local_68,0x48b,0x10004);
  local_8._0_1_ = 3;
  pcVar3 = FUN_00401280;
  uVar2 = FUN_0098fc50(&DAT_00df12c8,FUN_00401280);
  uVar2 = FUN_00987d20(uVar2);
  uVar2 = FUN_00418e30(uVar2);
  uVar2 = FUN_00418e30(uVar2);
  FUN_00989050(uVar2);
  FUN_00408bd0(pcVar3);
  local_8._0_1_ = 2;
  FUN_00401650();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00408ad0();
  local_8 = 0xffffffff;
  FUN_00408ad0();
  ExceptionList = local_10;
  return;
}

