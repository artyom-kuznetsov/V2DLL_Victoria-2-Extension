// FUN_009ea7f0 @ 009ea7f0 body=[[009ea7f0, 009ea891]]


void FUN_009ea7f0(int param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  
  piVar1 = (int *)(&DAT_00f20c60)[param_1];
  if (piVar1 != (int *)0x0) {
    if ((&DAT_00f21460)[param_1] != 0) {
      pcVar2 = &DAT_00f40c64 + param_1 * 0x10;
      iVar3 = 0x40;
      do {
        if (*(int *)(pcVar2 + -4) == 3) {
          (**(code **)(*(int *)(&DAT_00f20c60)[param_1] + 0x30))
                    ((int *)(&DAT_00f20c60)[param_1],0,0,*pcVar2 != '\0');
        }
        pcVar2 = pcVar2 + 0x2000;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return;
    }
    if (((&DAT_00f40c64)[param_1 * 0x10] != '\0') && ((&DAT_00f40c60)[param_1 * 4] == 3)) {
      (**(code **)(*piVar1 + 0x30))(piVar1,0,0,1);
      return;
    }
    (**(code **)(*piVar1 + 0x30))(piVar1,0,0,0);
  }
  return;
}

