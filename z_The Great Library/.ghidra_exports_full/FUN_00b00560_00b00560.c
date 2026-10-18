// FUN_00b00560 @ 00b00560 body=[[00b00560, 00b005f1]]


void FUN_00b00560(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int *in_ECX;
  uint uVar5;
  
  uVar5 = (uint)*(ushort *)(in_ECX + 1);
  if ((*(ushort *)(in_ECX + 1) != 0) && (fVar3 = *(float *)(*in_ECX + 4), 0.0 < fVar3)) {
    uVar4 = 0;
    if (3 < uVar5) {
      do {
        *(float *)(*in_ECX + 4 + uVar4 * 8) = *(float *)(*in_ECX + 4 + uVar4 * 8) - fVar3;
        *(float *)(*in_ECX + 0xc + uVar4 * 8) = *(float *)(*in_ECX + 0xc + uVar4 * 8) - fVar3;
        *(float *)(*in_ECX + 0x14 + uVar4 * 8) = *(float *)(*in_ECX + 0x14 + uVar4 * 8) - fVar3;
        iVar1 = uVar4 * 8;
        iVar2 = uVar4 * 8;
        uVar4 = uVar4 + 4;
        *(float *)(*in_ECX + 0x1c + iVar2) = *(float *)(*in_ECX + 0x1c + iVar1) - fVar3;
      } while (uVar4 < uVar5 - 3);
    }
    for (; uVar4 < uVar5; uVar4 = uVar4 + 1) {
      *(float *)(*in_ECX + 4 + uVar4 * 8) = *(float *)(*in_ECX + 4 + uVar4 * 8) - fVar3;
    }
  }
  if (in_ECX[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b005ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)in_ECX[2] + 8))();
    return;
  }
  return;
}

