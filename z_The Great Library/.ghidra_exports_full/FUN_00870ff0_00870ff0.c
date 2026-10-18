// FUN_00870ff0 @ 00870ff0 body=[[00870ff0, 00871159]]


int FUN_00870ff0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  int local_20;
  int local_1c;
  undefined8 local_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  iVar1 = FUN_004f5fc0();
  local_8 = iVar1 + 1;
  local_10 = lua_gettop();
  iVar4 = -1;
  iVar2 = FUN_004f5fc0();
  if (iVar2 + iVar1 == local_10) {
    piVar3 = (int *)FUN_00aa9820();
    if (piVar3 == (int *)0x0) {
      local_18._4_4_ = -1;
    }
    else {
      piVar3 = (int *)*piVar3;
      if (piVar3 == (int *)0x0) {
        local_c = 0;
        local_18._4_4_ = -1;
      }
      else if ((char)piVar3[2] == '\0') {
        (**(code **)(*piVar3 + 4))();
        local_c = (int)local_18;
      }
      else {
        local_18._4_4_ = -1;
      }
    }
    local_20 = local_18._4_4_;
    iVar4 = lua_type();
    local_1c = -(uint)(iVar4 != 3);
    piVar3 = &local_20;
    iVar1 = 0;
    do {
      iVar4 = *piVar3;
      if (iVar4 < 0) break;
      iVar4 = iVar1 + iVar4;
      piVar3 = piVar3 + 1;
      iVar1 = iVar4;
    } while (piVar3 != (int *)&local_18);
    if (iVar4 < 0) goto LAB_008710cd;
    bVar5 = iVar4 == *param_2;
    if (iVar4 < *param_2) {
      *param_2 = iVar4;
      param_2[1] = param_1;
      param_2[0xb] = 1;
      goto LAB_008710de;
    }
  }
  else {
LAB_008710cd:
    bVar5 = iVar4 == *param_2;
  }
  if (bVar5) {
    param_2[param_2[0xb] + 1] = param_1;
    param_2[0xb] = param_2[0xb] + 1;
  }
LAB_008710de:
  iVar1 = 0;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 4))();
  }
  if ((iVar4 == *param_2) && (param_2[0xb] == 1)) {
    fVar6 = (float10)lua_tonumber();
    local_18 = (longlong)ROUND(fVar6);
    (*(code *)*param_3)((int)local_18);
    lua_pushnumber();
    iVar1 = lua_gettop();
    iVar1 = iVar1 - local_10;
  }
  return iVar1;
}

