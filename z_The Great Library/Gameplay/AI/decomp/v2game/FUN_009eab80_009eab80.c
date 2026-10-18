// FUN_009eab80 @ 009eab80 body=[[009eab80, 009eabde]]


void FUN_009eab80(float param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  
  if ((-1 < param_2) && ((&DAT_00f20c60)[param_2] != 0)) {
    if ((&DAT_00f21460)[param_2] != 0) {
      pfVar1 = (float *)(&DAT_00f40c6c + param_2 * 4);
      iVar2 = 0x40;
      do {
        *pfVar1 = param_1 * 0.01;
        pfVar1 = pfVar1 + 0x800;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
    (&DAT_00f40c6c)[param_2 * 4] = param_1 * 0.01;
  }
  return;
}

