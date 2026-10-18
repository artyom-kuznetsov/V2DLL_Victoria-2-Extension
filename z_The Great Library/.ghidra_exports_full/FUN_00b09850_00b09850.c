// FUN_00b09850 @ 00b09850 body=[[00b09850, 00b098e6]]


int FUN_00b09850(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar8;
  int *in_ECX;
  ushort uVar7;
  
  iVar5 = (**(code **)(*(int *)in_ECX[4] + 0x28))();
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = *in_ECX;
    fVar4 = *(float *)(iVar6 + 0x10) + *(float *)(iVar5 + 0x20);
    if (((*(byte *)(iVar5 + 0x9c) >> 1 & 1) != 0) ||
       ((uVar3 = *(uint *)(iVar5 + 0x74), uVar3 != 0xffffffff && (uVar3 <= *(uint *)(iVar5 + 0x70)))
       )) {
LAB_00b098e1:
      return CONCAT31((int3)((uint)iVar6 >> 8),1);
    }
    uVar7 = (ushort)((uint)iVar6 >> 0x10);
    iVar6 = (uint)uVar7 << 0x10;
    if (0.0 < *(float *)(iVar5 + 0x3c)) {
      fVar1 = *(float *)(iVar5 + 0x3c);
      fVar2 = *(float *)(iVar5 + 0x14);
      iVar6 = CONCAT22(uVar7,(ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10
                             | (ushort)(fVar1 == fVar2) << 0xe);
      if (fVar1 < fVar2 != (fVar1 == fVar2)) goto LAB_00b098e1;
    }
    fVar1 = *(float *)(iVar5 + 0x3c);
    uVar8 = (undefined2)((uint)iVar6 >> 0x10);
    iVar6 = CONCAT22(uVar8,(ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe);
    if (0.0 < fVar1) {
      fVar2 = *(float *)(iVar5 + 0x3c) - fVar4;
      fVar1 = *(float *)(iVar5 + 0x14);
      iVar6 = CONCAT22(uVar8,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 < fVar1 != (fVar2 == fVar1)) goto LAB_00b098e1;
    }
    if ((uVar3 != 0xffffffff) && (uVar3 - 1 == *(int *)(iVar5 + 0x70))) {
      fVar4 = *(float *)(*(int *)(iVar5 + 0x8c) + 0x28) - fVar4;
      fVar1 = *(float *)(iVar5 + 0x14);
      iVar6 = CONCAT22((short)((uint)*(int *)(iVar5 + 0x8c) >> 0x10),
                       (ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                       (ushort)(fVar4 == fVar1) << 0xe);
      if (fVar4 < fVar1 != (fVar4 == fVar1)) {
        return CONCAT31((int3)((uint)iVar6 >> 8),1);
      }
    }
  }
  return iVar6;
}

