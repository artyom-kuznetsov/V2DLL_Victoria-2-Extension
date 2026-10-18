// FUN_00640ef0 @ 00640ef0 body=[[00640ef0, 006411a0]]


undefined4 *
FUN_00640ef0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,int *param_19,undefined4 param_20,undefined4 param_21)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b92ca9;
  local_10 = ExceptionList;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_8 = 0;
  local_18 = *(undefined4 *)(param_3 + 0x6b9c0);
  local_1c = *(undefined4 *)(param_3 + 0x6b9bc);
  local_24 = *(int *)(param_2 + 0xa8);
  local_20 = *(undefined4 *)(param_2 + 0xac);
  ExceptionList = &local_10;
  FUN_009e16c0(param_1,param_3,param_4,param_5,param_6,&local_24,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_20,param_18,
               *(undefined4 *)(param_2 + 600),&local_1c,param_2 + 0x25c,param_2 + 0x1d4,param_21,0,
               &local_34,0);
  FUN_004097a0(&local_34);
  *param_1 = CEU3DialogGui::vftable;
  param_1[6] = CEU3DialogGui::vftable;
  param_1[0x136] = CTernary<CIcon*,0>::vftable;
  param_1[0x137] = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  param_1[0x139] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  *(undefined1 *)(param_1 + 0x13e) = 0;
  local_8._0_1_ = 3;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  *(undefined1 *)(param_1 + 0x142) = 0;
  iVar2 = *param_19;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x20);
    FUN_00408db0(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  FUN_00641bc0(0,0,&LAB_0057e9e0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8 = CONCAT31(local_8._1_3_,5);
  for (iVar2 = param_1[0x13f]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar3 = (int *)FUN_00640ca0(iVar2,param_1[0x125],param_18);
    (**(code **)(*piVar3 + 0x34))();
    FUN_009e3770(piVar3);
    (**(code **)(param_1[0x136] + 0x18))(iVar2,piVar3);
  }
  iVar2 = param_1[0x92];
  if (iVar2 != 0) {
    local_24 = *(int *)(param_2 + 0xa8);
    local_20 = *(undefined4 *)(param_2 + 0xac);
    (**(code **)(**(int **)(iVar2 + 0x94) + 0x100))
              (CONCAT22((short)local_20,(short)*(undefined4 *)(param_2 + 0xa8)));
    (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x146);
  }
  local_24 = *(int *)(param_1[0x24] + 0x6b9bc) / 2 + (int)(short)param_1[0x94];
  local_20 = (int)(short)((uint)param_1[0x94] >> 0x10) + *(int *)(param_1[0x24] + 0x6b9c0) / 2;
  (**(code **)(*(int *)param_1[0x125] + 0xcc))(&local_24);
  ExceptionList = local_10;
  return param_1;
}

