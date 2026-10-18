// FUN_00522820 @ 00522820 body=[[00522820, 00522906]]


void FUN_00522820(int param_1,undefined4 param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *unaff_ESI;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  if ((*(int *)(DAT_012588e8 + 0xb0c) <
       (*(int *)(*(int *)(DAT_012586dc + 0x10) + 8) / 1000) * 0x2238 + *(int *)(param_1 + 0xe9c)) &&
     (*(int *)(param_1 + 0x20) != param_3)) {
    *unaff_ESI = param_4;
    unaff_ESI[1] = param_5;
    return;
  }
  FUN_005225a0(&local_10,param_2,param_3);
  uVar2 = local_c;
  uVar1 = local_10;
  local_18 = local_10;
  local_14 = local_c;
  local_10 = param_4;
  local_c = param_5;
  if (((int)uVar2 < (int)param_5) || (((int)uVar2 <= (int)param_5 && (uVar1 <= param_4)))) {
    puVar3 = &local_18;
  }
  else {
    puVar3 = &local_10;
  }
  uVar1 = puVar3[1];
  uVar2 = *puVar3;
  if ((-1 < (int)uVar1) && ((0 < (int)uVar1 || (uVar2 != 0)))) {
    FUN_00523400(param_1,param_2,param_3,uVar2,uVar1);
    unaff_ESI[1] = (param_5 - uVar1) - (uint)(param_4 < uVar2);
    *unaff_ESI = param_4 - uVar2;
    return;
  }
  *unaff_ESI = param_4;
  unaff_ESI[1] = param_5;
  return;
}

