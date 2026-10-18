// FUN_007238b0 @ 007238b0 body=[[007238b0, 00723a20]]


void FUN_007238b0(undefined4 param_1,int *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int *piVar8;
  float10 fVar9;
  float local_10;
  int iStack_c;
  
  if (param_2[0x41] == 0) {
    local_10 = DAT_00f092dc;
  }
  else {
    fVar9 = (float10)(**(code **)(*(int *)(param_2[0x41] + 0x54) + 0x10))();
    local_10 = (float)fVar9;
  }
  bVar3 = false;
  switch(param_1) {
  case 2:
    bVar3 = true;
  case 1:
    iStack_c = (uint)iStack_c._1_3_ << 8;
    FUN_007246e0(*param_3,param_3[1],(int)(param_3[1] - *param_3) >> 2,iStack_c);
    break;
  case 4:
    bVar3 = true;
  case 3:
    iStack_c = (uint)iStack_c._1_3_ << 8;
    FUN_00724600(*param_3,param_3[1],(int)(param_3[1] - *param_3) >> 2,iStack_c);
    break;
  default:
    goto switchD_007238fe_default;
  }
  if (bVar3) {
    puVar7 = (undefined4 *)param_3[1];
    puVar5 = (undefined4 *)*param_3;
    if (puVar5 != puVar7) {
      do {
        puVar7 = puVar7 + -1;
        if (puVar5 == puVar7) break;
        uVar6 = *puVar5;
        *puVar5 = *puVar7;
        puVar5 = puVar5 + 1;
        *puVar7 = uVar6;
      } while (puVar5 != puVar7);
    }
  }
switchD_007238fe_default:
  (**(code **)(*param_2 + 0x24))();
  piVar8 = (int *)*param_3;
  uVar6 = extraout_ECX;
  while (((int *)*param_3 <= piVar8 && (piVar8 < (int *)param_3[1]))) {
    piVar1 = (int *)*piVar8;
    piVar8 = piVar8 + 1;
    cVar4 = (**(code **)(*piVar1 + 0x30))();
    if (cVar4 == '\0') {
      (**(code **)(piVar1[7] + 0x30))();
      uVar6 = extraout_ECX_01;
    }
    else {
      (**(code **)(*param_2 + 0x10))(piVar1,1);
      uVar6 = extraout_ECX_00;
    }
  }
  iVar2 = param_2[0x41];
  if ((iVar2 != 0) && (DAT_00f092dc < local_10)) {
    FUN_00401000((local_10 + 0.0005) * 1000.0,uVar6,1,1);
    uVar6 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar2 + 0x54) + 0x1c))(uVar6);
  }
  return;
}

