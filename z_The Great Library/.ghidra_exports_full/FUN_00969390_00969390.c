// FUN_00969390 @ 00969390 body=[[00969390, 0096947f]]


int FUN_00969390(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *in_EAX;
  int *unaff_ESI;
  float local_c;
  int local_8;
  
  if (*unaff_ESI == 0) {
    return 0;
  }
  local_8 = -1;
  local_c = -NAN;
  FUN_009691b0(unaff_ESI[0x12],&local_8,&local_c);
  if (local_8 != -1) {
    if (local_8 < *(int *)(DAT_012587e8 + 0x10) - *(int *)(DAT_012587e8 + 0xc) >> 2) {
      local_8 = *(int *)(*(int *)(DAT_012587e8 + 0xc) + local_8 * 4);
    }
    else {
      local_8 = FUN_00561180();
    }
    if (local_8 != 0) {
      FUN_0068f390();
    }
  }
  if (local_c != -NAN) {
    iVar1 = *(int *)(unaff_ESI[0x12] + (int)local_c * 4);
    fVar2 = (float)iVar1;
    if (iVar1 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar3 = (float)*unaff_ESI;
    if (*unaff_ESI < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar2 = fVar2 / fVar3;
    if (0.35 <= fVar2) {
      if ((int)local_c < *(int *)(DAT_012587e8 + 0x10) - *(int *)(DAT_012587e8 + 0xc) >> 2) {
        local_8 = *(int *)(*(int *)(DAT_012587e8 + 0xc) + (int)local_c * 4);
        local_c = fVar2;
      }
      else {
        local_c = fVar2;
        local_8 = FUN_00561180();
      }
      if (local_8 != 0) {
        FUN_0068f390();
      }
    }
  }
  return in_EAX[1] - *in_EAX >> 2;
}

