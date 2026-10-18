// FUN_00a56bb0 @ 00a56bb0 body=[[00a56bb0, 00a56cec]]


void FUN_00a56bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4bc6b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af();
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_00408ed0(unaff_ESI + 0x110,0,0xffffffff);
    local_14 = CONCAT22(*(undefined2 *)(unaff_ESI + 0x140),*(undefined2 *)(unaff_ESI + 0x13c));
    local_18 = CONCAT22(*(undefined2 *)(unaff_ESI + 0x138),*(undefined2 *)(unaff_ESI + 0x134));
    local_1c = CONCAT22(*(undefined2 *)(unaff_ESI + 0x130),*(undefined2 *)(unaff_ESI + 300));
    FUN_009ca220(iVar1,param_1,param_2,param_3,unaff_ESI,unaff_ESI + 0x68,unaff_ESI + 0x84,
                 unaff_ESI + 0xa0,unaff_ESI + 0xbc,local_1c,local_18,local_14,
                 *(undefined4 *)(unaff_ESI + 0x144),*(undefined4 *)(unaff_ESI + 0x148),
                 *(undefined4 *)(unaff_ESI + 0x150),*(undefined4 *)(unaff_ESI + 0x14c));
  }
  ExceptionList = local_10;
  return;
}

