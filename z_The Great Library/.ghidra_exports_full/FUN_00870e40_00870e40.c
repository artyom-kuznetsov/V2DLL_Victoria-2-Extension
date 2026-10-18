// FUN_00870e40 @ 00870e40 body=[[00870e40, 00870fdd]]


int FUN_00870e40(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  int local_2c [3];
  int local_20;
  undefined4 local_1c;
  float local_18;
  undefined8 local_14;
  undefined4 local_c;
  int local_8;
  
  local_1c = 0;
  iVar1 = FUN_004f5fc0();
  local_14._4_4_ = iVar1 + 1;
  iVar2 = FUN_004f5fc0();
  local_18 = (float)(iVar2 + local_14._4_4_);
  local_20 = lua_gettop(param_1);
  local_8 = -1;
  iVar3 = FUN_004f5fc0();
  iVar5 = local_8;
  if (iVar3 + iVar2 + iVar1 == local_20) {
    piVar4 = (int *)FUN_00aa9820(param_1,1);
    if (piVar4 == (int *)0x0) {
      local_2c[0] = -1;
    }
    else {
      piVar4 = (int *)*piVar4;
      if (piVar4 == (int *)0x0) {
        local_1c = 0;
        local_2c[0] = -1;
      }
      else if ((char)piVar4[2] == '\0') {
        (**(code **)(*piVar4 + 4))(&local_c,DAT_013f3678);
        local_2c[0] = local_8;
        local_1c = local_c;
      }
      else {
        local_2c[0] = -1;
      }
    }
    iVar5 = lua_type(param_1,local_14._4_4_);
    local_2c[1] = -(uint)(iVar5 != 3);
    iVar5 = lua_type(param_1,local_18);
    local_2c[2] = -(uint)(iVar5 != 3);
    piVar4 = local_2c;
    iVar1 = 0;
    do {
      iVar5 = *piVar4;
      iVar2 = local_8;
      if (iVar5 < 0) break;
      iVar1 = iVar1 + iVar5;
      piVar4 = piVar4 + 1;
      iVar5 = iVar1;
      iVar2 = iVar1;
    } while (piVar4 != &local_20);
    local_8 = iVar2;
    if (iVar5 < 0) goto LAB_00870f54;
    bVar6 = iVar5 == *param_3;
    if (iVar5 < *param_3) {
      *param_3 = iVar5;
      param_3[1] = param_2;
      param_3[0xb] = 1;
      goto LAB_00870f65;
    }
  }
  else {
LAB_00870f54:
    bVar6 = iVar5 == *param_3;
  }
  if (bVar6) {
    param_3[param_3[0xb] + 1] = param_2;
    param_3[0xb] = param_3[0xb] + 1;
  }
LAB_00870f65:
  iVar1 = 0;
  if (*(int **)(param_2 + 0x24) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 4))(param_1,param_3);
  }
  if ((iVar5 == *param_3) && (param_3[0xb] == 1)) {
    fVar7 = (float10)lua_tonumber(param_1,local_18);
    local_18 = (float)fVar7;
    fVar7 = (float10)lua_tonumber(param_1,local_14._4_4_);
    local_14 = (longlong)ROUND(fVar7);
    (*(code *)*param_4)((undefined4)local_14,&local_18);
    iVar1 = lua_gettop(param_1);
    iVar1 = iVar1 - local_20;
  }
  return iVar1;
}

