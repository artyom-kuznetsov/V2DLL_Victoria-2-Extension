// FUN_00646b50 @ 00646b50 body=[[00646b50, 00646bc8] [00646bcc, 00646d69]]


/* WARNING: Removing unreachable block (ram,0x00646bbf) */

undefined4 FUN_00646b50(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6387b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00409350();
  local_c = 0;
  cVar1 = FUN_00416db0();
  local_c = 0xffffffff;
  if (cVar1 == '\0') {
    FUN_00408ed0();
  }
  iVar2 = FUN_00aae9af();
  local_c = 1;
  if (iVar2 == 0) {
    ExceptionList = local_14;
    return 0;
  }
  FUN_00408ed0();
  local_c._0_1_ = 2;
  FUN_009f2020();
  local_c._0_1_ = 3;
  FUN_009f2160();
  local_c._0_1_ = 4;
  FUN_009f2050();
  local_c._0_1_ = 5;
  FUN_00408ed0();
  local_c._0_1_ = 6;
  FUN_00408ed0(in_ECX + 0x13c,0,0xffffffff);
  local_c = CONCAT31(local_c._1_3_,1);
  uVar3 = FUN_00646f00(in_ECX,param_1,param_2,in_ECX + 0x104,
                       CONCAT22((short)*(undefined4 *)(in_ECX + 600),
                                (short)*(undefined4 *)(in_ECX + 0x254)));
  ExceptionList = local_14;
  return uVar3;
}

