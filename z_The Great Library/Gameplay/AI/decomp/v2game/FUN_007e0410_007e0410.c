// FUN_007e0410 @ 007e0410 body=[[007e0410, 007e06ee]]


void FUN_007e0410(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  float fVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined4 uStack_6c;
  undefined4 local_68;
  float local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  
  if (*(char *)(in_ECX + 0x26b8) == '\0') {
    FUN_007df9e0();
  }
  iVar2 = *(int *)(in_ECX + 0x26b4);
  param_1 = param_1 * 0x18;
  fVar1 = *(float *)(param_1 + 8 + iVar2);
  local_64 = fVar1 / (float)*(int *)(param_1 + 4 + iVar2);
  local_4c = (float)param_4 * local_64;
  local_64 = (float)(param_4 + 1) * local_64;
  if (fVar1 < local_64) {
    local_64 = *(float *)(param_1 + 8 + iVar2);
  }
  uStack_6c = *(undefined4 *)(param_1 + 0xc + iVar2);
  local_58 = CONCAT44((float)param_3 - 0.5,(float)param_2 - 0.5);
  local_50 = 0;
  fVar5 = ((float)param_3 - (float)*(int *)(iVar2 + 0x14 + param_1)) - 0.5;
  local_44 = CONCAT44(fVar5,(float)param_2 - 0.5);
  local_48 = 0;
  fVar1 = ((float)param_2 + (float)*(int *)(iVar2 + 0x10 + param_1)) - 0.5;
  local_68 = 0;
  local_3c = 0;
  local_30 = CONCAT44(fVar5,fVar1);
  local_28 = 0;
  local_5c = 0;
  local_1c = CONCAT44((float)param_3 - 0.5,fVar1);
  local_14 = 0;
  uStack_60 = 0;
  local_c = 0;
  uVar3 = *(uint *)(param_1 + iVar2);
  piVar4 = *(int **)(*(int *)(in_ECX + 0x26b0) + 100);
  if ((uVar3 == 0xffffffff) || (9999 < uVar3)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(uVar3 * 0x2c + 0x15c + *(int *)(in_ECX + 0x2c));
  }
  local_38 = local_4c;
  local_34 = uStack_6c;
  local_24 = local_64;
  local_20 = uStack_6c;
  local_10 = local_64;
  (**(code **)(*piVar4 + 0x104))(piVar4,0,uVar6);
  piVar4 = *(int **)(*(int *)(in_ECX + 0x26b0) + 100);
  (**(code **)(*piVar4 + 0x164))(piVar4,0x102);
  piVar4 = *(int **)(*(int *)(in_ECX + 0x26b0) + 100);
  (**(code **)(*piVar4 + 0x14c))(piVar4,6,2,&uStack_6c,0x14);
  return;
}

