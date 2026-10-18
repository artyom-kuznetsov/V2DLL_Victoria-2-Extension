// FUN_00a2e8b0 @ 00a2e8b0 body=[[00a2e8b0, 00a2eef4]]


undefined4 * FUN_00a2e8b0(undefined4 *param_1)

{
  float *pfVar1;
  
  if (DAT_00f078c4 != 0) {
    DAT_00f078c4 = 0;
    FUN_00a2e710();
  }
  pfVar1 = (float *)*param_1;
  return &DAT_01255ea0 +
         ((((int)(pfVar1[2] + 4096.0) & 0xffU) + 1 & 0xff) +
         (&DAT_01254e90)
         [(&DAT_01254e90)[((int)(*pfVar1 + 4096.0) & 0xffU) + 1 & 0xff] +
          (((int)(pfVar1[1] + 4096.0) & 0xffU) + 1 & 0xff)]) * 3;
}

