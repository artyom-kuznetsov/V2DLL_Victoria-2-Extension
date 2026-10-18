// FUN_009cde70 @ 009cde70 body=[[009cde70, 009cdf89]]


undefined4 FUN_009cde70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar1 = FUN_00aae9af(0x4d8);
  local_8 = 0;
  if (iVar1 != 0) {
    local_14 = *(undefined2 *)(unaff_ESI + 0xa0);
    local_12 = *(undefined2 *)(unaff_ESI + 0xa4);
    uVar2 = FUN_009e16c0(iVar1,param_1,param_2,unaff_ESI,unaff_ESI + 0x84,unaff_ESI + 0xa8,&local_14
                         ,unaff_ESI + 0x184,unaff_ESI + 0x194,unaff_ESI + 0x1b4,unaff_ESI + 0x1c4,
                         *(undefined2 *)(unaff_ESI + 0x128),unaff_ESI + 0x1a4,unaff_ESI + 0x1e4,
                         unaff_ESI + 500,unaff_ESI + 0x204,unaff_ESI + 0x214,unaff_ESI + 0x224,
                         param_3,*(undefined4 *)(unaff_ESI + 600),&stack0x00000014,unaff_ESI + 0x25c
                         ,unaff_ESI + 0x1d4,unaff_ESI + 0x234,param_4,unaff_ESI + 0x244,
                         *(undefined1 *)(unaff_ESI + 0x255));
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

