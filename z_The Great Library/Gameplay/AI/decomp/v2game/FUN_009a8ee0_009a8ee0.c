// FUN_009a8ee0 @ 009a8ee0 body=[[009a8ee0, 009a9043] [009a9047, 009a9068]]


/* WARNING: Removing unreachable block (ram,0x009a903a) */

undefined4 * FUN_009a8ee0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b61929;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_0131c99c == 0) {
    ExceptionList = &local_14;
    iVar1 = FUN_00aae9af(0x54);
    local_c = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_009acd20(iVar1);
    }
    local_c = 0xffffffff;
    FUN_009ada90(uVar2);
  }
  if ((*(int *)(param_2 + 0x10) != 0) && (iVar1 = FUN_00a727a0(param_2), iVar1 != 0)) {
    if (DAT_0131c99c == 0) {
      iVar1 = FUN_00aae9af(0x54);
      local_c = 1;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_009acd20(iVar1);
      }
      local_c = 0xffffffff;
      FUN_009ada90(uVar2);
    }
    FUN_009ad900(param_1);
    ExceptionList = local_14;
    return param_1;
  }
  if (DAT_0131c99c == 0) {
    iVar1 = FUN_00aae9af(0x54);
    local_c = 2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_009acd20(iVar1);
    }
    local_c = 0xffffffff;
    FUN_009ada90(uVar2);
  }
  uVar2 = FUN_009ad930();
  FUN_00409350(&DAT_00ded94d,0);
  local_c = 3;
  uVar3 = FUN_009a9070();
  FUN_009ab900(uVar2,param_2,uVar3);
  *param_1 = uVar2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = local_14;
  return param_1;
}

