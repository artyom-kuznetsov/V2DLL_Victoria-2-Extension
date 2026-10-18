// FUN_0044ef70 @ 0044ef70 body=[[0044ef70, 0044efdd] [0044efe7, 0044eff7]]


void FUN_0044ef70(void)

{
  int iVar1;
  int in_ECX;
  undefined4 *in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b51e3b;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = DAT_012586ec;
  ExceptionList = &local_10;
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    if (iVar1 == 0) {
      iVar1 = FUN_00aae9af(0x2c);
      local_8._0_1_ = 1;
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_0044bbb0(iVar1);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      DAT_012586ec = iVar1;
    }
    if (in_EDX != (undefined4 *)0x0) {
      *in_EDX = 0;
      in_EDX[1] = iVar1;
    }
    in_EDX = in_EDX + 2;
  }
  ExceptionList = local_10;
  return;
}

