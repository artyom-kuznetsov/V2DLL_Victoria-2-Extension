// FUN_00969310 @ 00969310 body=[[00969310, 0096938d]]


void FUN_00969310(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int in_ECX;
  int *in_EDX;
  undefined4 *unaff_ESI;
  
  iVar1 = *in_EDX;
  *unaff_ESI = 0;
  if (((iVar1 != 0) && (uVar2 = *(uint *)(in_ECX + 8), -1 < (int)uVar2)) && (uVar2 < DAT_01258a20))
  {
    iVar3 = *(int *)(in_EDX[0x12] + uVar2 * 4);
    fVar4 = (float)iVar3;
    if (iVar3 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    fVar5 = (float)iVar1;
    if (iVar1 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    FUN_00401000((fVar4 / fVar5 + 0.0005) * 1000.0);
    uVar6 = FUN_00b31c00();
    *unaff_ESI = uVar6;
  }
  return;
}

