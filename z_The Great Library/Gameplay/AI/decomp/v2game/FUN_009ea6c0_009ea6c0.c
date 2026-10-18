// FUN_009ea6c0 @ 009ea6c0 body=[[009ea6c0, 009ea7da] [009ea7e1, 009ea7e9]]


void FUN_009ea6c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte local_8 [4];
  
  piVar2 = (int *)(&DAT_00f20c60)[param_1];
  puVar5 = &DAT_00f20c60 + param_1;
  if (piVar2 != (int *)0x0) {
    if ((&DAT_00f21460)[param_1] == 0) {
      (**(code **)(*piVar2 + 0x24))(piVar2,local_8);
      if ((local_8[0] & 5) == 0) {
        (&DAT_00f40c60)[param_1 * 4] = 0;
      }
      else {
        (**(code **)(*(int *)*puVar5 + 0x48))((int *)*puVar5);
        (&DAT_00f40c60)[param_1 * 4] = 3;
      }
    }
    else {
      puVar4 = &DAT_00f40c60 + param_1 * 4;
      iVar3 = 0x40;
      do {
        (**(code **)(*(int *)*puVar5 + 0x24))((int *)*puVar5,local_8);
        if ((local_8[0] & 5) == 0) {
          *puVar4 = 0;
        }
        else {
          (**(code **)(*(int *)*puVar5 + 0x48))((int *)*puVar5);
          *puVar4 = 3;
        }
        puVar5 = puVar5 + 0x200;
        puVar4 = puVar4 + 0x800;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
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
          iVar3 = piVar2[1];
          iVar1 = piVar2[2];
          if (iVar3 != 0) {
            *(int *)(iVar3 + 8) = iVar1;
          }
          if (iVar1 != 0) {
            *(int *)(iVar1 + 4) = iVar3;
          }
          if (piVar2 == *(int **)(in_ECX + 0xc)) {
            *(int *)(in_ECX + 0xc) = iVar1;
          }
          if (piVar2 == *(int **)(in_ECX + 0x10)) {
            *(int *)(in_ECX + 0x10) = iVar3;
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

