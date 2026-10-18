// FUN_00b006b0 @ 00b006b0 body=[[00b006b0, 00b0075d]]


void FUN_00b006b0(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = (uint)*(ushort *)(in_ECX + 1);
  if ((*(ushort *)(in_ECX + 1) != 0) && (fVar3 = *(float *)(*in_ECX + 8), 0.0 < fVar3)) {
    uVar6 = 0;
    if (3 < uVar5) {
      iVar4 = 0;
      iVar7 = (uVar5 - 4 >> 2) + 1;
      uVar6 = iVar7 * 4;
      do {
        *(float *)(iVar4 + 8 + *in_ECX) = *(float *)(iVar4 + 8 + *in_ECX) - fVar3;
        *(float *)(iVar4 + 0x14 + *in_ECX) = *(float *)(iVar4 + 0x14 + *in_ECX) - fVar3;
        *(float *)(iVar4 + 0x20 + *in_ECX) = *(float *)(iVar4 + 0x20 + *in_ECX) - fVar3;
        iVar1 = iVar4 + 0x2c;
        iVar2 = iVar4 + 0x2c;
        iVar4 = iVar4 + 0x30;
        iVar7 = iVar7 + -1;
        *(float *)(iVar2 + *in_ECX) = *(float *)(iVar1 + *in_ECX) - fVar3;
      } while (iVar7 != 0);
    }
    if (uVar6 < uVar5) {
      iVar4 = uVar6 * 0xc;
      iVar7 = uVar5 - uVar6;
      do {
        iVar1 = iVar4 + 8;
        iVar2 = iVar4 + 8;
        iVar4 = iVar4 + 0xc;
        iVar7 = iVar7 + -1;
        *(float *)(iVar2 + *in_ECX) = *(float *)(iVar1 + *in_ECX) - fVar3;
      } while (iVar7 != 0);
    }
  }
  if (in_ECX[2] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b0075b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)in_ECX[2] + 8))();
  return;
}

