// FUN_00a82850 @ 00a82850 body=[[00a82850, 00a828e2] [00a828f2, 00a8293c]]


undefined4 FUN_00a82850(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_ESI;
  uint uVar5;
  undefined4 local_c;
  uint local_8;
  
  piVar1 = param_1;
  local_8 = (**(code **)(*param_1 + 0x28))(param_1);
  *(int *)(unaff_ESI + 0x188) = *(int *)(unaff_ESI + 0x188) + 1;
  iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x10))(*(int **)(unaff_ESI + 0x180));
  iVar3 = (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x28))(*(int **)(unaff_ESI + 0x180));
  if ((uint)(iVar2 - iVar3) < local_8) {
    piVar1 = *(int **)(unaff_ESI + 0x180);
    local_c = 0;
    iVar2 = *piVar1;
    uVar4 = (**(code **)(iVar2 + 0x18))(piVar1,&local_c);
    uVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,iVar3 + local_8,2,uVar4);
    iVar2 = (**(code **)(iVar2 + 0xa4))(piVar1,uVar4);
    if (iVar2 < 0) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x180));
  }
  uVar5 = 0;
  if (local_8 != 0) {
    do {
      (**(code **)(*piVar1 + 0x2c))(piVar1,uVar5,&param_1);
      if (param_1 == (int *)0x0) {
        return 0;
      }
      iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x20))
                        (*(int **)(unaff_ESI + 0x180),param_1);
      if (iVar2 < 0) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_8);
  }
  *(int **)(unaff_ESI + 0x184) = piVar1;
  return 1;
}

