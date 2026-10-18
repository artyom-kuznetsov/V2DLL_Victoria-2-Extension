// FUN_0099a480 @ 0099a480 body=[[0099a480, 0099a4e6]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0099a480(void)

{
  float fVar1;
  undefined4 in_EAX;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  int unaff_ESI;
  
  FUN_00997d10(unaff_ESI,in_EAX);
  DVar2 = timeGetTime();
  uVar3 = DVar2 - _DAT_013f08d0;
  DAT_013f08cc = DAT_013f08cc + 1;
  if (1000 < uVar3) {
    iVar4 = DAT_013f08cc * 1000;
    fVar1 = (float)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    DAT_013f08cc = 0;
    _DAT_013f08d0 = DVar2;
    *(float *)(unaff_ESI + 0x84) = (float)iVar4 / fVar1;
  }
  return;
}

