// FUN_00640b90 @ 00640b90 body=[[00640b90, 00640c94]]


undefined4 FUN_00640b90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  undefined2 local_30;
  undefined2 local_2e;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b92cd3;
  local_14 = ExceptionList;
  uVar1 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_c = 0;
  ExceptionList = &local_14;
  local_2c = FUN_00aae9af(0x568);
  local_c = CONCAT31(local_c._1_3_,1);
  if (local_2c != 0) {
    local_30 = *(undefined2 *)(unaff_ESI + 0xa0);
    local_2e = *(undefined2 *)(unaff_ESI + 0xa4);
    uVar1 = FUN_00640ef0(local_2c,unaff_ESI,param_1,param_2,unaff_ESI,unaff_ESI + 0x84,&local_30,
                         unaff_ESI + 0x184,unaff_ESI + 0x194,unaff_ESI + 0x1b4,unaff_ESI + 0x1c4,
                         *(undefined2 *)(unaff_ESI + 0x128),unaff_ESI + 0x1a4,unaff_ESI + 0x1e4,
                         unaff_ESI + 500,unaff_ESI + 0x204,unaff_ESI + 0x214,param_3,
                         unaff_ESI + 0x2a4,unaff_ESI + 0x224,&local_28);
  }
  FUN_004097a0(&local_28);
  ExceptionList = local_14;
  return uVar1;
}

