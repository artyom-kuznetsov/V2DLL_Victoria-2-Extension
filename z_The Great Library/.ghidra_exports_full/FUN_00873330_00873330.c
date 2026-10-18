// FUN_00873330 @ 00873330 body=[[00873330, 00873451]]


int FUN_00873330(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar1 = param_3;
  param_3 = (int *)0x0;
  local_8 = lua_gettop(param_1);
  iVar5 = -1;
  iVar2 = FUN_00a3c430();
  iVar3 = FUN_004f5fc0();
  if (iVar3 + iVar2 == local_8) {
    local_18 = 0;
    piVar4 = (int *)FUN_00aa9820(param_1,iVar2 + 1);
    if (piVar4 == (int *)0x0) {
      local_c = -1;
    }
    else {
      if ((int *)*piVar4 == (int *)0x0) {
        local_10 = 0;
        local_c = -1;
      }
      else {
        (**(code **)(*(int *)*piVar4 + 4))(&local_10,DAT_013f3640);
        if ((-1 < local_c) && ((*piVar4 == 0 || (*(char *)(*piVar4 + 8) == '\0')))) {
          local_c = local_c + 10;
        }
      }
      param_3 = (int *)local_10;
    }
    local_14 = local_c;
    piVar4 = &local_18;
    iVar2 = 0;
    do {
      iVar5 = *piVar4;
      if (iVar5 < 0) break;
      piVar4 = piVar4 + 1;
      iVar5 = iVar2 + iVar5;
      iVar2 = iVar5;
    } while (piVar4 != &local_10);
    if (iVar5 < 0) goto LAB_008733ff;
    bVar6 = iVar5 == *piVar1;
    if (iVar5 < *piVar1) {
      *piVar1 = iVar5;
      piVar1[1] = param_2;
      piVar1[0xb] = 1;
      goto LAB_00873410;
    }
  }
  else {
LAB_008733ff:
    bVar6 = iVar5 == *piVar1;
  }
  if (bVar6) {
    piVar1[piVar1[0xb] + 1] = param_2;
    piVar1[0xb] = piVar1[0xb] + 1;
  }
LAB_00873410:
  iVar2 = 0;
  if (*(int **)(param_2 + 0x24) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_2 + 0x24) + 4))(param_1,piVar1);
  }
  if ((iVar5 == *piVar1) && (piVar1[0xb] == 1)) {
    (*(code *)*param_4)(param_1,param_3);
    iVar2 = lua_gettop(param_1);
    iVar2 = iVar2 - local_8;
  }
  return iVar2;
}

