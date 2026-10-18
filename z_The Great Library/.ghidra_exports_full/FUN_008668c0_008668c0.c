// FUN_008668c0 @ 008668c0 body=[[008668c0, 00866977]]


void FUN_008668c0(void)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = *(int **)(in_EAX + 0x750);
  if ((piVar5 != (int *)0x0) && (DAT_01258a80 != 0)) {
    piVar1 = *(int **)(DAT_01258a80 + 0x60);
    piVar2 = *(int **)(DAT_01258a80 + 0x5c);
    if (piVar2 != piVar1) {
      do {
        if ((int *)*piVar2 == piVar5 + 6) break;
        piVar2 = piVar2 + 1;
      } while (piVar2 != piVar1);
      if (piVar2 != piVar1) {
        (**(code **)(*piVar5 + 0x50))();
        (**(code **)(*(int *)(*(int *)(in_EAX + 0x750) + 0x18) + 0x38))();
      }
    }
  }
  iVar6 = DAT_01258a80;
  *(undefined4 *)(in_EAX + 0x750) = 0;
  piVar5 = (int *)(in_EAX + 0x6fc);
  iVar4 = 10;
  do {
    if ((*piVar5 != 0) && (iVar6 != 0)) {
      piVar2 = *(int **)(iVar6 + 0x60);
      piVar1 = (int *)(*piVar5 + 0x18);
      piVar3 = *(int **)(iVar6 + 0x5c);
      if (piVar3 != piVar2) {
        do {
          if ((int *)*piVar3 == piVar1) break;
          piVar3 = piVar3 + 1;
        } while (piVar3 != piVar2);
        if (piVar3 != piVar2) {
          (**(code **)(*piVar1 + 0x38))();
          (**(code **)(*(int *)*piVar5 + 0x50))();
          iVar6 = DAT_01258a80;
          *piVar5 = 0;
        }
      }
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      *(undefined1 *)(iVar6 + 0x12) = 0;
      return;
    }
  } while( true );
}

