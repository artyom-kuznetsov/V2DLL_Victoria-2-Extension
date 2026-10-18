// FUN_00872270 @ 00872270 body=[[00872270, 00872357] [0087235b, 00872375] [00872379, 00872395]]


int FUN_00872270(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 local_50 [5];
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e920;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = lua_gettop();
  local_14 = -1;
  if ((local_18 == 0) && (local_14 = 0, 0 < *in_ECX)) {
    *in_ECX = 0;
    in_ECX[1] = param_1;
    in_ECX[0xb] = 1;
  }
  else if (local_14 == *in_ECX) {
    in_ECX[in_ECX[0xb] + 1] = param_1;
    in_ECX[0xb] = in_ECX[0xb] + 1;
  }
  iVar1 = 0;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 4))();
  }
  if ((local_14 == *in_ECX) && (in_ECX[0xb] == 1)) {
    uVar2 = (*(code *)*param_2)(local_50);
    local_8 = 0;
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    FUN_00408ed0(uVar2,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00873950();
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    iVar1 = lua_gettop();
    iVar1 = iVar1 - local_18;
  }
  ExceptionList = local_10;
  return iVar1;
}

