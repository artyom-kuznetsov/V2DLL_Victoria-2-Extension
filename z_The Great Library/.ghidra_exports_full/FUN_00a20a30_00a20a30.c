// FUN_00a20a30 @ 00a20a30 body=[[00a20a30, 00a20ad1]]


void FUN_00a20a30(undefined4 param_1)

{
  ulonglong *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_00414c50(param_1);
  fVar2 = (float10)FUN_00414c70(param_1);
  *unaff_ESI = (ulonglong)DAT_00f092fc;
  *(ulonglong *)((int)unaff_ESI + 0xc) = (ulonglong)(uint)(float)fVar1 << 0x20;
  unaff_ESI[3] = (ulonglong)(uint)-(float)fVar2 << 0x20;
  *(undefined4 *)(unaff_ESI + 1) = 0;
  *(float *)((int)unaff_ESI + 0x14) = (float)fVar2;
  *(float *)(unaff_ESI + 4) = (float)fVar1;
  return;
}

