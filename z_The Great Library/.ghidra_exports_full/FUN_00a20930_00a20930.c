// FUN_00a20930 @ 00a20930 body=[[00a20930, 00a20a2c]]


void FUN_00a20930(undefined4 param_1)

{
  uint uVar1;
  undefined8 *unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_00414c50(param_1);
  fVar3 = (float10)FUN_00414c70(param_1);
  *unaff_ESI = CONCAT44((float)fVar3,(float)fVar2);
  unaff_ESI[1] = 0;
  unaff_ESI[2] = CONCAT44((float)fVar2,-(float)fVar3);
  unaff_ESI[3] = 0;
  uVar1 = DAT_00f092fc;
  unaff_ESI[4] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[5] = (ulonglong)uVar1;
  unaff_ESI[7] = (ulonglong)uVar1 << 0x20;
  return;
}

