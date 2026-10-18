// FUN_005dabb0 @ 005dabb0 body=[[005dabb0, 005dac53]]


void FUN_005dabb0(undefined4 param_1)

{
  ulonglong *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_00414c50(param_1);
  fVar2 = (float10)FUN_00414c70(param_1);
  *unaff_ESI = (ulonglong)(uint)(float)fVar1;
  *(ulonglong *)((int)unaff_ESI + 0xc) = (ulonglong)DAT_00f092fc << 0x20;
  unaff_ESI[3] = (ulonglong)(uint)(float)fVar2;
  *(float *)(unaff_ESI + 1) = -(float)fVar2;
  *(undefined4 *)((int)unaff_ESI + 0x14) = 0;
  *(float *)(unaff_ESI + 4) = (float)fVar1;
  return;
}

