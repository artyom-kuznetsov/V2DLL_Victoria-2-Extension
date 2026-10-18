// FUN_00719720 @ 00719720 body=[[00719720, 007197b8]]


void FUN_00719720(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_18 [2];
  uint local_10;
  int local_c;
  
  uVar1 = local_10;
  iVar2 = local_c;
  if (1 < (int)param_2 - (int)param_1 >> 4) {
    FUN_00719b20(param_4);
    uVar1 = local_10;
    iVar2 = local_c;
  }
  for (; param_2 < param_3; param_2 = param_2 + 4) {
    local_c = param_2[3];
    local_10 = param_2[2];
    if (((int)param_1[3] <= local_c) &&
       (((int)param_1[3] < local_c || ((uint)param_1[2] < local_10)))) {
      local_18[0] = *param_2;
      *param_2 = *param_1;
      param_2[2] = param_1[2];
      param_2[3] = param_1[3];
      FUN_00612760(local_18,param_4);
      uVar1 = local_10;
      iVar2 = local_c;
    }
    local_c = iVar2;
    local_10 = uVar1;
    uVar1 = local_10;
    iVar2 = local_c;
  }
  local_10 = uVar1;
  local_c = iVar2;
  FUN_00611160(param_1,param_4);
  return;
}

