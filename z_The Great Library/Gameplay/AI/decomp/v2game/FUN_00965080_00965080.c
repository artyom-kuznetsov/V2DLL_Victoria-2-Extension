// FUN_00965080 @ 00965080 body=[[00965080, 00965230]]


void FUN_00965080(void)

{
  int iVar1;
  int in_ECX;
  undefined1 *unaff_EDI;
  undefined1 local_80 [20];
  undefined1 local_6c [44];
  int local_40;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba2852;
  local_10 = ExceptionList;
  local_14 = 0;
  local_18 = *(undefined4 *)(*(int *)(in_ECX + 100) + 0x128);
  if ((*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(in_ECX + 100) + 300) * 4) +
               0x7d8) != 0) && (*(char *)(*(int *)(in_ECX + 0x68) + 0x50) == '\0')) {
    if (*(int *)(*(int *)(in_ECX + 0x68) + 0x3c) == 2) {
      ExceptionList = &local_10;
      *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
      *(undefined4 *)(unaff_EDI + 0x10) = 0;
      *unaff_EDI = 0;
      FUN_00409350(&DAT_00ded94d,0);
      ExceptionList = local_10;
      return;
    }
    ExceptionList = &local_10;
    FUN_008a8650();
    FUN_008aed50();
    local_8 = 0;
    if (local_40 == 0) {
      FUN_009885d0();
    }
    else {
      FUN_009885d0();
      local_8._0_1_ = 1;
      FUN_009a8ee0(local_80,local_6c);
      local_8._0_1_ = 2;
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
      local_8._0_1_ = 4;
      FUN_009a9740();
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_00408ad0();
      FUN_00448740(&DAT_00dee2cc,1);
      FUN_00448aa0();
      FUN_00448740(&DAT_00dee2cc,1);
      FUN_00401320();
      FUN_00408ad0();
    }
    FUN_00408ad0();
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *unaff_EDI = 0;
  FUN_00409350(&DAT_00ded94d,0);
  ExceptionList = local_10;
  return;
}

