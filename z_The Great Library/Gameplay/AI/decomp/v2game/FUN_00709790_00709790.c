// FUN_00709790 @ 00709790 body=[[00709790, 00709903]]


undefined4 FUN_00709790(undefined4 param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  byte *pbVar5;
  char *pcVar6;
  int *piVar7;
  bool bVar8;
  undefined1 local_d0 [92];
  undefined1 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  piVar7 = param_2;
  puStack_c = &LAB_00b3f16e;
  local_10 = ExceptionList;
  local_60 = 0xf;
  local_44 = 0xf;
  local_28 = 0xf;
  local_18 = 0;
  local_64 = 0;
  local_74 = 0;
  local_48 = 0;
  local_58 = 0;
  local_2c = 0;
  local_3c = 0;
  local_20 = 0;
  local_1c = 1;
  local_8 = 0;
  ExceptionList = &local_10;
  if (DAT_00f09544 == '\0') goto LAB_007098dc;
  pbVar5 = (byte *)(param_2 + 5);
  if (0xf < (uint)param_2[10]) {
    pbVar5 = *(byte **)pbVar5;
  }
  pcVar6 = "gamesetup";
  do {
    bVar1 = *pbVar5;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00709826:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0070982b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_00709826;
    pbVar5 = pbVar5 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0070982b:
  local_14 = in_ECX;
  if (iVar3 == 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX[0x1d3] + 0xc) + 0x18))(local_d0,param_2);
    local_8._0_1_ = 1;
LAB_00709874:
    FUN_004115d0();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00459820();
    in_ECX = local_14;
    piVar7 = param_2;
  }
  else {
    ExceptionList = &local_10;
    cVar2 = FUN_0040b360();
    if (cVar2 != '\0') {
      FUN_007b42b0(piVar7);
      local_8._0_1_ = 2;
      goto LAB_00709874;
    }
  }
  puVar4 = (undefined4 *)(**(code **)(*piVar7 + 0x60))(&param_2);
  local_20 = *puVar4;
  iVar3 = (**(code **)(*in_ECX + 0x54))();
  if ((float)(int)local_20._2_2_ <= (float)*(int *)(iVar3 + 0xc) * 0.8) {
    local_20 = CONCAT22(local_20._2_2_ + 0x40,(undefined2)local_20);
  }
  else {
    local_1c = 0;
  }
LAB_007098dc:
  FUN_0040c830(param_1);
  FUN_00459820();
  ExceptionList = local_10;
  return param_1;
}

