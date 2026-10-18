// FUN_008712a0 @ 008712a0 body=[[008712a0, 00871460]]


int FUN_008712a0(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  int local_30 [3];
  undefined8 local_24;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = 0;
  iVar1 = FUN_004f5fc0();
  local_c = 0;
  local_8 = iVar1 + 1;
  iVar2 = FUN_004f5fc0();
  local_18 = iVar2 + iVar1 + 1;
  local_14 = lua_gettop(param_1);
  iVar5 = -1;
  iVar3 = FUN_004f5fc0();
  if (iVar3 + iVar2 + iVar1 == local_14) {
    piVar4 = (int *)FUN_00aa9820(param_1,1);
    if (piVar4 == (int *)0x0) {
      local_24._4_4_ = -1;
    }
    else {
      piVar4 = (int *)*piVar4;
      if (piVar4 == (int *)0x0) {
        local_10 = 0;
        local_24._4_4_ = -1;
      }
      else if ((char)piVar4[2] == '\0') {
        (**(code **)(*piVar4 + 4))(&local_24,DAT_013f3660);
        local_10 = (int)local_24;
      }
      else {
        local_24._4_4_ = -1;
      }
    }
    local_30[0] = local_24._4_4_;
    iVar5 = lua_type(param_1,local_8);
    local_30[1] = -(uint)(iVar5 != 3);
    piVar4 = (int *)FUN_00aa9820(param_1,local_18);
    if (piVar4 == (int *)0x0) {
      local_30[2] = -1;
    }
    else {
      if ((int *)*piVar4 == (int *)0x0) {
        local_1c = 0;
        local_30[2] = -1;
      }
      else {
        (**(code **)(*(int *)*piVar4 + 4))(&local_1c,DAT_013f3640);
        local_30[2] = local_18;
        if ((-1 < local_18) && ((*piVar4 == 0 || (*(char *)(*piVar4 + 8) == '\0')))) {
          local_30[2] = local_18 + 10;
        }
      }
      local_c = local_1c;
    }
    piVar4 = local_30;
    iVar1 = 0;
    do {
      iVar5 = *piVar4;
      if (iVar5 < 0) break;
      piVar4 = piVar4 + 1;
      iVar5 = iVar1 + iVar5;
      iVar1 = iVar5;
    } while (piVar4 != (int *)&local_24);
    if (iVar5 < 0) goto LAB_008713e5;
    bVar6 = iVar5 == *param_3;
    if (iVar5 < *param_3) {
      *param_3 = iVar5;
      param_3[1] = param_2;
      param_3[0xb] = 1;
      goto LAB_008713f6;
    }
  }
  else {
LAB_008713e5:
    bVar6 = iVar5 == *param_3;
  }
  if (bVar6) {
    param_3[param_3[0xb] + 1] = param_2;
    param_3[0xb] = param_3[0xb] + 1;
  }
LAB_008713f6:
  iVar1 = 0;
  if (*(int **)(param_2 + 0x24) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 4))(param_1,param_3);
  }
  if ((iVar5 == *param_3) && (param_3[0xb] == 1)) {
    fVar7 = (float10)lua_tonumber(param_1,local_8);
    local_24 = (longlong)ROUND(fVar7);
    (*(code *)*param_4)((int)local_24,local_c);
    iVar1 = lua_gettop(param_1);
    iVar1 = iVar1 - local_14;
  }
  return iVar1;
}

