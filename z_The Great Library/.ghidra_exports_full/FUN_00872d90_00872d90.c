// FUN_00872d90 @ 00872d90 body=[[00872d90, 00872f37]]


int FUN_00872d90(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_2c [3];
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_14 = 0;
  iVar1 = FUN_00a3c430();
  local_10 = 0;
  iVar2 = FUN_004f5fc0();
  local_18 = iVar2 + iVar1 + 1;
  local_20 = lua_gettop(param_1);
  local_8 = -1;
  if (iVar1 + iVar2 * 2 == local_20) {
    local_2c[0] = 0;
    piVar3 = (int *)FUN_00aa9820(param_1,iVar1 + 1);
    if (piVar3 == (int *)0x0) {
      local_2c[1] = -1;
    }
    else {
      if ((int *)*piVar3 == (int *)0x0) {
        local_c = 0;
        local_2c[1] = -1;
      }
      else {
        (**(code **)(*(int *)*piVar3 + 4))(&local_c,DAT_013f3640);
        local_2c[1] = local_8;
        if ((-1 < local_8) && ((*piVar3 == 0 || (*(char *)(*piVar3 + 8) == '\0')))) {
          local_2c[1] = local_8 + 10;
        }
      }
      local_14 = local_c;
    }
    piVar3 = (int *)FUN_00aa9820(param_1,local_18);
    if (piVar3 == (int *)0x0) {
      local_2c[2] = -1;
    }
    else {
      if ((int *)*piVar3 == (int *)0x0) {
        local_1c = 0;
        local_2c[2] = -1;
      }
      else {
        (**(code **)(*(int *)*piVar3 + 4))(&local_1c,DAT_013f3640);
        local_2c[2] = local_18;
        if ((-1 < local_18) && ((*piVar3 == 0 || (*(char *)(*piVar3 + 8) == '\0')))) {
          local_2c[2] = local_18 + 10;
        }
      }
      local_10 = local_1c;
    }
    piVar3 = local_2c;
    iVar1 = 0;
    do {
      local_8 = *piVar3;
      if (local_8 < 0) break;
      iVar1 = iVar1 + local_8;
      piVar3 = piVar3 + 1;
      local_8 = iVar1;
    } while (piVar3 != &local_20);
    if ((-1 < local_8) && (local_8 < *param_3)) {
      *param_3 = local_8;
      param_3[1] = param_2;
      param_3[0xb] = 1;
      goto LAB_00872ef3;
    }
  }
  if (local_8 == *param_3) {
    param_3[param_3[0xb] + 1] = param_2;
    param_3[0xb] = param_3[0xb] + 1;
  }
LAB_00872ef3:
  iVar1 = 0;
  if (*(int **)(param_2 + 0x24) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 4))(param_1,param_3);
  }
  if ((local_8 == *param_3) && (param_3[0xb] == 1)) {
    (*(code *)*param_4)(param_1,local_14,local_10);
    iVar1 = lua_gettop(param_1);
    iVar1 = iVar1 - local_20;
  }
  return iVar1;
}

