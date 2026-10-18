// FUN_00a00450 @ 00a00450 body=[[00a00450, 00a004de]]


void FUN_00a00450(void)

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
  FUN_009fa9f0(unaff_ESI,0xdb);
  unaff_ESI[0x1d] = 0;
  *unaff_ESI = &PTR_FUN_00e3e700;
  ExceptionList = local_10;
  return;
}

