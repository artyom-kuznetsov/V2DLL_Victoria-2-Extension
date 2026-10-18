// FUN_006a2580 @ 006a2580 body=[[006a2580, 006a25ff]]


undefined1 * FUN_006a2580(undefined1 *param_1)

{
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e5b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(unaff_EDI,0,0xffffffff);
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
  *(undefined4 *)(param_1 + 0x34) = 0xf;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x20] = 0;
  FUN_00408ed0(unaff_EDI + 0x20,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(unaff_EDI + 0x3c);
  ExceptionList = local_10;
  return param_1;
}

