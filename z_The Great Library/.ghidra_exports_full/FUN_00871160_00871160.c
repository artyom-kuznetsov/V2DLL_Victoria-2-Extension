// FUN_00871160 @ 00871160 body=[[00871160, 00871299]]


int FUN_00871160(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  float10 fVar8;
  undefined4 uVar9;
  int local_18;
  int local_14;
  int local_10;
  undefined8 local_c;
  
  iVar2 = FUN_004f5fc0();
  local_c._4_4_ = iVar2 + 1;
  local_10 = lua_gettop();
  iVar6 = -1;
  iVar3 = FUN_004f5fc0();
  if (iVar3 + iVar2 == local_10) {
    cVar1 = FUN_00a31490();
    local_18 = (-(uint)(cVar1 != '\0') & 0xccccccd) - 1;
    iVar6 = lua_type();
    local_14 = -(uint)(iVar6 != 3);
    piVar4 = &local_18;
    iVar2 = 0;
    do {
      iVar6 = *piVar4;
      if (iVar6 < 0) break;
      iVar6 = iVar2 + iVar6;
      piVar4 = piVar4 + 1;
      iVar2 = iVar6;
    } while (piVar4 != &local_10);
    if (iVar6 < 0) goto LAB_00871205;
    bVar7 = iVar6 == *param_2;
    if (iVar6 < *param_2) {
      *param_2 = iVar6;
      param_2[1] = param_1;
      param_2[0xb] = 1;
      goto LAB_00871216;
    }
  }
  else {
LAB_00871205:
    bVar7 = iVar6 == *param_2;
  }
  if (bVar7) {
    param_2[param_2[0xb] + 1] = param_1;
    param_2[0xb] = param_2[0xb] + 1;
  }
LAB_00871216:
  iVar2 = 0;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 4))();
  }
  if ((iVar6 == *param_2) && (param_2[0xb] == 1)) {
    fVar8 = (float10)lua_tonumber();
    local_c = (longlong)ROUND(fVar8);
    uVar9 = (undefined4)local_c;
    uVar5 = FUN_00872d80(DAT_013f1980);
    FUN_008726a0(uVar5,uVar9);
    FUN_004010c0();
    iVar2 = lua_gettop();
    iVar2 = iVar2 - local_10;
  }
  return iVar2;
}

