// FUN_00a0bff0 @ 00a0bff0 body=[[00a0bff0, 00a0c08e]]


void FUN_00a0bff0(void)

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
  FUN_009fa9f0(unaff_ESI,0xfe);
  *unaff_ESI = &PTR_FUN_00e3eb74;
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x22] = 0xf;
  *(undefined1 *)(unaff_ESI + 0x1d) = 0;
  ExceptionList = local_10;
  return;
}

