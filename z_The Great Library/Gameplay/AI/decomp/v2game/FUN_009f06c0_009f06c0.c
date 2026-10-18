// FUN_009f06c0 @ 009f06c0 body=[[009f06c0, 009f0752]]


undefined4 FUN_009f06c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined2 local_14;
  undefined2 local_12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0xc4);
  local_8 = 0;
  if (iVar1 != 0) {
    local_14 = *(undefined2 *)(unaff_ESI + 0x254);
    local_12 = *(undefined2 *)(unaff_ESI + 600);
    uVar2 = FUN_009c3070(iVar1,param_1,param_2,unaff_ESI + 0x104,unaff_ESI + 0x120,&local_14);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

