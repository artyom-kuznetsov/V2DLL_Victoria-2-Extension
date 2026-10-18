// FUN_00931400 @ 00931400 body=[[00931400, 0093148b] [009314a2, 009314f9] [009314fd, 00931521] [00931538, 00931563]]


void FUN_00931400(void)

{
  int in_ECX;
  undefined1 *unaff_EDI;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34 [5];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b84128;
  local_14 = ExceptionList;
  if (*(int *)(in_ECX + 0x9c) < *(int *)(DAT_012588e8 + 0xb0c)) {
    ExceptionList = &local_14;
    *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
    *(undefined4 *)(unaff_EDI + 0x10) = 0;
    *unaff_EDI = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(in_ECX + 0xa4)) {
    ExceptionList = &local_14;
    FUN_0043b700(in_ECX + 0x9c,local_50);
    local_c = 0;
    FUN_0042c180();
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
  }
  else {
    ExceptionList = &local_14;
    FUN_0043b700(in_ECX + 0x9c,local_34);
    local_c = 1;
    FUN_0055dd40();
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_0043ec10();
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

