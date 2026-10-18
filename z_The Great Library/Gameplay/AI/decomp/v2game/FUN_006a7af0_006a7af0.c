// FUN_006a7af0 @ 006a7af0 body=[[006a7af0, 006a7bd1] [006a7be6, 006a7c02]]


void FUN_006a7af0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_2 < 0x3fa) {
    if (param_2 == 0x3f9) {
      iVar2 = in_ECX + 0xc;
    }
    else if (param_2 < 0x3ba) {
      if (param_2 == 0x3b9) {
        iVar2 = in_ECX + 0x34;
      }
      else if (param_2 == 0xb2) {
        iVar2 = in_ECX + 0x11;
      }
      else {
        if (param_2 != 0x173) goto LAB_006a7b75;
        iVar2 = in_ECX + 0xf;
      }
    }
    else {
      if (param_2 != 0x3f8) {
LAB_006a7b75:
        ExceptionList = &local_10;
        FUN_009a0f40();
        ExceptionList = local_10;
        return;
      }
      iVar2 = in_ECX + 0xd;
    }
  }
  else if (param_2 == 0x3fa) {
    iVar2 = in_ECX + 0xe;
  }
  else {
    if (param_2 == 0x4cf) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      local_8 = 0;
      ExceptionList = &local_10;
      FUN_009a1750(local_2c,0);
      uVar1 = FUN_006a7d10(local_2c);
      *(undefined4 *)(in_ECX + 8) = uVar1;
      if (local_18 < 0x10) {
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    if (param_2 != 0x6d0) goto LAB_006a7b75;
    iVar2 = in_ECX + 0x10;
  }
  ExceptionList = &local_10;
  FUN_009a1bb0(iVar2);
  ExceptionList = local_10;
  return;
}

