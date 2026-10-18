// FUN_0058d200 @ 0058d200 body=[[0058d200, 0058d2bf] [0058d2c3, 0058d2d3]]


void FUN_0058d200(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  if (param_2 == 0x2bf) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_009a1750(local_34,0);
    FUN_00971910();
    uVar2 = FUN_009721b0(local_34);
    *(undefined4 *)(in_ECX + 0x44) = uVar2;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    ExceptionList = local_10;
    return;
  }
  if (param_2 != 0x2f0) {
    ExceptionList = &local_10;
    FUN_009a2620(param_1,param_2);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_18,param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 0x3c) = *puVar1;
  *(undefined4 *)(in_ECX + 0x40) = puVar1[1];
  ExceptionList = local_10;
  return;
}

