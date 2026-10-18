// FUN_00581990 @ 00581990 body=[[00581990, 00581aa2] [00581aa6, 00581ab8]]


void FUN_00581990(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_3c [8];
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  if (param_2 == 0x28c) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_c = 0;
    ExceptionList = &local_14;
    FUN_009a1750(local_34,0);
    iVar2 = FUN_004a2f70(local_34);
    if (iVar2 == 0) {
      uVar3 = FUN_00561180();
    }
    else {
      uVar3 = FUN_004a2f70(local_34);
    }
    *(undefined4 *)(in_ECX + 0x44) = uVar3;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    ExceptionList = local_14;
    return;
  }
  if (param_2 == 0x28f) {
    ExceptionList = &local_14;
    FUN_009a1bb0(in_ECX + 0x48);
    ExceptionList = local_14;
    return;
  }
  if (param_2 != 0x2f0) {
    ExceptionList = &local_14;
    FUN_009a2620(param_1,param_2);
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_3c,param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 0x3c) = *puVar1;
  *(undefined4 *)(in_ECX + 0x40) = puVar1[1];
  ExceptionList = local_14;
  return;
}

