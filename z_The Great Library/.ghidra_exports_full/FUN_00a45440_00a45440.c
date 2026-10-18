// FUN_00a45440 @ 00a45440 body=[[00a45440, 00a45722]]


void FUN_00a45440(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 *puVar8;
  int *in_ECX;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 local_74;
  undefined8 local_60;
  undefined8 local_4c;
  undefined8 local_38;
  undefined8 *local_8;
  
  if (in_ECX[0x3e] == 0) {
    (**(code **)(*in_ECX + 0x74))();
  }
  iVar1 = in_ECX[0x68];
  iVar2 = in_ECX[0x69];
  fVar10 = (float)(iVar1 / in_ECX[0x29]);
  fVar11 = (float)(iVar2 / in_ECX[0x2a]);
  piVar3 = (int *)in_ECX[0x3b];
  puVar8 = (undefined8 *)0x0;
  if (piVar3 != (int *)0x0) {
    uVar9 = 0;
    if ((*(char *)((int)in_ECX + 0x101) != '\0') && (*(char *)((int)in_ECX + 0x102) == '\0')) {
      uVar9 = 0x2000;
    }
    (**(code **)(*piVar3 + 0x2c))(piVar3,0,0,&local_8,uVar9);
    puVar8 = local_8;
  }
  fVar7 = (float)iVar2 + 0.0;
  local_60 = CONCAT44(fVar7 - 0.5,0xbf000000);
  fVar5 = DAT_00f092fc + 0.0;
  local_74 = CONCAT44((float)*(ushort *)((int)in_ECX + 0xae) - 0.5,0xbf000000);
  fVar6 = DAT_00f092fc + 0.0;
  fVar4 = ((float)iVar1 + 0.0) - 0.5;
  local_4c = CONCAT44(fVar7 - 0.5,fVar4);
  local_38 = CONCAT44((float)*(ushort *)((int)in_ECX + 0xae) - 0.5,fVar4);
  fVar7 = DAT_00f092fc + 0.0;
  fVar4 = DAT_00f092fc + 0.0;
  *puVar8 = local_74;
  puVar8[1] = (ulonglong)(uint)fVar6;
  *(undefined8 *)((int)puVar8 + 0x14) = local_60;
  *(ulonglong *)((int)puVar8 + 0x1c) = (ulonglong)(uint)fVar5;
  *(undefined8 *)((int)puVar8 + 0x3c) = local_4c;
  *(ulonglong *)((int)puVar8 + 0x44) = CONCAT44(fVar10,fVar7);
  puVar8[5] = local_38;
  *(float *)(puVar8 + 2) = fVar11;
  *(undefined4 *)((int)puVar8 + 0x24) = 0;
  puVar8[6] = CONCAT44(fVar10,fVar4);
  *(undefined4 *)((int)puVar8 + 0x4c) = 0;
  *(float *)(puVar8 + 7) = fVar11;
  (**(code **)(*(int *)in_ECX[0x3b] + 0x30))((int *)in_ECX[0x3b]);
  return;
}

