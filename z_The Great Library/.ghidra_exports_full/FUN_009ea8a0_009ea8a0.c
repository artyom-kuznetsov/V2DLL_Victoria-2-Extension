// FUN_009ea8a0 @ 009ea8a0 body=[[009ea8a0, 009ea90f]]


void FUN_009ea8a0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)(&DAT_00f20c60)[param_1];
  puVar3 = &DAT_00f20c60 + param_1;
  if (piVar1 != (int *)0x0) {
    if (param_2 < 100) {
      param_2 = 100;
    }
    else if (100000 < param_2) {
      param_2 = 100000;
    }
    if ((&DAT_00f21460)[param_1] != 0) {
      iVar2 = 0x40;
      do {
        (**(code **)(*(int *)*puVar3 + 0x44))((int *)*puVar3,param_2);
        puVar3 = puVar3 + 0x200;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
    (**(code **)(*piVar1 + 0x44))(piVar1,param_2);
  }
  return;
}

