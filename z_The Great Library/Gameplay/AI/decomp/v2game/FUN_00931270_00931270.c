// FUN_00931270 @ 00931270 body=[[00931270, 009312fb] [00931312, 00931369] [0093136d, 00931391] [009313a8, 009313d3]]


void FUN_00931270(void)

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
  if (*(int *)(in_ECX + 0x90) < *(int *)(DAT_012588e8 + 0xb0c)) {
    ExceptionList = &local_14;
    *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
    *(undefined4 *)(unaff_EDI + 0x10) = 0;
    *unaff_EDI = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(in_ECX + 0x98)) {
    ExceptionList = &local_14;
    FUN_0043b700(in_ECX + 0x90,local_50);
    local_c = 0;
    FUN_0042c180();
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
  }
  else {
    ExceptionList = &local_14;
    FUN_0043b700(in_ECX + 0x90,local_34);
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

