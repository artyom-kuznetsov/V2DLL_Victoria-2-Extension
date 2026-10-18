// FUN_00871b40 @ 00871b40 body=[[00871b40, 00871c64]]


int FUN_00871b40(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  int local_18 [4];
  int local_8;
  
  iVar2 = FUN_004f5fc0();
  local_8 = iVar2 + 1;
  local_18[2] = lua_gettop();
  iVar6 = -1;
  iVar3 = FUN_004f5fc0();
  if (iVar3 + iVar2 == local_18[2]) {
    cVar1 = FUN_00a31490();
    local_18[0] = (-(uint)(cVar1 != '\0') & 0xccccccd) - 1;
    iVar6 = lua_type();
    if ((iVar6 == 4) || (local_18[1] = 0xffffffff, iVar6 == 0)) {
      local_18[1] = 0;
    }
    piVar4 = local_18;
    iVar2 = 0;
    do {
      iVar6 = *piVar4;
      if (iVar6 < 0) break;
      iVar6 = iVar2 + iVar6;
      piVar4 = piVar4 + 1;
      iVar2 = iVar6;
    } while (piVar4 != local_18 + 2);
    if (iVar6 < 0) goto LAB_00871be6;
    bVar7 = iVar6 == *param_2;
    if (iVar6 < *param_2) {
      *param_2 = iVar6;
      param_2[1] = param_1;
      param_2[0xb] = 1;
      goto LAB_00871bf7;
    }
  }
  else {
LAB_00871be6:
    bVar7 = iVar6 == *param_2;
  }
  if (bVar7) {
    param_2[param_2[0xb] + 1] = param_1;
    param_2[0xb] = param_2[0xb] + 1;
  }
LAB_00871bf7:
  iVar2 = 0;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 4))();
  }
  if ((iVar6 == *param_2) && (param_2[0xb] == 1)) {
    lua_tolstring();
    uVar5 = FUN_00872d80(DAT_013f1980);
    FUN_00872910(uVar5);
    FUN_004010c0();
    iVar2 = lua_gettop();
    iVar2 = iVar2 - local_18[2];
  }
  return iVar2;
}

