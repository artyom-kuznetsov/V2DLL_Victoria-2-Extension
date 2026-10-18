// FUN_009c0e20 @ 009c0e20 body=[[009c0e20, 009c0f6f]]


int FUN_009c0e20(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint3 uVar4;
  undefined4 *in_EAX;
  int iVar5;
  int in_EDX;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float local_1c [6];
  
  fVar9 = -3.4028235e+38;
  fVar8 = 3.4028235e+38;
  local_1c[3] = (float)*in_EAX;
  local_1c[4] = (float)in_EAX[1];
  local_1c[5] = (float)in_EAX[2];
  local_1c[0] = (float)in_EAX[3];
  local_1c[1] = (float)in_EAX[4];
  local_1c[2] = (float)in_EAX[5];
  iVar5 = 0;
  while( true ) {
    fVar1 = *(float *)(iVar5 + 0x18 + in_EDX);
    uVar4 = CONCAT21((short)((uint)in_EAX >> 0x10),
                     (fVar1 == 0.0) << 6 | NAN(fVar1) << 2 | 2U | fVar1 < 0.0);
    in_EAX = (undefined4 *)((uint)uVar4 << 8);
    if (fVar1 == 0.0) {
      fVar1 = *(float *)(iVar5 + in_EDX);
      if (fVar1 < *(float *)((int)local_1c + iVar5 + 0xc)) break;
      bVar7 = fVar1 == *(float *)((int)local_1c + iVar5);
      bVar6 = fVar1 < *(float *)((int)local_1c + iVar5);
    }
    else {
      fVar1 = *(float *)(iVar5 + 0x18 + in_EDX);
      fVar2 = (*(float *)((int)local_1c + iVar5 + 0xc) - *(float *)(iVar5 + in_EDX)) / fVar1;
      fVar1 = (*(float *)((int)local_1c + iVar5) - *(float *)(iVar5 + in_EDX)) / fVar1;
      fVar3 = fVar2;
      if (fVar1 < fVar2) {
        fVar3 = fVar1;
        fVar1 = fVar2;
      }
      if (fVar9 < fVar3) {
        fVar9 = fVar3;
      }
      if (fVar1 < fVar8) {
        fVar8 = fVar1;
      }
      if (fVar8 < fVar9) break;
      bVar7 = fVar8 == 0.0;
      bVar6 = 0.0 < fVar8;
    }
    if (!bVar6 && !bVar7) break;
    iVar5 = iVar5 + 4;
    if (0xb < iVar5) {
      return CONCAT31(uVar4,1);
    }
  }
  return (uint)uVar4 << 8;
}

