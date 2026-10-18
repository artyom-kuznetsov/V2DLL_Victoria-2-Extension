// FUN_0048b9d0 @ 0048b9d0 body=[[0048b9d0, 0048bb21] [0048bb28, 0048bb52] [0048bb9d, 0048bc3e] [0048bc5e, 0048bcd9]]


void FUN_0048b9d0(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_d4 [88];
  undefined1 local_7c [92];
  int local_20;
  uint local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d123;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff1c;
  if (param_3 != 0) {
    iVar1 = (param_1[1] - *param_1) / 0x58;
    if (0x2e8ba2eU - iVar1 < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff1c;
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    local_1c = iVar1 + param_3;
    if ((uint)((param_1[2] - *param_1) / 0x58) < local_1c) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff1c;
      local_20 = FUN_0048be80();
      iVar2 = FUN_004095f0();
      iVar1 = (param_2 - *param_1) / 0x58;
      local_8 = 0;
      local_18 = 0;
      local_1c = iVar1;
      FUN_0048ca70(iVar1 * 0x58 + iVar2,param_4,param_2);
      local_18 = 1;
      FUN_0048cb10(param_2,iVar2,param_2);
      local_18 = 2;
      FUN_0048cb10(param_1[1],(iVar1 + param_3) * 0x58 + iVar2,param_2);
      local_8 = 0xffffffff;
      if (*param_1 != 0) {
        FUN_0048b920();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*param_1);
      }
      param_1[2] = local_20 * 0x58 + iVar2;
      param_1[1] = (param_3 + (param_1[1] - *param_1) / 0x58) * 0x58 + iVar2;
      *param_1 = iVar2;
      ExceptionList = local_10;
      return;
    }
    if ((uint)((param_1[1] - param_2) / 0x58) < param_3) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff1c;
      FUN_0047db00(local_7c,param_4);
      local_8 = 2;
      FUN_0048cb10(param_1[1],param_3 * 0x58 + param_2,param_2);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_0048ca70(param_1[1],local_7c,param_2);
      local_8 = 2;
      param_1[1] = param_1[1] + param_3 * 0x58;
      FUN_0048c8a0(param_1[1] + param_3 * -0x58,local_7c);
    }
    else {
      ExceptionList = &local_10;
      FUN_0047db00(local_d4,param_4);
      local_8 = 5;
      iVar1 = param_1[1];
      iVar2 = FUN_0048cb10(iVar1,iVar1,param_2);
      param_1[1] = iVar2;
      FUN_0048c910(param_2,iVar1,param_2);
      FUN_0048c8a0(param_3 * 0x58 + param_2,local_d4);
    }
    FUN_0047e4a0();
  }
  ExceptionList = local_10;
  return;
}

