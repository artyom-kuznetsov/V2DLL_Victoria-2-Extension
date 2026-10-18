// FUN_0085bde0 @ 0085bde0 body=[[0085bde0, 0085be2e] [0085be30, 0085be6b] [0085be72, 0085bead] [0085beb3, 0085bed7]]


void FUN_0085bde0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 in_EDX;
  int local_8;
  
  FUN_0085c4c0((undefined4 *)(param_1 + 0x94),param_1 + 0xa4,in_EDX,param_2,param_3);
  local_8 = 4;
  if (*(int *)(param_1 + 0x1c) == 3) {
    local_8 = 0xe;
  }
  iVar2 = *(int *)(param_1 + 0x9c);
  do {
    if (iVar2 <= local_8) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x98);
    puVar3 = (undefined4 *)**(int **)(param_1 + 0x98);
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0xa0) == '\0') {
        iVar4 = *(int *)(iVar2 + 4);
        *(int *)(param_1 + 0x98) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x94) = 0;
        }
        else {
          *(undefined4 *)(iVar4 + 8) = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar2);
      }
      *(undefined1 *)(iVar2 + 0xc) = 1;
    }
    piVar1 = (int *)(*(int *)(param_1 + 0xac) + ((uint)puVar3[3] % *(uint *)(param_1 + 0xa8)) * 4);
    piVar5 = (int *)0x0;
    for (piVar6 = (int *)*piVar1; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
      if ((undefined4 *)*piVar6 == puVar3) {
        if (piVar5 == (int *)0x0) {
          *piVar1 = piVar6[1];
        }
        else {
          piVar5[1] = piVar6[1];
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar6);
      }
      piVar5 = piVar6;
    }
    (**(code **)*puVar3)(1);
    iVar2 = *(int *)(param_1 + 0x9c);
  } while( true );
}

