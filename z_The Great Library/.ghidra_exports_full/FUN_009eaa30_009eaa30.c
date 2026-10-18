// FUN_009eaa30 @ 009eaa30 body=[[009eaa30, 009eaaba]]


void FUN_009eaa30(int param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  int *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((-1 < param_1) && (cVar2 = (**(code **)(*in_ECX + 0x68))(param_1), cVar2 == '\x01')) {
    piVar1 = (int *)(&DAT_00f20c60)[param_1];
    puVar4 = &DAT_00f20c60 + param_1;
    if (piVar1 != (int *)0x0) {
      iVar5 = (int)((100.0 - param_2) * -50.0);
      if ((&DAT_00f21460)[param_1] != 0) {
        iVar3 = 0x40;
        do {
          (**(code **)(*(int *)*puVar4 + 0x3c))((int *)*puVar4,iVar5);
          puVar4 = puVar4 + 0x200;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        return;
      }
      (**(code **)(*piVar1 + 0x3c))(piVar1,iVar5);
    }
  }
  return;
}

