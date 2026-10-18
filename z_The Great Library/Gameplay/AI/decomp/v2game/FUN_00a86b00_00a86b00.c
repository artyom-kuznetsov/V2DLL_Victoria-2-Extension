// FUN_00a86b00 @ 00a86b00 body=[[00a86b00, 00a86ba0]]


void FUN_00a86b00(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EDI;
  
  if (*(char *)(unaff_EDI + 0xc9) == '\0') {
    puVar2 = (undefined4 *)(**(code **)(*(int *)(unaff_EDI + 0x74) + 0x2c))();
    for (piVar4 = (int *)*puVar2; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
      if (*(int *)(unaff_EDI + 0xb8) != 0) {
        if (*piVar4 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)(*piVar4 + 0x1c);
        }
        (**(code **)(*piVar3 + 0x48))();
        (**(code **)(*(int *)(*piVar4 + 0x1c) + 0x44))(*(undefined4 *)(unaff_EDI + 0xb8));
      }
    }
  }
  else {
    iVar1 = (**(code **)(*(int *)(unaff_EDI + 0x74) + 0x2c))();
    piVar4 = *(int **)(iVar1 + 4);
    if (piVar4 != (int *)0x0) {
      do {
        if (*(int *)(unaff_EDI + 0xb8) != 0) {
          if (*piVar4 == 0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = (int *)(*piVar4 + 0x1c);
          }
          (**(code **)(*piVar3 + 0x48))();
          (**(code **)(*(int *)(*piVar4 + 0x1c) + 0x44))(*(undefined4 *)(unaff_EDI + 0xb8));
        }
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
      return;
    }
  }
  return;
}

