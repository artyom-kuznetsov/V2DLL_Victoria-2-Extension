// FUN_00a6a490 @ 00a6a490 body=[[00a6a490, 00a6a4fa] [00a6a4fe, 00a6a50e]]


/* WARNING: Removing unreachable block (ram,0x00a6a4f1) */

void FUN_00a6a490(undefined4 *param_1)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3d8f8;
  local_14 = ExceptionList;
  uVar1 = *param_1;
  ExceptionList = &local_14;
  FUN_00408ed0(in_EDX,0,0xffffffff);
  local_c = 0;
  FUN_00a36520(uVar1);
  ExceptionList = local_14;
  return;
}

