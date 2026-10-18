// FUN_00a2a3f0 @ 00a2a3f0 body=[[00a2a3f0, 00a2a984]]


void FUN_00a2a3f0(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int local_98 [17];
  int local_54 [2];
  undefined1 local_4c [28];
  undefined1 local_30 [32];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b54b95;
  local_10 = ExceptionList;
  if (param_2 < 0x135) {
    if (param_2 == 0x134) {
      ExceptionList = &local_10;
      FUN_009a1bb0(in_ECX + 0x161);
      ExceptionList = local_10;
      return;
    }
    switch(param_2) {
    case 0x3f:
      goto switchD_00a2a43a_caseD_3f;
    default:
      goto switchD_00a2a43a_caseD_40;
    case 0x58:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x140,0);
      ExceptionList = local_10;
      return;
    case 0x59:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x124,0);
      ExceptionList = local_10;
      return;
    case 0x5c:
      ExceptionList = &local_10;
      FUN_009a1de0();
      ExceptionList = local_10;
      return;
    }
  }
  switch(param_2) {
  case 0x172:
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 0xbc,0);
    FUN_00989720(in_ECX + 0xbc,&DAT_00dedc68);
    ExceptionList = local_10;
    return;
  case 0x173:
    ExceptionList = &local_10;
    FUN_00a29ce0(local_54);
    local_8 = 0;
    FUN_004012f0(local_4c);
    FUN_009a1750(local_30,0);
    FUN_00989720(local_30,&DAT_00dedc68);
    iVar3 = *(int *)(in_ECX + 0xe0);
    iVar2 = FUN_00aae9af(0x50);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      FUN_00a2c8f0(iVar2);
      *(int *)(iVar2 + 0x44) = iVar3;
      *(undefined4 *)(iVar2 + 0x48) = 0;
      *(undefined1 *)(iVar2 + 0x4c) = 0;
    }
    iVar1 = *(int *)(in_ECX + 0xe4);
    *(int *)(in_ECX + 0xe0) = iVar2;
    *(int *)(in_ECX + 0xe4) = iVar1 + 1;
    if (iVar1 != 0) {
      *(int *)(iVar3 + 0x48) = iVar2;
      FUN_00a29e10();
      ExceptionList = local_10;
      return;
    }
    goto LAB_00a2a636;
  case 0x174:
    ExceptionList = &local_10;
    FUN_00a29ce0(local_54);
    local_8 = 4;
    FUN_004012f0(local_4c);
    FUN_009a1750(local_30,0);
    FUN_00989720(local_30,&DAT_00dedc68);
    param_1 = *(float *)(in_ECX + 0xe0);
    iVar2 = FUN_00aae9af(0x50);
    local_8 = CONCAT31(local_8._1_3_,5);
    if (iVar2 == 0) {
LAB_00a2a6d2:
      iVar2 = 0;
    }
    else {
      FUN_00a2c8f0(iVar2);
      *(float *)(iVar2 + 0x44) = param_1;
      *(undefined4 *)(iVar2 + 0x48) = 0;
      *(undefined1 *)(iVar2 + 0x4c) = 0;
    }
    break;
  case 0x175:
    ExceptionList = &local_10;
    FUN_00a29ce0(local_54);
    local_8 = 2;
    FUN_004012f0(local_4c);
    FUN_009a1750(local_30,0);
    FUN_00989720(local_30,&DAT_00dedc68);
    param_1 = *(float *)(in_ECX + 0xe0);
    iVar2 = FUN_00aae9af(0x50);
    local_8 = CONCAT31(local_8._1_3_,3);
    if (iVar2 == 0) goto LAB_00a2a6d2;
    FUN_00a2c8f0(iVar2);
    *(float *)(iVar2 + 0x44) = param_1;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    *(undefined1 *)(iVar2 + 0x4c) = 0;
    break;
  default:
switchD_00a2a43a_caseD_40:
    ExceptionList = &local_10;
    FUN_00a20b80(param_1,param_2);
    ExceptionList = local_10;
    return;
  case 0x179:
    ExceptionList = &local_10;
    FUN_009a1bb0(in_ECX + 0x15e);
    ExceptionList = local_10;
    return;
  case 0x17a:
    ExceptionList = &local_10;
    FUN_00a29d70(local_98);
    local_8 = 10;
    (**(code **)(local_98[0] + 0xc))(param_1);
    iVar2 = *(int *)(in_ECX + 0xf0);
    iVar3 = FUN_00aae9af(0x50);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      FUN_00a2c980(iVar3);
      *(int *)(iVar3 + 0x44) = iVar2;
      *(undefined4 *)(iVar3 + 0x48) = 0;
      *(undefined1 *)(iVar3 + 0x4c) = 0;
    }
    iVar1 = *(int *)(in_ECX + 0xf4);
    *(int *)(in_ECX + 0xf0) = iVar3;
    *(int *)(in_ECX + 0xf4) = iVar1 + 1;
    if (iVar1 != 0) {
      *(int *)(iVar2 + 0x48) = iVar3;
      FUN_00a29e10();
      ExceptionList = local_10;
      return;
    }
    *(int *)(in_ECX + 0xec) = iVar3;
    FUN_00a29e10();
    ExceptionList = local_10;
    return;
  case 0x196:
    ExceptionList = &local_10;
    FUN_009a1bb0(in_ECX + 0x160);
    ExceptionList = local_10;
    return;
  case 0x198:
    ExceptionList = &local_10;
    FUN_009a1de0();
    *(float *)(in_ECX + 0x120) = param_1 * param_1;
    ExceptionList = local_10;
    return;
  case 0x1a6:
    ExceptionList = &local_10;
    FUN_00a29ce0(local_54);
    local_8 = 6;
    FUN_004012f0(local_4c);
    FUN_009a1750(local_30,0);
    FUN_00989720(local_30,&DAT_00dedc68);
    param_1 = *(float *)(in_ECX + 0xe0);
    iVar2 = FUN_00aae9af(0x50);
    local_8 = CONCAT31(local_8._1_3_,7);
    if (iVar2 == 0) goto LAB_00a2a6d2;
    FUN_00a2c8f0(iVar2);
    *(float *)(iVar2 + 0x44) = param_1;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    *(undefined1 *)(iVar2 + 0x4c) = 0;
    break;
  case 0x1bb:
    ExceptionList = &local_10;
    FUN_009a1bb0(in_ECX + 0x162);
    ExceptionList = local_10;
    return;
  }
LAB_00a2a6d4:
  *(int *)(in_ECX + 0xe0) = iVar2;
  iVar3 = *(int *)(in_ECX + 0xe4);
  *(int *)(in_ECX + 0xe4) = iVar3 + 1;
  if (iVar3 == 0) {
LAB_00a2a636:
    *(int *)(in_ECX + 0xdc) = iVar2;
  }
  else {
    *(int *)((int)param_1 + 0x48) = iVar2;
  }
  FUN_00a29e10();
  ExceptionList = local_10;
  return;
switchD_00a2a43a_caseD_3f:
  ExceptionList = &local_10;
  FUN_00a29ce0(local_54);
  local_8 = 8;
  (**(code **)(local_54[0] + 0xc))(param_1);
  param_1 = *(float *)(in_ECX + 0xe0);
  iVar2 = FUN_00aae9af(0x50);
  local_8 = CONCAT31(local_8._1_3_,9);
  if (iVar2 == 0) goto LAB_00a2a6d2;
  FUN_00a2c8f0(iVar2);
  *(float *)(iVar2 + 0x44) = param_1;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined1 *)(iVar2 + 0x4c) = 0;
  goto LAB_00a2a6d4;
}

