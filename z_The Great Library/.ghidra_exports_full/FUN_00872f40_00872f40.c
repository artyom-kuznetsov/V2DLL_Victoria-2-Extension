// FUN_00872f40 @ 00872f40 body=[[00872f40, 0087300c] [00873010, 008730b7]]


int FUN_00872f40(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  int local_24 [3];
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_14 = 0;
  iVar1 = FUN_00a3c430();
  iVar2 = FUN_004f5fc0();
  local_10 = iVar2 + iVar1 + 1;
  local_18 = lua_gettop(param_1);
  local_8 = -1;
  iVar3 = FUN_004f5fc0();
  iVar5 = local_8;
  if (iVar3 + iVar2 + iVar1 == local_18) {
    local_24[0] = 0;
    piVar4 = (int *)FUN_00aa9820(param_1,iVar1 + 1);
    if (piVar4 == (int *)0x0) {
      local_24[1] = -1;
    }
    else {
      if ((int *)*piVar4 == (int *)0x0) {
        local_c = 0;
        local_24[1] = -1;
      }
      else {
        (**(code **)(*(int *)*piVar4 + 4))(&local_c,DAT_013f3640);
        local_24[1] = local_8;
        if ((-1 < local_8) && ((*piVar4 == 0 || (*(char *)(*piVar4 + 8) == '\0')))) {
          local_24[1] = local_8 + 10;
        }
      }
      local_14 = local_c;
    }
    iVar5 = lua_type(param_1,local_10);
    local_24[2] = -(uint)(iVar5 != 3);
    piVar4 = local_24;
    iVar1 = 0;
    do {
      iVar5 = *piVar4;
      iVar2 = local_8;
      if (iVar5 < 0) break;
      iVar1 = iVar1 + iVar5;
      piVar4 = piVar4 + 1;
      iVar5 = iVar1;
      iVar2 = iVar1;
    } while (piVar4 != &local_18);
    local_8 = iVar2;
    if (iVar5 < 0) goto LAB_0087304d;
    bVar6 = iVar5 == *param_3;
    if (iVar5 < *param_3) {
      *param_3 = iVar5;
      param_3[1] = param_2;
      param_3[0xb] = 1;
      goto LAB_0087305e;
    }
  }
  else {
LAB_0087304d:
    bVar6 = iVar5 == *param_3;
  }
  if (bVar6) {
    param_3[param_3[0xb] + 1] = param_2;
    param_3[0xb] = param_3[0xb] + 1;
  }
LAB_0087305e:
  iVar1 = 0;
  if (*(int **)(param_2 + 0x24) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 4))(param_1,param_3);
  }
  if ((iVar5 == *param_3) && (param_3[0xb] == 1)) {
    fVar7 = (float10)lua_tonumber(param_1,local_10);
    (*(code *)*param_4)(param_1,local_14,(float)fVar7);
    iVar1 = lua_gettop(param_1);
    iVar1 = iVar1 - local_18;
  }
  return iVar1;
}

