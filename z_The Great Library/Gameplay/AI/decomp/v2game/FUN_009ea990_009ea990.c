// FUN_009ea990 @ 009ea990 body=[[009ea990, 009eaa24]]


void FUN_009ea990(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int iVar4;
  
  if ((-1 < param_1) && (cVar2 = (**(code **)(*in_ECX + 0x68))(param_1), cVar2 == '\x01')) {
    piVar1 = (int *)(&DAT_00f20c60)[param_1];
    puVar3 = &DAT_00f20c60 + param_1;
    if (piVar1 != (int *)0x0) {
      if (param_2 + -10000 < -10000) {
        param_2 = 0;
      }
      if (param_2 != 10000 && -1 < param_2 + -10000) {
        param_2 = 10000;
      }
      if ((&DAT_00f21460)[param_1] != 0) {
        iVar4 = 0x40;
        do {
          (**(code **)(*(int *)*puVar3 + 0x3c))((int *)*puVar3,param_2 + -10000);
          puVar3 = puVar3 + 0x200;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        return;
      }
      (**(code **)(*piVar1 + 0x3c))(piVar1,param_2 + -10000);
    }
  }
  return;
}

