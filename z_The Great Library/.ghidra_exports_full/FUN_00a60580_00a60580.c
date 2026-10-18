// FUN_00a60580 @ 00a60580 body=[[00a60580, 00a605b3] [00a605bd, 00a605d9] [00a605dd, 00a605e3]]


void FUN_00a60580(uint *param_1)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(in_EAX + 0x60) + (*param_1 % *(uint *)(in_EAX + 0x5c)) * 4);
  if (piVar2 != (int *)0x0) {
    while (iVar1 = *piVar2, *(uint *)(iVar1 + 0x1c) != *param_1) {
      piVar2 = (int *)piVar2[1];
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1);
      }
    }
    if (iVar1 != 0) {
      FUN_00a6a950();
      FUN_00a605f0();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1);
}

