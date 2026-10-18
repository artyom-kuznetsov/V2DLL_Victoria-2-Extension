// FUN_0085bc30 @ 0085bc30 body=[[0085bc30, 0085bc9b] [0085bca2, 0085bce5] [0085bceb, 0085bd0b]]


void FUN_0085bc30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 in_EDX;
  uint uVar7;
  
  FUN_0085c4c0((undefined4 *)(param_1 + 0x78),param_1 + 0x88,in_EDX,param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x80);
  do {
    if (iVar1 < 0xb) {
      return;
    }
    puVar2 = (undefined4 *)**(int **)(param_1 + 0x7c);
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0x84) == '\0') {
        iVar3 = *(int *)(iVar1 + 4);
        *(int *)(param_1 + 0x7c) = iVar3;
        if (iVar3 == 0) {
          *(undefined4 *)(param_1 + 0x78) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 8) = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar1);
      }
      *(undefined1 *)(iVar1 + 0xc) = 1;
    }
    uVar7 = (uint)puVar2[3] % *(uint *)(param_1 + 0x8c);
    piVar6 = *(int **)(*(int *)(param_1 + 0x90) + uVar7 * 4);
    piVar5 = (int *)0x0;
    while (piVar4 = piVar6, piVar4 != (int *)0x0) {
      if ((undefined4 *)*piVar4 == puVar2) {
        if (piVar5 == (int *)0x0) {
          *(int *)(*(int *)(param_1 + 0x90) + uVar7 * 4) = piVar4[1];
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
    iVar1 = *(int *)(param_1 + 0x80);
  } while( true );
}

