// FUN_00a20ae0 @ 00a20ae0 body=[[00a20ae0, 00a20b7a]]


void FUN_00a20ae0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 *unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_00414c50(param_1);
  fVar3 = (float10)FUN_00414c70(param_1);
  *unaff_ESI = CONCAT44((float)fVar3,(float)fVar2);
  uVar1 = DAT_00f092fc;
  *(ulonglong *)((int)unaff_ESI + 0xc) = CONCAT44((float)fVar2,-(float)fVar3);
  unaff_ESI[3] = 0;
  *(undefined4 *)(unaff_ESI + 1) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 4) = uVar1;
  return;
}

