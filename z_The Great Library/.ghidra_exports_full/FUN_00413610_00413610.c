// FUN_00413610 @ 00413610 body=[[00413610, 004136c0]]


void FUN_00413610(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *unaff_ESI;
  float10 fVar5;
  
  fVar1 = unaff_ESI[1];
  fVar2 = *unaff_ESI;
  fVar3 = unaff_ESI[2];
  fVar5 = (float10)FUN_00401030(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  fVar4 = (float)((float10)1 / fVar5);
  *unaff_ESI = fVar2 * fVar4;
  unaff_ESI[1] = fVar1 * fVar4;
  unaff_ESI[2] = fVar3 * fVar4;
  return;
}

