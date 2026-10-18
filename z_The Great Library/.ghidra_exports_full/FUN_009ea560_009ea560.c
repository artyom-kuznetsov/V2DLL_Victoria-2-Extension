// FUN_009ea560 @ 009ea560 body=[[009ea560, 009ea607] [009ea60e, 009ea614]]


void FUN_009ea560(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = (int *)(&DAT_00f20c60)[param_1];
  puVar3 = &DAT_00f20c60 + param_1;
  if (piVar2 != (int *)0x0) {
    if ((&DAT_00f21460)[param_1] == 0) {
      (**(code **)(*piVar2 + 0x48))(piVar2);
    }
    else {
      iVar4 = 0x40;
      do {
        (**(code **)(*(int *)*puVar3 + 0x48))((int *)*puVar3);
        puVar3 = puVar3 + 0x200;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    piVar2 = *(int **)(in_ECX + 0xc);
    if (piVar2 != (int *)0x0) {
      while (*piVar2 != param_1) {
        piVar2 = (int *)piVar2[2];
        if (piVar2 == (int *)0x0) {
          return;
        }
      }
      if (piVar2 != (int *)0x0) {
        if (*(char *)(in_ECX + 0x18) == '\0') {
          iVar4 = piVar2[1];
          iVar1 = piVar2[2];
          if (iVar4 != 0) {
            *(int *)(iVar4 + 8) = iVar1;
          }
          if (iVar1 != 0) {
            *(int *)(iVar1 + 4) = iVar4;
          }
          if (piVar2 == *(int **)(in_ECX + 0xc)) {
            *(int *)(in_ECX + 0xc) = iVar1;
          }
          if (piVar2 == *(int **)(in_ECX + 0x10)) {
            *(int *)(in_ECX + 0x10) = iVar4;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(piVar2);
        }
        *(undefined1 *)(piVar2 + 3) = 1;
        return;
      }
    }
  }
  return;
}

