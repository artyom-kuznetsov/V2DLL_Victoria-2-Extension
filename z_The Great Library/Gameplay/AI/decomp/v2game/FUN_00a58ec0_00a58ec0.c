// FUN_00a58ec0 @ 00a58ec0 body=[[00a58ec0, 00a58fa1]]


undefined4 FUN_00a58ec0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba00fb;
  local_14 = ExceptionList;
  local_1c = *(undefined4 *)(unaff_ESI + 0xac);
  local_20 = *(undefined4 *)(unaff_ESI + 0xa8);
  local_28 = *(undefined4 *)(unaff_ESI + 0xb0);
  local_24 = *(undefined4 *)(unaff_ESI + 0xb4);
  ExceptionList = &local_14;
  iVar1 = FUN_00aae9af(0x104);
  local_c = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_009a6430(iVar1,*(undefined4 *)(unaff_ESI + 100),param_1,param_2,unaff_ESI + 0x88,
                         unaff_ESI + 0x6c,&local_20,*(undefined2 *)(unaff_ESI + 0xa4),
                         *(undefined2 *)(unaff_ESI + 0xa6),&local_28,
                         *(undefined4 *)(unaff_ESI + 0xdc),*(undefined4 *)(unaff_ESI + 0xbc),
                         &stack0x0000000c,*(undefined1 *)(unaff_ESI + 0xb8),
                         *(undefined1 *)(unaff_ESI + 0xe0));
    ExceptionList = local_14;
    return uVar2;
  }
  ExceptionList = local_14;
  return 0;
}

