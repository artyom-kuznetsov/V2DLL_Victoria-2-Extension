// FUN_009c5310 @ 009c5310 body=[[009c5310, 009c53fb] [009c5414, 009c545d] [009c5476, 009c54a9] [009c54c2, 009c5834]]


void FUN_009c5310(int *param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 unaff_EDI;
  int local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b63c10;
  local_14 = ExceptionList;
  iVar1 = (*param_1 + -43800000) / 0x18;
  iVar2 = 0;
  iVar1 = (iVar1 - (int)((float)(int)((double)iVar1 / 365.0) * 365.0)) - DAT_00f1027c;
  if (-1 < iVar1) {
    do {
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 - (&DAT_00f1027c)[iVar2];
    } while (-1 < iVar1);
    if (iVar2 != 0) {
      if (iVar2 != 1) {
        if (iVar2 == 2) {
          if (in_ECX == 0) {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 4;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
          else {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 5;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
        }
        else if (iVar2 == 3) {
          if (in_ECX == 0) {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 6;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
          else {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 7;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
        }
        else if (iVar2 == 4) {
          ExceptionList = &local_14;
          FUN_009885d0();
          local_c = 8;
          FUN_009a8ee0(unaff_EDI,local_50);
        }
        else if (iVar2 == 5) {
          if (in_ECX == 0) {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 9;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
          else {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 10;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
        }
        else if (iVar2 == 6) {
          if (in_ECX == 0) {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 0xb;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
          else {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 0xc;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
        }
        else if (iVar2 == 7) {
          if (in_ECX == 0) {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 0xd;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
          else {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 0xe;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
        }
        else if (iVar2 == 8) {
          if (in_ECX == 0) {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 0xf;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
          else {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 0x10;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
        }
        else if (iVar2 == 9) {
          if (in_ECX == 0) {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 0x11;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
          else {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 0x12;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
        }
        else if (iVar2 == 10) {
          if (in_ECX == 0) {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 0x13;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
          else {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 0x14;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
        }
        else if (iVar2 == 0xb) {
          if (in_ECX == 0) {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 0x15;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
          else {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 0x16;
            FUN_009a8ee0(unaff_EDI,local_50);
          }
        }
        else {
          ExceptionList = &local_14;
          FUN_009885d0();
          local_c = 0x17;
          FUN_009a8ee0(unaff_EDI,local_34);
        }
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = (uint)local_50[0]._1_3_ << 8;
      if (in_ECX == 0) {
        ExceptionList = &local_14;
        FUN_00409350("February",8);
        local_c = 2;
        FUN_009a8ee0(unaff_EDI,local_50);
        if (local_3c < 0x10) {
          ExceptionList = local_14;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      ExceptionList = &local_14;
      FUN_00409350(&DAT_00e3ad78,3);
      local_c = 3;
      goto LAB_009c543e;
    }
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = (uint)local_50[0]._1_3_ << 8;
  if (in_ECX != 0) {
    ExceptionList = &local_14;
    FUN_00409350(&DAT_00e3ad68,3);
    local_c = 1;
    FUN_009a8ee0(unaff_EDI,local_50);
    if (local_3c < 0x10) {
      ExceptionList = local_14;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  ExceptionList = &local_14;
  FUN_00409350("January",7);
  local_c = 0;
LAB_009c543e:
  FUN_009a8ee0(unaff_EDI,local_50);
  if (local_3c < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50[0]);
}

