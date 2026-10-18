// FUN_008717f0 @ 008717f0 body=[[008717f0, 0087190f]]


int FUN_008717f0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_EDI;
  bool bVar5;
  float10 fVar6;
  int *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = lua_gettop();
  piVar3 = (int *)0xffffffff;
  iVar1 = FUN_004f5fc0();
  if (iVar1 == local_c) {
    piVar3 = (int *)FUN_00aa9820(param_1,1);
    if (piVar3 == (int *)0x0) {
      local_10 = (int *)0xffffffff;
    }
    else {
      piVar4 = (int *)*piVar3;
      if (piVar4 == (int *)0x0) {
        local_14 = piVar4;
        local_10 = (int *)0xffffffff;
      }
      else {
        (**(code **)(*piVar4 + 4))(&local_14,DAT_013f3640);
        if ((-1 < (int)local_10) && ((*piVar3 == 0 || (*(char *)(*piVar3 + 8) == '\0')))) {
          local_10 = (int *)((int)local_10 + 10);
        }
      }
      local_8 = local_14;
    }
    local_18 = local_10;
    ppiVar2 = &local_18;
    piVar4 = (int *)0x0;
    do {
      piVar3 = *ppiVar2;
      if ((int)piVar3 < 0) break;
      ppiVar2 = ppiVar2 + 1;
      piVar3 = (int *)((int)piVar4 + (int)piVar3);
      piVar4 = piVar3;
    } while (ppiVar2 != &local_14);
    if ((int)piVar3 < 0) goto LAB_008718b0;
    bVar5 = piVar3 == (int *)*unaff_EDI;
    if ((int)piVar3 < *unaff_EDI) {
      *unaff_EDI = (int)piVar3;
      unaff_EDI[1] = param_2;
      unaff_EDI[0xb] = 1;
      goto LAB_008718c1;
    }
  }
  else {
LAB_008718b0:
    bVar5 = piVar3 == (int *)*unaff_EDI;
  }
  if (bVar5) {
    unaff_EDI[unaff_EDI[0xb] + 1] = param_2;
    unaff_EDI[0xb] = unaff_EDI[0xb] + 1;
  }
LAB_008718c1:
  iVar1 = 0;
  if (*(int **)(param_2 + 0x24) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 4))(param_1);
  }
  if ((piVar3 == (int *)*unaff_EDI) && (unaff_EDI[0xb] == 1)) {
    fVar6 = (float10)(*(code *)*param_3)();
    lua_pushnumber(param_1,(double)(float)fVar6);
    iVar1 = lua_gettop(param_1);
    iVar1 = iVar1 - local_c;
  }
  return iVar1;
}

