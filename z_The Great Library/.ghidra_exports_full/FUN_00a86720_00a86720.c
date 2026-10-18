// FUN_00a86720 @ 00a86720 body=[[00a86720, 00a869b3]]


void FUN_00a86720(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  short *psVar5;
  float *pfVar6;
  int *piVar7;
  short sVar8;
  int *in_ECX;
  float fVar9;
  float local_14;
  float local_10;
  short local_c;
  undefined2 uStack_a;
  short local_8;
  ushort uStack_6;
  
  iVar2 = (**(code **)(*in_ECX + 200))();
  if ((0 < iVar2) && (*(char *)((int)in_ECX + 0x4f) != '\0')) {
    iVar2 = in_ECX[0x17];
    iVar3 = (**(code **)(in_ECX[0x1d] + 0x2c))();
    local_14 = *(float *)(iVar3 + 8);
    puVar4 = (undefined4 *)(**(code **)(in_ECX[0x1d] + 0x2c))();
    psVar5 = (short *)(**(code **)(*(int *)(*(int *)*puVar4 + 0x1c) + 0x14))(&local_10);
    fVar1 = local_14;
    fVar9 = (float)(int)*psVar5;
    local_10 = (float)*(int *)(in_ECX[0x1c] + 0x98) + fVar9;
    local_14 = ((float)iVar2 - fVar9) / (float)(int)local_14;
    pfVar6 = &local_10;
    if (local_14 <= local_10) {
      pfVar6 = &local_14;
    }
    local_14 = *pfVar6;
    local_8 = 0;
    uStack_6 = 0;
    if ((char)in_ECX[0x32] != '\0') {
      iVar2 = in_ECX[0x19];
      if (iVar2 == 3) {
        local_8 = (short)in_ECX[0x1a];
        uStack_6 = *(ushort *)(in_ECX + 0x1b);
      }
      else if (iVar2 == 1) {
        local_8 = (short)in_ECX[0x1a];
        uStack_6 = 0;
      }
      else if (iVar2 == 2) {
        uStack_6 = *(ushort *)(in_ECX + 0x1b);
        local_8 = 0;
      }
      else if (iVar2 == 4) {
        local_8 = (short)(in_ECX[0x1a] / 2);
        uStack_6 = (ushort)(in_ECX[0x1b] / 2);
      }
    }
    iVar2 = in_ECX[0x31];
    if (iVar2 != 2) {
      if (iVar2 == 0) {
        local_8 = local_8 + (short)(int)((float)in_ECX[0x17] * 0.5 -
                                        ((float)(int)fVar1 * local_14 + 0.5) * 0.5);
      }
      else if (iVar2 == 1) {
        local_8 = local_8 + (short)(int)(((double)in_ECX[0x17] - (double)(int)*psVar5) +
                                        (double)*(int *)(in_ECX[0x1c] + 0x98));
      }
    }
    iVar3 = 0;
    if (iVar2 == 1) {
      iVar2 = (**(code **)(in_ECX[0x1d] + 0x2c))();
      piVar7 = *(int **)(iVar2 + 4);
      if (piVar7 != (int *)0x0) {
        local_10 = (float)((uint)uStack_6 << 0x10);
        do {
          sVar8 = (short)(int)((float)iVar3 * local_14 + 0.5);
          _local_c = CONCAT22(uStack_a,sVar8);
          local_10 = (float)CONCAT22(local_10._2_2_,local_8 - sVar8);
          (**(code **)(*(int *)(*piVar7 + 0x1c) + 8))(local_10);
          piVar7 = (int *)piVar7[1];
          iVar3 = iVar3 + 1;
        } while (piVar7 != (int *)0x0);
        FUN_00a86b00();
        return;
      }
    }
    else {
      piVar7 = (int *)(**(code **)(in_ECX[0x1d] + 0x2c))();
      piVar7 = (int *)*piVar7;
      if (piVar7 != (int *)0x0) {
        local_10 = (float)((uint)uStack_6 << 0x10);
        do {
          sVar8 = (short)(int)((float)iVar3 * local_14 + 0.5);
          _local_c = CONCAT22(uStack_a,sVar8);
          local_10 = (float)CONCAT22(local_10._2_2_,sVar8 + local_8);
          (**(code **)(*(int *)(*piVar7 + 0x1c) + 8))(local_10);
          piVar7 = (int *)piVar7[2];
          iVar3 = iVar3 + 1;
        } while (piVar7 != (int *)0x0);
      }
    }
    FUN_00a86b00();
  }
  return;
}

