// FUN_00a58c90 @ 00a58c90 body=[[00a58c90, 00a58d3e]]


undefined4 FUN_00a58c90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  int unaff_EDI;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4bc6b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_00aae9af(0xcc);
  local_c = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00a863d0(iVar1,unaff_EDI,param_1,*(undefined4 *)(unaff_ESI + 0x80),
                         *(undefined4 *)(unaff_ESI + 0x84),*(undefined4 *)(unaff_ESI + 0x88),
                         *(undefined4 *)(unaff_ESI + 0x8c),*(undefined4 *)(unaff_EDI + 0x6b9bc),
                         *(undefined4 *)(unaff_EDI + 0x6b9c0));
    ExceptionList = local_14;
    return uVar2;
  }
  ExceptionList = local_14;
  return 0;
}

