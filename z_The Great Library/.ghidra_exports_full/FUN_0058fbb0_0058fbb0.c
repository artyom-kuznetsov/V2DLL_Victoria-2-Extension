// FUN_0058fbb0 @ 0058fbb0 body=[[0058fbb0, 0058fc65] [0058fc7c, 0058fccf] [0058fce6, 0058fd1d]]


void FUN_0058fbb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 local_3c [8];
  int local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b72330;
  local_14 = ExceptionList;
  if (param_2 == 0x2f0) {
    ExceptionList = &local_14;
    puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_3c,param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x3c) = *puVar2;
    *(undefined4 *)(in_ECX + 0x40) = puVar2[1];
  }
  else if (param_2 == 0x63b) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (uint)local_34[0]._1_3_ << 8;
    local_c = 1;
    ExceptionList = &local_14;
    FUN_009a1750(local_34,0);
    iVar1 = FUN_00975ed0(local_34);
    if (iVar1 == 0) {
      iVar1 = FUN_00974850();
    }
    *(int *)(in_ECX + 0x48) = iVar1;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  else {
    if (param_2 != 0x63c) {
      ExceptionList = &local_14;
      FUN_009a2620(param_1,param_2);
      ExceptionList = local_14;
      return;
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (uint)local_34[0]._1_3_ << 8;
    local_c = 0;
    ExceptionList = &local_14;
    FUN_009a1750(local_34,0);
    iVar1 = FUN_004a2f70(local_34);
    if (iVar1 == 0) {
      iVar1 = DAT_0131be94;
    }
    *(int *)(in_ECX + 0x44) = iVar1;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

