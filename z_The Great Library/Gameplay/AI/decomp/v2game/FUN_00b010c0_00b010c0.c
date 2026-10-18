// FUN_00b010c0 @ 00b010c0 body=[[00b010c0, 00b01179]]


void FUN_00b010c0(int param_1,int *param_2,int *param_3,int param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = *param_3;
  iVar6 = param_1 * 0x40;
  iVar3 = *param_2;
  fVar1 = *(float *)(iVar3 + 0x30 + iVar6) - *(float *)(iVar2 + 0x30 + iVar6);
  fVar5 = *(float *)(iVar3 + 0x34 + iVar6) - *(float *)(iVar2 + 0x34 + iVar6);
  fVar4 = *(float *)(iVar3 + 0x38 + iVar6) - *(float *)(iVar2 + 0x38 + iVar6);
  fVar1 = fVar4 * fVar4 + fVar5 * fVar5 + fVar1 * fVar1;
  if (fVar1 <= 1e-05) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  if (fVar1 < *param_5) {
    fVar1 = *param_5;
  }
  *param_5 = fVar1;
  iVar2 = *(int *)(*(int *)(param_4 + 0x80) + param_1 * 4);
  uVar7 = 0;
  if (*(int *)(iVar2 + 0x40) != 0) {
    do {
      FUN_00b010c0(*(undefined4 *)(*(int *)(iVar2 + 0x3c) + uVar7 * 4),param_2,param_3,param_4,
                   param_5);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(iVar2 + 0x40));
  }
  return;
}

