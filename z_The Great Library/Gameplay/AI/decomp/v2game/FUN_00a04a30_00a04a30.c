// FUN_00a04a30 @ 00a04a30 body=[[00a04a30, 00a04ac2]]


void FUN_00a04a30(void)

{
  undefined4 *unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b56738;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0xffffffff;
  FUN_009fa9f0(unaff_ESI,0xef);
  unaff_ESI[0x1d] = 0;
  *unaff_ESI = &PTR_FUN_00e3e8e0;
  *(undefined1 *)(unaff_ESI + 0x1e) = 1;
  ExceptionList = local_10;
  return;
}

