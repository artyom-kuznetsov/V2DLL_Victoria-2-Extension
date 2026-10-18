// FUN_0043f240 @ 0043f240 body=[[0043f240, 0043f551]]


void FUN_0043f240(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int *piVar5;
  float fVar6;
  double dVar7;
  float *pfVar8;
  int iVar9;
  short *psVar10;
  int *in_ECX;
  float fVar11;
  undefined1 auStack_2c [4];
  float fStack_28;
  float fStack_24;
  double dStack_20;
  undefined1 local_18 [20];
  
  fVar11 = param_1;
  pfVar8 = (float *)(**(code **)(*in_ECX + 0xc))(local_18,param_1);
  fVar1 = pfVar8[1];
  fVar2 = *pfVar8;
  fVar3 = pfVar8[2];
  fVar6 = *(float *)((int)param_1 + 0x194) * fVar2 + *(float *)((int)param_1 + 0x1a4) * fVar1 +
          *(float *)((int)param_1 + 0x1b4) * fVar3 + *(float *)((int)param_1 + 0x1c4);
  fStack_28 = (*(float *)((int)param_1 + 0x198) * fVar1 + *(float *)((int)param_1 + 0x188) * fVar2 +
               *(float *)((int)param_1 + 0x1a8) * fVar3 + *(float *)((int)param_1 + 0x1b8)) / fVar6;
  fStack_24 = (*(float *)((int)param_1 + 0x18c) * fVar2 + *(float *)((int)param_1 + 0x19c) * fVar1 +
               *(float *)((int)param_1 + 0x1ac) * fVar3 + *(float *)((int)param_1 + 0x1bc)) / fVar6;
  in_ECX[6] = (int)((*(float *)((int)param_1 + 400) * fVar2 +
                     *(float *)((int)param_1 + 0x1a0) * fVar1 +
                     *(float *)((int)param_1 + 0x1b0) * fVar3 + *(float *)((int)param_1 + 0x1c0)) /
                   fVar6);
  dStack_20 = (double)((float)*(int *)(DAT_01258a74 + 0x6b9c0) * (fStack_24 * -0.5 + 0.5));
  iVar9 = (**(code **)(*(int *)in_ECX[4] + 0x60))(auStack_2c);
  sVar4 = *(short *)(iVar9 + 2);
  dVar7 = (double)CONCAT44(dStack_20._0_4_,fStack_24);
  psVar10 = (short *)(**(code **)(*(int *)in_ECX[4] + 0x60))(auStack_2c);
  (**(code **)(*(int *)in_ECX[4] + 0x18))
            (CONCAT22(*(short *)((int)in_ECX + 0x1e) +
                      (short)(int)(dVar7 - (double)(int)sVar4 * 0.5),
                      (short)in_ECX[7] + (short)(int)(fVar11 - (float)(int)*psVar10 * 0.5)));
  piVar5 = (int *)in_ECX[4];
  if (*(char *)((int)piVar5 + 0x67) == '\0') {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x20))();
    }
    (**(code **)(*(int *)in_ECX[4] + 0xb0))();
  }
  return;
}

