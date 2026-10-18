// FUN_00a20820 @ 00a20820 body=[[00a20820, 00a20924]]


void FUN_00a20820(undefined4 param_1)

{
  uint uVar1;
  ulonglong *unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_00414c50(param_1);
  fVar3 = (float10)FUN_00414c70(param_1);
  uVar1 = DAT_00f092fc;
  *unaff_ESI = (ulonglong)DAT_00f092fc;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = (ulonglong)(uint)(float)fVar2 << 0x20;
  unaff_ESI[3] = (ulonglong)(uint)(float)fVar3;
  unaff_ESI[4] = (ulonglong)(uint)-(float)fVar3 << 0x20;
  unaff_ESI[6] = 0;
  unaff_ESI[5] = (ulonglong)(uint)(float)fVar2;
  unaff_ESI[7] = (ulonglong)uVar1 << 0x20;
  return;
}

