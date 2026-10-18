// FUN_00a2e4a0 @ 00a2e4a0 body=[[00a2e4a0, 00a2e70d]]


void FUN_00a2e4a0(float param_1)

{
  int in_EAX;
  undefined4 unaff_ESI;
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar5 = &local_3c;
  local_3c = *(undefined8 *)(in_EAX + 0x138);
  puVar6 = puVar5;
  D3DXVec2Normalize(puVar5,puVar5);
  local_3c = CONCAT44(*(undefined4 *)(in_EAX + 0x13c),*(undefined4 *)(in_EAX + 0x140));
  D3DXVec2Normalize(&stack0xffffffbc,&stack0xffffffbc,puVar5,puVar6,unaff_ESI);
  fVar4 = param_1 * 120.0 + 80.0;
  fVar3 = param_1 * 40.0 + 10.0;
  fVar1 = (float10)FUN_00b35410(fVar3,fVar4);
  fVar2 = (float)fVar1 * (param_1 * 200.0 + 50.0);
  fVar1 = (float10)FUN_00b35410(fVar2);
  D3DXMatrixOrthoLH(in_EAX + 0x1a0,(float)fVar1 * (param_1 * 158.0 + 42.0),fVar2,fVar3,fVar4);
  fStack_30 = DAT_013f19bc - *(float *)(in_EAX + 0x138) * 60.0;
  fStack_2c = DAT_013f19c0 - *(float *)(in_EAX + 0x13c) * 60.0;
  fStack_28 = DAT_013f19c4 - *(float *)(in_EAX + 0x140) * 60.0;
  local_3c = CONCAT44(fStack_2c + *(float *)(in_EAX + 0x13c),fStack_30 + *(float *)(in_EAX + 0x138))
  ;
  fStack_34 = fStack_28 + *(float *)(in_EAX + 0x140);
  uStack_24 = DAT_00f092fc;
  uStack_20 = 0;
  uStack_1c = 0;
  D3DXMatrixLookAtLH(in_EAX + 0x160,&fStack_30,&local_3c,&uStack_24);
  return;
}

