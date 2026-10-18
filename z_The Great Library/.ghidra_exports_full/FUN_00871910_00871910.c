// FUN_00871910 @ 00871910 body=[[00871910, 00871a24]]


int FUN_00871910(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int **ppiVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *unaff_EDI;
  bool bVar6;
  int *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = lua_gettop(param_1);
  piVar4 = (int *)0xffffffff;
  iVar1 = FUN_004f5fc0();
  if (iVar1 == local_c) {
    piVar4 = (int *)FUN_00aa9820(param_1,1);
    if (piVar4 == (int *)0x0) {
      local_10 = (int *)0xffffffff;
    }
    else {
      piVar5 = (int *)*piVar4;
      if (piVar5 == (int *)0x0) {
        local_14 = piVar5;
        local_10 = (int *)0xffffffff;
      }
      else {
        (**(code **)(*piVar5 + 4))(&local_14,DAT_013f3640);
        if ((-1 < (int)local_10) && ((*piVar4 == 0 || (*(char *)(*piVar4 + 8) == '\0')))) {
          local_10 = (int *)((int)local_10 + 10);
        }
      }
      local_8 = local_14;
    }
    local_18 = local_10;
    ppiVar2 = &local_18;
    piVar5 = (int *)0x0;
    do {
      piVar4 = *ppiVar2;
      if ((int)piVar4 < 0) break;
      ppiVar2 = ppiVar2 + 1;
      piVar4 = (int *)((int)piVar5 + (int)piVar4);
      piVar5 = piVar4;
    } while (ppiVar2 != &local_14);
    if ((int)piVar4 < 0) goto LAB_008719d0;
    bVar6 = piVar4 == (int *)*unaff_EDI;
    if ((int)piVar4 < *unaff_EDI) {
      *unaff_EDI = (int)piVar4;
      unaff_EDI[1] = param_2;
      unaff_EDI[0xb] = 1;
      goto LAB_008719e1;
    }
  }
  else {
LAB_008719d0:
    bVar6 = piVar4 == (int *)*unaff_EDI;
  }
  if (bVar6) {
    unaff_EDI[unaff_EDI[0xb] + 1] = param_2;
    unaff_EDI[0xb] = unaff_EDI[0xb] + 1;
  }
LAB_008719e1:
  iVar1 = 0;
  if (*(int **)(param_2 + 0x24) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 4))(param_1);
  }
  if ((piVar4 == (int *)*unaff_EDI) && (unaff_EDI[0xb] == 1)) {
    uVar3 = (*(code *)*param_3)();
    lua_pushinteger(param_1,uVar3);
    iVar1 = lua_gettop(param_1);
    iVar1 = iVar1 - local_c;
  }
  return iVar1;
}

