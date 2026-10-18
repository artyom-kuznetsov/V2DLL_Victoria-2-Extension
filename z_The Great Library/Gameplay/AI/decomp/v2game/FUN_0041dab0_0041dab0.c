// FUN_0041dab0 @ 0041dab0 body=[[0041dab0, 0041dbe8] [0041dbec, 0041dbfe]]


undefined1 * FUN_0041dab0(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 ***pppuVar4;
  int iVar5;
  int iVar6;
  undefined4 **local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = param_2;
  puStack_c = &LAB_00b60b41;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  iVar5 = *param_2;
  iVar1 = (param_2[1] - iVar5) / 0x1c;
  local_14 = 1;
  if (iVar1 < 1) {
    *param_1 = 0;
    FUN_00409350("Please type some lua code.",0x1a);
    ExceptionList = local_10;
    return param_1;
  }
  iVar6 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (undefined4 **)((uint)local_30[0] & 0xffffff00);
  local_8 = 1;
  if (0 < iVar1) {
    param_2 = (int *)0x0;
    do {
      FUN_00448aa0(iVar5 + (int)param_2,0,0xffffffff);
      iVar5 = *piVar2;
      param_2 = (int *)((int)param_2 + 0x1c);
      iVar6 = iVar6 + 1;
    } while (iVar6 < (piVar2[1] - iVar5) / 0x1c);
  }
  puVar3 = (undefined4 *)FUN_009be180();
  pppuVar4 = (undefined4 ***)local_30[0];
  if (local_1c < 0x10) {
    pppuVar4 = local_30;
  }
  luaL_loadstring(*puVar3,pppuVar4);
  iVar5 = lua_pcall(*puVar3,0,0,0);
  if (iVar5 != 0) {
    FUN_009bdf40();
  }
  *param_1 = 1;
  FUN_00409350("Lua code executed.",0x12);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

