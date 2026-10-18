// FUN_00986c90 @ 00986c90 body=[[00986c90, 00986e0c] [00986e10, 00986f7e]]


void FUN_00986c90(float *param_1,undefined4 *param_2,int param_3,float param_4,undefined4 *param_5,
                 undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  float local_38 [3];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((((*param_1 != *(float *)(in_EAX + 0x16c)) || (param_1[1] != *(float *)(in_EAX + 0x170))) ||
      (*(float *)(in_EAX + 0x1ac) != param_4)) || (cVar3 = FUN_00416db0(), cVar3 == '\0')) {
    if (param_3 == 0) {
      param_3 = FUN_00a3b7f0(*(undefined4 *)(in_EAX + 0x13c));
    }
    *(float *)(in_EAX + 0x16c) = *param_1;
    *(float *)(in_EAX + 0x170) = param_1[1];
    FUN_00408ed0(param_2,0,0xffffffff);
    FUN_00408ed0(param_3 + 0xc,0,0xffffffff);
    *(float *)(in_EAX + 0x1ac) = param_4;
    if (param_5 != (undefined4 *)0x0) {
      if ((*(int *)(in_EAX + 0x1b4) - *(int *)(in_EAX + 0x1b0) & 0xfffffff8U) == 0) {
        FUN_0043a750(param_5);
      }
      else {
        FUN_00630060(*(int *)(in_EAX + 0x1b4),*param_5,param_5[1],param_2);
      }
      *(undefined4 *)(in_EAX + 0x1c0) = param_6;
    }
    piVar2 = *(int **)(in_EAX + 0x148);
    piVar1 = (int *)(in_EAX + 0x148);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = *(int **)(in_EAX + 0x14c);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = *(int **)(in_EAX + 0x150);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    iVar5 = 0;
    *(undefined4 *)(in_EAX + 0x150) = 0;
    *piVar1 = 0;
    *(undefined4 *)(in_EAX + 0x14c) = 0;
    *(undefined4 *)(in_EAX + 0x154) = 0;
    *(undefined4 *)(in_EAX + 0x158) = 0;
    *(undefined4 *)(in_EAX + 0x164) = 0;
    local_8 = param_2[4];
    local_10 = 0;
    if (0 < local_8) {
      do {
        puVar6 = param_2;
        if (0xf < (uint)param_2[5]) {
          puVar6 = (undefined4 *)*param_2;
        }
        if (*(char *)((int)puVar6 + iVar5) == ' ') {
          local_10 = local_10 + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_8);
    }
    local_c = 0;
    iVar5 = 0;
    if (0 < local_8) {
      do {
        puVar6 = param_2;
        if (0xf < (uint)param_2[5]) {
          puVar6 = (undefined4 *)*param_2;
        }
        if (*(char *)((int)puVar6 + iVar5) == '\r') {
          local_c = local_c + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_8);
    }
    iVar7 = 0;
    iVar5 = 0;
    if (0 < local_8) {
      local_14 = param_2[5];
      do {
        puVar6 = param_2;
        if (0xf < local_14) {
          puVar6 = (undefined4 *)*param_2;
        }
        if (*(char *)((int)puVar6 + iVar5) == '\n') {
          iVar7 = iVar7 + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_8);
    }
    *(undefined1 *)(in_EAX + 0x15c) = 1;
    FUN_009f9630(piVar1,*(undefined4 *)(*(int *)(*(int *)(in_EAX + 0x13c) + 0x8c) + 100),
                 (((local_8 - iVar7) - local_c) - local_10) * 6,0x14,0x102,0);
    piVar2 = (int *)*piVar1;
    if (piVar2 == (int *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar4 = 0;
      if ((*(char *)(in_EAX + 0x15d) != '\0') && (*(char *)(in_EAX + 0x15e) == '\0')) {
        uVar4 = 0x2000;
      }
      (**(code **)(*piVar2 + 0x2c))(piVar2,0,0,&local_14,uVar4);
      uVar8 = local_14;
    }
    local_38[0] = *param_1;
    local_38[2] = param_1[1];
    local_38[1] = 0.0;
    local_2c = 0;
    local_28 = 0;
    local_1c = 0;
    local_18 = 0;
    local_24 = DAT_00f092fc;
    local_20 = DAT_00f092fc;
    uVar4 = FUN_00a26d00(param_3,uVar8,param_2,local_38,&local_2c,&local_20,param_4,100000);
    if (param_5 != (undefined4 *)0x0) {
      FUN_00986f80(uVar8,uVar4,param_6);
    }
    (**(code **)(*(int *)*piVar1 + 0x30))((int *)*piVar1);
  }
  return;
}

