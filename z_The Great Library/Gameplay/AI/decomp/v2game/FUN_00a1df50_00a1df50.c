// FUN_00a1df50 @ 00a1df50 body=[[00a1df50, 00a1df58] [00a1df60, 00a1dfe8]]


void FUN_00a1df50(void)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = 0;
  do {
    fVar2 = (float10)FUN_00414c70(((((float)iVar1 * 3.1415927) / 180.0) * 360.0) / 360.0);
    (&DAT_01253648)[iVar1] = (float)fVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1c2);
  iVar1 = 0;
  do {
    fVar2 = (float10)FUN_00b34f90();
    iVar1 = iVar1 + 1;
    (&DAT_01252644)[iVar1] = (float)fVar2;
  } while (iVar1 < 0x400);
  return;
}

