// FUN_00804b10 @ 00804b10 body=[[00804b10, 00804b79] [00804b80, 00804b8d]]


void FUN_00804b10(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_EAX;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)*in_EAX;
  iVar4 = in_EAX[1] - (int)puVar5 >> 2;
  if (iVar4 != 0) {
    puVar1 = puVar5 + iVar4;
    for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      piVar2 = (int *)*puVar5;
      if (piVar2 != (int *)0x0) {
        piVar3 = (int *)*piVar2;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        piVar3 = (int *)piVar2[1];
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        piVar3 = (int *)piVar2[2];
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        piVar2[2] = 0;
        *piVar2 = 0;
        piVar2[1] = 0;
        piVar2[3] = 0;
        piVar2[4] = 0;
        piVar2[7] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar2);
      }
    }
  }
  return;
}

