// FUN_0085c010 @ 0085c010 body=[[0085c010, 0085c081] [0085c088, 0085c0c5] [0085c0cb, 0085c0eb]]


void FUN_0085c010(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 in_EDX;
  uint uVar7;
  
  FUN_0085c4c0((undefined4 *)(param_1 + 0x104),param_1 + 0x114,in_EDX,param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x10c);
  do {
    if (iVar1 < 9) {
      return;
    }
    puVar2 = (undefined4 *)**(int **)(param_1 + 0x108);
    iVar1 = *(int *)(param_1 + 0x108);
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0x110) == '\0') {
        iVar3 = *(int *)(iVar1 + 4);
        *(int *)(param_1 + 0x108) = iVar3;
        if (iVar3 == 0) {
          *(undefined4 *)(param_1 + 0x104) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 8) = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar1);
      }
      *(undefined1 *)(iVar1 + 0xc) = 1;
    }
    uVar7 = (uint)puVar2[3] % *(uint *)(param_1 + 0x118);
    piVar6 = *(int **)(*(int *)(param_1 + 0x11c) + uVar7 * 4);
    piVar5 = (int *)0x0;
    while (piVar4 = piVar6, piVar4 != (int *)0x0) {
      if ((undefined4 *)*piVar4 == puVar2) {
        if (piVar5 == (int *)0x0) {
          *(int *)(*(int *)(param_1 + 0x11c) + uVar7 * 4) = piVar4[1];
        }
        else {
          piVar5[1] = piVar4[1];
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar4);
      }
      piVar5 = piVar4;
      piVar6 = (int *)piVar4[1];
    }
    (**(code **)*puVar2)(1);
    iVar1 = *(int *)(param_1 + 0x10c);
  } while( true );
}

