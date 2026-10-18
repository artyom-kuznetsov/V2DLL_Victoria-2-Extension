// FUN_008716c0 @ 008716c0 body=[[008716c0, 008717e9]]


int FUN_008716c0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  float fVar8;
  int local_18;
  int local_14;
  int local_10 [2];
  int local_8;
  
  iVar2 = FUN_004f5fc0();
  local_8 = iVar2 + 1;
  local_10[0] = lua_gettop();
  iVar5 = -1;
  iVar3 = FUN_004f5fc0();
  if (iVar3 + iVar2 == local_10[0]) {
    cVar1 = FUN_00a31490();
    local_18 = (-(uint)(cVar1 != '\0') & 0xccccccd) - 1;
    iVar5 = lua_type();
    local_14 = -(uint)(iVar5 != 3);
    piVar4 = &local_18;
    iVar2 = 0;
    do {
      iVar5 = *piVar4;
      if (iVar5 < 0) break;
      iVar5 = iVar2 + iVar5;
      piVar4 = piVar4 + 1;
      iVar2 = iVar5;
    } while (piVar4 != local_10);
    if (iVar5 < 0) goto LAB_00871765;
    bVar6 = iVar5 == *param_2;
    if (iVar5 < *param_2) {
      *param_2 = iVar5;
      param_2[1] = param_1;
      param_2[0xb] = 1;
      goto LAB_00871776;
    }
  }
  else {
LAB_00871765:
    bVar6 = iVar5 == *param_2;
  }
  if (bVar6) {
    param_2[param_2[0xb] + 1] = param_1;
    param_2[0xb] = param_2[0xb] + 1;
  }
LAB_00871776:
  iVar2 = 0;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 4))();
  }
  if ((iVar5 == *param_2) && (param_2[0xb] == 1)) {
    fVar7 = (float10)lua_tonumber();
    fVar8 = (float)fVar7;
    FUN_00872d80(DAT_013f1980);
    FUN_00872830(fVar8);
    FUN_004010c0();
    iVar2 = lua_gettop();
    iVar2 = iVar2 - local_10[0];
  }
  return iVar2;
}

