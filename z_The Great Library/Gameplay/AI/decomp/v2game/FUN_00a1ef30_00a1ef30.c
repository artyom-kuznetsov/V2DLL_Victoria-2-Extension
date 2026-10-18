// FUN_00a1ef30 @ 00a1ef30 body=[[00a1ef30, 00a1f1b1]]


void FUN_00a1ef30(undefined4 param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar2 = *(undefined8 *)(in_ECX + 0x84);
  uVar3 = *(undefined4 *)(in_ECX + 0x8c);
  FUN_004c8c20(param_1);
  fVar1 = *(float *)(in_ECX + 0xf4);
  local_48 = CONCAT44(*(float *)(in_ECX + 0x58) * fVar1,*(float *)(in_ECX + 0x54) * fVar1);
  local_40 = CONCAT44(*(float *)(in_ECX + 0x60) * fVar1,*(float *)(in_ECX + 0x5c) * fVar1);
  local_38 = CONCAT44(*(float *)(in_ECX + 0x68) * fVar1,*(float *)(in_ECX + 100) * fVar1);
  local_30 = CONCAT44(*(float *)(in_ECX + 0x70) * fVar1,*(float *)(in_ECX + 0x6c) * fVar1);
  local_28 = CONCAT44(*(float *)(in_ECX + 0x78) * fVar1,*(float *)(in_ECX + 0x74) * fVar1);
  local_20 = CONCAT44(*(float *)(in_ECX + 0x80) * fVar1,*(float *)(in_ECX + 0x7c) * fVar1);
  local_18 = CONCAT44(*(float *)(in_ECX + 0x88) * fVar1,*(float *)(in_ECX + 0x84) * fVar1);
  local_10 = CONCAT44(*(float *)(in_ECX + 0x90) * fVar1,*(float *)(in_ECX + 0x8c) * fVar1);
  local_94 = (undefined4)uVar2;
  pfVar5 = (float *)&local_48;
  pfVar6 = (float *)(in_ECX + 0x54);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  *(undefined4 *)(in_ECX + 0x84) = local_94;
  uStack_90 = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(in_ECX + 0x88) = uStack_90;
  *(undefined4 *)(in_ECX + 0x8c) = uVar3;
  *(undefined4 *)(in_ECX + 0x90) = DAT_00f092fc;
  return;
}

