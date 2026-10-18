// FUN_009eaac0 @ 009eaac0 body=[[009eaac0, 009eab73]]


void FUN_009eaac0(float param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  
  if (-1 < param_2) {
    piVar2 = (int *)(&DAT_00f20c60)[param_2];
    puVar1 = &DAT_00f20c60 + param_2;
    if (piVar2 != (int *)0x0) {
      param_1 = (float)(&DAT_00f40c6c)[param_2 * 4] * param_1;
      if ((&DAT_00f21460)[param_2] != 0) {
        pfVar3 = (float *)(&DAT_00f40c68 + param_2 * 4);
        iVar4 = 0x40;
        do {
          *pfVar3 = param_1;
          pfVar3 = pfVar3 + 0x800;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        (**(code **)(*piVar2 + 0x18))(piVar2,&param_2);
        param_2 = (int)((float)param_2 * param_1);
        (**(code **)(*(int *)*puVar1 + 0x3c))((int *)*puVar1,param_2);
        return;
      }
      (&DAT_00f40c68)[param_2 * 4] = param_1;
    }
  }
  return;
}

