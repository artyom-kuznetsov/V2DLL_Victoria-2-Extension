// FUN_00873140 @ 00873140 body=[[00873140, 008732a2]]


int FUN_00873140(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float10 fVar8;
  int local_24 [3];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = FUN_00a3c430();
  local_8 = iVar1 + 1;
  local_c = 0;
  local_10 = lua_gettop(param_1);
  iVar6 = -1;
  iVar2 = FUN_004f5fc0();
  iVar3 = FUN_004f5fc0();
  iVar5 = local_8;
  if (iVar3 + iVar2 + iVar1 == local_10) {
    local_24[0] = 0;
    iVar6 = lua_type(param_1,local_8);
    local_24[1] = -(uint)(iVar6 != 3);
    piVar4 = (int *)FUN_00aa9820(param_1,iVar2 + iVar5);
    if (piVar4 == (int *)0x0) {
      local_14 = -1;
    }
    else {
      if ((int *)*piVar4 == (int *)0x0) {
        local_18 = 0;
        local_14 = -1;
      }
      else {
        (**(code **)(*(int *)*piVar4 + 4))(&local_18,DAT_013f3640);
        if ((-1 < local_14) && ((*piVar4 == 0 || (*(char *)(*piVar4 + 8) == '\0')))) {
          local_14 = local_14 + 10;
        }
      }
      local_c = local_18;
    }
    local_24[2] = local_14;
    piVar4 = local_24;
    iVar5 = 0;
    do {
      iVar6 = *piVar4;
      if (iVar6 < 0) break;
      piVar4 = piVar4 + 1;
      iVar6 = iVar5 + iVar6;
      iVar5 = iVar6;
    } while (piVar4 != &local_18);
    if (iVar6 < 0) goto LAB_00873237;
    bVar7 = iVar6 == *param_3;
    if (iVar6 < *param_3) {
      *param_3 = iVar6;
      param_3[1] = param_2;
      param_3[0xb] = 1;
      goto LAB_00873248;
    }
  }
  else {
LAB_00873237:
    bVar7 = iVar6 == *param_3;
  }
  if (bVar7) {
    param_3[param_3[0xb] + 1] = param_2;
    param_3[0xb] = param_3[0xb] + 1;
  }
LAB_00873248:
  iVar5 = 0;
  if (*(int **)(param_2 + 0x24) != (int *)0x0) {
    iVar5 = (**(code **)(**(int **)(param_2 + 0x24) + 4))(param_1,param_3);
  }
  if ((iVar6 == *param_3) && (param_3[0xb] == 1)) {
    fVar8 = (float10)lua_tonumber(param_1,local_8);
    (*(code *)*param_4)(param_1,(float)fVar8,local_c);
    iVar5 = lua_gettop(param_1);
    iVar5 = iVar5 - local_10;
  }
  return iVar5;
}

