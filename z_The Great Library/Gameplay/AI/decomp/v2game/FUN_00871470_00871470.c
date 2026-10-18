// FUN_00871470 @ 00871470 body=[[00871470, 008715cb]]


int FUN_00871470(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
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
  iVar5 = -1;
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
        (**(code **)(*piVar3 + 4))(&local_18,DAT_013f3660);
        local_c = (int)local_18;
      }
      else {
        local_18._4_4_ = -1;
      }
    }
    local_20 = local_18._4_4_;
    iVar5 = lua_type();
    local_1c = -(uint)(iVar5 != 3);
    piVar3 = &local_20;
    iVar1 = 0;
    do {
      iVar5 = *piVar3;
      if (iVar5 < 0) break;
      iVar5 = iVar1 + iVar5;
      piVar3 = piVar3 + 1;
      iVar1 = iVar5;
    } while (piVar3 != (int *)&local_18);
    if (iVar5 < 0) goto LAB_0087154d;
    bVar6 = iVar5 == *param_2;
    if (iVar5 < *param_2) {
      *param_2 = iVar5;
      param_2[1] = param_1;
      param_2[0xb] = 1;
      goto LAB_0087155e;
    }
  }
  else {
LAB_0087154d:
    bVar6 = iVar5 == *param_2;
  }
  if (bVar6) {
    param_2[param_2[0xb] + 1] = param_1;
    param_2[0xb] = param_2[0xb] + 1;
  }
LAB_0087155e:
  iVar1 = 0;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 4))();
  }
  if ((iVar5 == *param_2) && (param_2[0xb] == 1)) {
    fVar7 = (float10)lua_tonumber();
    local_18 = (longlong)ROUND(fVar7);
    uVar4 = (*(code *)*param_3)((int)local_18);
    FUN_00873af0(uVar4);
    iVar1 = lua_gettop();
    iVar1 = iVar1 - local_10;
  }
  return iVar1;
}

