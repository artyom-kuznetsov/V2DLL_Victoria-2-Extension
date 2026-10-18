// FUN_0099e720 @ 0099e720 body=[[0099e720, 0099e761]]


void FUN_0099e720(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      for (piVar1 = *(int **)(*(int *)(param_1 + 8) + uVar2 * 4); piVar1 != (int *)0x0;
          piVar1 = (int *)piVar1[1]) {
        if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar1)(1);
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

