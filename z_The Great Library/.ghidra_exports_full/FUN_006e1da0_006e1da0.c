// FUN_006e1da0 @ 006e1da0 body=[[006e1da0, 006e1e61] [006e1e65, 006e1e74]]


/* WARNING: Removing unreachable block (ram,0x006e1e59) */

void FUN_006e1da0(int param_1)

{
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44738;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00408ed0(param_1 + -0x30,0,0xffffffff);
  local_8 = 0;
  FUN_00408ed0(unaff_EDI,0,0xffffffff);
  *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(unaff_EDI + 0x20);
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(unaff_EDI + 0x24);
  *(undefined4 *)(param_1 + -8) = *(undefined4 *)(unaff_EDI + 0x28);
  *(undefined4 *)(param_1 + -4) = *(undefined4 *)(unaff_EDI + 0x2c);
  FUN_006e1aa0();
  ExceptionList = local_10;
  return;
}

