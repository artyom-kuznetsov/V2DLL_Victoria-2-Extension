// FUN_009c5840 @ 009c5840 body=[[009c5840, 009c58d0] [009c58e8, 009c5917] [009c592f, 009c597b] [009c5993, 009c59c2] [009c59da, 009c5b98]]


void FUN_009c5840(int *param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 unaff_EDI;
  undefined1 local_4c [28];
  int local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b63b38;
  local_10 = ExceptionList;
  iVar1 = ((*param_1 + -43800000) / 0x18 + -1) % 7;
  local_14 = 0;
  if (iVar1 == 0) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (uint)local_30[0]._1_3_ << 8;
    if (in_ECX == 0) {
      ExceptionList = &local_10;
      FUN_00409350("Monday",6);
      local_8 = 0;
      FUN_009a8ee0(unaff_EDI,local_30);
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
    }
    else {
      ExceptionList = &local_10;
      FUN_00409350(&DAT_00e3ae00,3);
      local_8 = 1;
      FUN_009a8ee0(unaff_EDI,local_30);
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
    }
  }
  else if (iVar1 == 1) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (uint)local_30[0]._1_3_ << 8;
    if (in_ECX == 0) {
      ExceptionList = &local_10;
      FUN_00409350("Tuesday",7);
      local_8 = 2;
      FUN_009a8ee0(unaff_EDI,local_30);
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
    }
    else {
      ExceptionList = &local_10;
      FUN_00409350(&DAT_00e3ae0c,3);
      local_8 = 3;
      FUN_009a8ee0(unaff_EDI,local_30);
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
    }
  }
  else {
    if (iVar1 == 2) {
      if (in_ECX == 0) {
        ExceptionList = &local_10;
        FUN_009885d0();
        local_8 = 4;
        FUN_009a8ee0(unaff_EDI,local_30);
      }
      else {
        ExceptionList = &local_10;
        FUN_009885d0();
        local_8 = 5;
        FUN_009a8ee0(unaff_EDI,local_30);
      }
    }
    else if (iVar1 == 3) {
      if (in_ECX == 0) {
        ExceptionList = &local_10;
        FUN_009885d0();
        local_8 = 6;
        FUN_009a8ee0(unaff_EDI,local_30);
      }
      else {
        ExceptionList = &local_10;
        FUN_009885d0();
        local_8 = 7;
        FUN_009a8ee0(unaff_EDI,local_30);
      }
    }
    else if (iVar1 == 4) {
      if (in_ECX == 0) {
        ExceptionList = &local_10;
        FUN_009885d0();
        local_8 = 8;
        FUN_009a8ee0(unaff_EDI,local_30);
      }
      else {
        ExceptionList = &local_10;
        FUN_009885d0();
        local_8 = 9;
        FUN_009a8ee0(unaff_EDI,local_30);
      }
    }
    else if (iVar1 == 5) {
      if (in_ECX == 0) {
        ExceptionList = &local_10;
        FUN_009885d0();
        local_8 = 10;
        FUN_009a8ee0(unaff_EDI,local_30);
      }
      else {
        ExceptionList = &local_10;
        FUN_009885d0();
        local_8 = 0xb;
        FUN_009a8ee0(unaff_EDI,local_30);
      }
    }
    else if (iVar1 == 6) {
      if (in_ECX == 0) {
        ExceptionList = &local_10;
        FUN_009885d0();
        local_8 = 0xc;
        FUN_009a8ee0(unaff_EDI,local_30);
      }
      else {
        ExceptionList = &local_10;
        FUN_009885d0();
        local_8 = 0xd;
        FUN_009a8ee0(unaff_EDI,local_30);
      }
    }
    else {
      ExceptionList = &local_10;
      FUN_009885d0();
      local_8 = 0xe;
      FUN_009a8ee0(unaff_EDI,local_4c);
    }
    FUN_00408ad0();
  }
  ExceptionList = local_10;
  return;
}

