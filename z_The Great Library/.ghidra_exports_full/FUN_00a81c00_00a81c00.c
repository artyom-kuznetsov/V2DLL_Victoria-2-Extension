// FUN_00a81c00 @ 00a81c00 body=[[00a81c00, 00a81f52]]


void FUN_00a81c00(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int unaff_ESI;
  int *unaff_EDI;
  float10 fVar10;
  undefined8 local_30;
  undefined8 local_20;
  
  fVar1 = *(float *)(unaff_ESI + 8);
  *(double *)(unaff_ESI + 0x68) = *(double *)(unaff_ESI + 0x68) + 0.009999999776482582;
  fVar2 = *(float *)(unaff_ESI + 0x5c);
  fVar3 = *(float *)(unaff_ESI + 0x60);
  fVar4 = *(float *)(unaff_ESI + 0x58);
  fVar9 = fVar4 + fVar1;
  fVar5 = *(float *)(unaff_ESI + 4);
  local_20 = CONCAT44(fVar5 + fVar9 + fVar3,fVar1 + fVar2);
  uVar6 = *(undefined4 *)(unaff_ESI + 100);
  *(undefined8 *)(unaff_ESI + 0xc) = local_20;
  *(undefined4 *)(unaff_ESI + 0x14) = uVar6;
  fVar10 = (float10)FUN_00b35410();
  *(float *)(unaff_ESI + 0x1c) = ((float)fVar10 + 1.0) * 0.5;
  fVar10 = (float10)FUN_00b352e0();
  fVar7 = *(float *)(unaff_ESI + 0x54);
  fVar8 = fVar7 + fVar1;
  *(float *)(unaff_ESI + 0x20) = ((float)fVar10 + 1.0) * 0.5;
  fVar4 = (fVar1 - fVar4) + fVar5 + fVar3;
  local_30 = CONCAT44(fVar4,fVar2 + fVar8);
  *(undefined8 *)(unaff_ESI + 0x24) = local_30;
  *(undefined4 *)(unaff_ESI + 0x2c) = uVar6;
  fVar10 = (float10)FUN_00b35410();
  *(float *)(unaff_ESI + 0x34) = (float)(fVar10 + (float10)1.0) * 0.5;
  fVar10 = (float10)FUN_00b352e0();
  *(float *)(unaff_ESI + 0x38) = (float)(fVar10 + (float10)1.0) * 0.5;
  local_30 = CONCAT44(fVar4,(fVar1 - fVar7) + fVar2);
  *(undefined8 *)(unaff_ESI + 0x3c) = local_30;
  *(undefined4 *)(unaff_ESI + 0x44) = uVar6;
  fVar10 = (float10)FUN_00b35410();
  *(float *)(unaff_ESI + 0x4c) = ((float)fVar10 + 1.0) * 0.5;
  fVar10 = (float10)FUN_00b352e0();
  *(float *)(unaff_ESI + 0x50) = ((float)fVar10 + 1.0) * 0.5;
  local_20 = CONCAT44((fVar5 - fVar9) + fVar3,fVar2 - fVar8);
  *(undefined8 *)(unaff_ESI + 0x54) = local_20;
  *(undefined4 *)(unaff_ESI + 0x5c) = uVar6;
  fVar10 = (float10)FUN_00b35410();
  *(float *)(unaff_ESI + 100) = (float)(fVar10 + (float10)1.0) * 0.5;
  fVar10 = (float10)FUN_00b352e0();
  *(float *)(unaff_ESI + 0x68) = ((float)fVar10 + 1.0) * 0.5;
  (**(code **)(*unaff_EDI + 0x164))();
  (**(code **)(*unaff_EDI + 0x14c))();
  return;
}

