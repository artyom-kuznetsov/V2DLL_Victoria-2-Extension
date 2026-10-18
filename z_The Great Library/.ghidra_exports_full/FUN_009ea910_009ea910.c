// FUN_009ea910 @ 009ea910 body=[[009ea910, 009ea989]]


void FUN_009ea910(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)(&DAT_00f20c60)[param_1];
  puVar3 = &DAT_00f20c60 + param_1;
  if (piVar1 != (int *)0x0) {
    if (param_2 < -10000) {
      param_2 = -10000;
    }
    else if (10000 < param_2) {
      param_2 = 10000;
    }
    if ((&DAT_00f21460)[param_1] != 0) {
      iVar2 = 0x40;
      do {
        (**(code **)(*(int *)*puVar3 + 0x40))((int *)*puVar3,param_2);
        puVar3 = puVar3 + 0x200;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
    (**(code **)(*piVar1 + 0x40))(piVar1,param_2);
  }
  return;
}

