// FUN_00ad87c0 @ 00ad87c0 body=[[00ad87c0, 00ad88c5]]


ushort FUN_00ad87c0(float *param_1,float *param_2,float param_3)

{
  ushort uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_c;
  float local_8;
  float local_4;
  
  fVar2 = (float10)FUN_00b31730();
  fVar3 = (float10)fsin((fVar2 + fVar2) * (float10)0.5);
  fVar4 = (float10)0;
  if (fVar3 <= fVar4) {
    local_8 = 1.0;
    fVar2 = fVar4;
    fVar3 = fVar4;
  }
  else {
    fVar3 = (float10)1 / fVar3;
    local_8 = (float)((float10)param_1[1] * fVar3);
    fVar4 = fVar2 + fVar2;
    fVar2 = (float10)*param_1 * fVar3;
    fVar3 = fVar3 * (float10)param_1[2];
  }
  local_4 = (float)fVar3;
  local_c = (float)fVar2;
  param_1 = (float *)(float)fVar4;
  fVar2 = (float10)FUN_00b31730();
  fVar3 = (float10)fsin((float10)0.5 * (fVar2 + fVar2));
  fVar4 = (float10)0;
  if (fVar3 <= fVar4) {
    fVar5 = (float10)1;
    fVar3 = fVar4;
    fVar2 = fVar4;
  }
  else {
    fVar3 = (float10)1 / fVar3;
    fVar4 = (float10)*param_2 * fVar3;
    fVar5 = (float10)param_2[1] * fVar3;
    fVar3 = (float10)param_2[2] * fVar3;
    fVar2 = fVar2 + fVar2;
  }
  fVar2 = ABS((float10)(float)param_1 - fVar2);
  fVar6 = (float10)param_3;
  uVar1 = (ushort)(fVar6 < fVar2) << 8 | (ushort)(NAN(fVar6) || NAN(fVar2)) << 10 |
          (ushort)(fVar6 == fVar2) << 0xe;
  if (fVar6 >= fVar2) {
    fVar4 = ABS((float10)local_c - fVar4);
    uVar1 = (ushort)(fVar4 < fVar6) << 8 | (ushort)(NAN(fVar4) || NAN(fVar6)) << 10 |
            (ushort)(fVar4 == fVar6) << 0xe;
    if (fVar4 < fVar6 || (fVar4 == fVar6) != 0) {
      fVar4 = ABS((float10)local_8 - fVar5);
      uVar1 = (ushort)(fVar4 < fVar6) << 8 | (ushort)(NAN(fVar4) || NAN(fVar6)) << 10 |
              (ushort)(fVar4 == fVar6) << 0xe;
      if (fVar4 < fVar6 || (fVar4 == fVar6) != 0) {
        fVar4 = ABS((float10)local_4 - fVar3);
        uVar1 = (ushort)(fVar4 < fVar6) << 8 | (ushort)(NAN(fVar4) || NAN(fVar6)) << 10 |
                (ushort)(fVar4 == fVar6) << 0xe;
        if (fVar4 < fVar6 || (fVar4 == fVar6) != 0) {
          return CONCAT11((char)(uVar1 >> 8),1);
        }
      }
    }
  }
  return uVar1;
}

