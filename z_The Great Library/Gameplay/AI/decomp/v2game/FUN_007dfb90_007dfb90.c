// FUN_007dfb90 @ 007dfb90 body=[[007dfb90, 007dfec4]]


void FUN_007dfb90(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  float local_6c;
  float fStack_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  undefined4 local_50;
  float local_4c;
  float local_48;
  undefined8 local_44;
  undefined4 local_3c;
  float local_38;
  float local_34;
  undefined8 local_30;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  undefined4 local_14;
  float local_10;
  float local_c;
  
  if (*(char *)(in_ECX + 0x26b8) == '\0') {
    FUN_007df9e0();
  }
  pfVar5 = (float *)FUN_0055c6c0(DAT_012587e4,&local_60,param_1);
  local_6c = *pfVar5;
  iVar8 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)pfVar5[1] * 4) + 0x20);
  iVar6 = FUN_0052fc10();
  if (iVar8 == 0) {
    iVar8 = 1;
  }
  piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x26b0) + 0x6bd6c) + iVar6 * 4) + 0x14);
  iVar7 = (iVar8 + -1) % (piVar1[1] - *piVar1 >> 3);
  local_4c = *(float *)(piVar1[((iVar8 + -1) / (piVar1[1] - *piVar1 >> 3)) * 4] + iVar7 * 8);
  local_5c = *(float *)(piVar1[((iVar8 + -1) / (piVar1[1] - *piVar1 >> 3)) * 4] + 4 + iVar7 * 8);
  puVar2 = *(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x26b0) + 0x6bd6c) + iVar6 * 4);
  local_60 = 1.0 / (float)(int)puVar2[0xe] + local_4c;
  local_34 = 1.0 / (float)(int)puVar2[0xd] + local_5c;
  fStack_68 = (float)(param_3 + -3) - 0.5;
  fVar3 = (float)param_2 - 0.5;
  local_58 = CONCAT44(fStack_68,fVar3);
  local_50 = 0;
  fVar4 = (float)(param_3 + -3) - 11.0;
  local_44 = CONCAT44(fVar4 - 0.5,fVar3);
  local_6c = (float)param_2 + 23.0;
  local_3c = 0;
  local_30 = CONCAT44(fVar4 - 0.5,local_6c - 0.5);
  local_28 = 0;
  local_6c = local_6c - 0.5;
  local_64 = 0;
  local_14 = 0;
  local_1c = CONCAT44(fStack_68,local_6c);
  piVar1 = *(int **)(*(int *)(in_ECX + 0x26b0) + 100);
  local_48 = local_5c;
  local_38 = local_4c;
  local_24 = local_60;
  local_20 = local_34;
  local_10 = local_60;
  local_c = local_5c;
  (**(code **)(*piVar1 + 0x104))(piVar1,0,*puVar2);
  piVar1 = *(int **)(*(int *)(in_ECX + 0x26b0) + 100);
  (**(code **)(*piVar1 + 0x164))(piVar1,0x102);
  piVar1 = *(int **)(*(int *)(in_ECX + 0x26b0) + 100);
  (**(code **)(*piVar1 + 0x14c))(piVar1,6,2,&local_6c,0x14);
  return;
}

