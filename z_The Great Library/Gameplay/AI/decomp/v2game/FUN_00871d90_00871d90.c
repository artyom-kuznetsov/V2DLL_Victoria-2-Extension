// FUN_00871d90 @ 00871d90 body=[[00871d90, 00871eba] [00871ebe, 00871ed1]]


/* WARNING: Type propagation algorithm not settling */

int FUN_00871d90(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_34 [5];
  uint local_20;
  undefined4 local_18;
  int local_14 [3];
  int local_8;
  
  local_8 = lua_gettop(param_1);
  iVar5 = -1;
  iVar2 = FUN_004f5fc0();
  if (iVar2 == local_8) {
    local_18 = 0;
    piVar3 = (int *)FUN_00aa9820(param_1,1);
    if (piVar3 == (int *)0x0) {
      local_14[2] = -1;
    }
    else if ((int *)*piVar3 == (int *)0x0) {
      local_14[1] = 0;
      local_14[2] = -1;
    }
    else {
      (**(code **)(*(int *)*piVar3 + 4))(local_14 + 1,DAT_013f366c);
      if ((-1 < local_14[2]) && ((*piVar3 == 0 || (*(char *)(*piVar3 + 8) == '\0')))) {
        local_14[2] = local_14[2] + 10;
      }
    }
    local_14[0] = local_14[2];
    piVar3 = local_14;
    iVar2 = 0;
    do {
      iVar5 = *piVar3;
      if (iVar5 < 0) break;
      iVar5 = iVar2 + iVar5;
      piVar3 = piVar3 + 1;
      iVar2 = iVar5;
    } while (piVar3 != local_14 + 1);
    if (iVar5 < 0) goto LAB_00871e4f;
    bVar6 = iVar5 == *in_EAX;
    if (iVar5 < *in_EAX) {
      *in_EAX = iVar5;
      in_EAX[1] = param_2;
      in_EAX[0xb] = 1;
      goto LAB_00871e60;
    }
  }
  else {
LAB_00871e4f:
    bVar6 = iVar5 == *in_EAX;
  }
  if (bVar6) {
    in_EAX[in_EAX[0xb] + 1] = param_2;
    in_EAX[0xb] = in_EAX[0xb] + 1;
  }
LAB_00871e60:
  iVar2 = 0;
  if (*(int **)(param_2 + 0x24) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_2 + 0x24) + 4))(param_1);
  }
  if ((iVar5 == *in_EAX) && (in_EAX[0xb] == 1)) {
    puVar4 = (undefined4 *)(*(code *)*param_3)(local_34);
    puVar1 = puVar4 + 4;
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    lua_pushlstring(param_1,puVar4,*puVar1);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    iVar2 = lua_gettop(param_1);
    iVar2 = iVar2 - local_8;
  }
  return iVar2;
}

