// FUN_007f75d0 @ 007f75d0 body=[[007f75d0, 007f7cdd]]


void FUN_007f75d0(int param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined4 local_f8 [16];
  undefined4 local_b8 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_1c;
  uint local_18;
  int local_14;
  float local_10;
  uint local_c;
  
  local_c = *(uint *)(*(int *)(param_1 + 0x192c) + 0xec) &
            *(uint *)(*(int *)(param_1 + 0x192c) + 0xe8);
  *(undefined8 **)(*(int *)(param_1 + 0x3c) + 0x6bc88) = param_3;
  *(undefined8 **)(param_1 + 0x14) = param_3;
  local_24 = DAT_00f092fc;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  *(int *)(param_1 + 0x10) = param_2;
  local_38 = local_24;
  local_4c = local_24;
  local_60 = local_24;
  if ((-1 < (char)local_c) || (bVar1 = true, *(int *)(param_1 + 0x1584) == 0)) {
    bVar1 = false;
  }
  puVar2 = (undefined4 *)(**(code **)(*(int *)((int)param_3 + 0x1c) + 0x16c))();
  puVar7 = local_f8;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar2 = (undefined4 *)(**(code **)(*(int *)((int)param_3 + 0x1c) + 0x174))();
  puVar7 = local_b8;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  local_78 = *param_3;
  local_70 = param_3[1];
  local_68 = param_3[2];
  (**(code **)(*piVar3 + 0xbc))(piVar3,&local_78);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xb0))(piVar3,0x100,&local_60);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xb0))(piVar3,2,local_f8);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xb0))(piVar3,3,local_b8);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x114))(piVar3,0,6,2);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x114))(piVar3,0,5,2);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x114))(piVar3,0,7,0);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x114))(piVar3,1,6,2);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x114))(piVar3,1,5,2);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0x114))(piVar3,1,7,0);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x16,1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x34,1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x38,8);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x36,1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x35,1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x37,3);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x39,1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x3a,0xffffffff);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x3b,0xffffffff);
  FUN_007f9040();
  iVar4 = *(int *)(param_1 + 0x40);
  local_10 = *(float *)(*(int *)(param_1 + 0x10) + 0x348);
  iVar5 = 0;
  uVar6 = local_18 >> 8;
  local_18 = local_18 & 0xffffff00;
  local_14 = 0;
  if (0 < (int)(*(int *)(iVar4 + 0x44) - *(int *)(iVar4 + 0x40) & 0xfffffffcU)) {
    piVar3 = *(int **)(iVar4 + 0x40);
    do {
      if ((float)*piVar3 < local_10) {
        local_14 = iVar5 + 1;
      }
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar5 < *(int *)(iVar4 + 0x44) - *(int *)(iVar4 + 0x40) >> 2);
    if ((local_14 != 0) && (*(int *)(*(int *)(param_1 + 0x192c) + 0xf0) != 0)) {
      local_18 = CONCAT31((int3)uVar6,1);
    }
  }
  FUN_007f9fd0();
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0xe,1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,7,1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xb0))(piVar3,0x100,&local_60);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0xe,1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x38,3);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x37,1);
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  fVar8 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  local_1c = (float)fVar8;
  if (bVar1) {
    FUN_00815120(param_2,param_3,local_1c);
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x34,0);
  if (((*(int *)(param_1 + 0x1580) != 0) && (local_10 < *(float *)(DAT_0125870c + 0x2060))) &&
     ((local_c & 2) != 0)) {
    FUN_007f9a60();
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xb0))(piVar3,0x100,&local_60);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0xe,1);
  if ((local_c & 0x100) != 0) {
    FUN_007fa740(param_1,local_18);
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,7,1);
  FUN_007d2e80(*(undefined4 *)(param_1 + 0x1588),param_1,param_3,param_1 + 0x80);
  uVar6 = local_c & 0x10;
  if ((uVar6 != 0) && (local_10 < *(float *)(*(int *)(param_1 + 0x192c) + 0xf8))) {
    FUN_0098bab0();
    FUN_009992a0(*(undefined4 *)(param_1 + 0x3c),local_f8,local_b8,0,0);
  }
  if (uVar6 != 0) {
    FUN_0098bab0();
    FUN_009992a0(*(undefined4 *)(param_1 + 0x3c),local_f8,local_b8,0,0);
  }
  if (((local_c & 8) != 0) && (local_10 < *(float *)(*(int *)(param_1 + 0x192c) + 0xf8))) {
    FUN_007fbf40();
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0xe,1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,7,1);
  if ((local_14 != 0) && (*(int *)(*(int *)(param_1 + 0x192c) + 0xf0) != 0)) {
    FUN_007ded00(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x33c),
                 *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x340));
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0xe,1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,7,1);
  if (*(float *)(param_2 + 0x348) < 500.0) {
    if ((local_c & 0x20) != 0) {
      FUN_0099a480();
    }
    if (DAT_012589a6 == '\0') {
      FUN_0080ef40(*(undefined4 *)(param_1 + 0x3c),param_1 + 0x1930,
                   *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x33c),
                   *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x340));
    }
    else {
      FUN_0080fa70(*(undefined4 *)(param_1 + 0x3c),param_1 + 0x1930);
    }
  }
  FUN_009e7f90();
  if ((((local_c & 0x200) != 0) && (*(int *)(param_1 + 0x1580) != 0)) && ((char)local_18 == '\0')) {
    FUN_007f8e00();
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0xe,1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,7,1);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x1b,0);
  piVar3 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x17,4);
  return;
}

