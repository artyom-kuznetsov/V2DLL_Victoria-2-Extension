// FUN_0085c0f0 @ 0085c0f0 body=[[0085c0f0, 0085c161] [0085c168, 0085c1a5] [0085c1ab, 0085c1cb]]


void FUN_0085c0f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 in_EDX;
  uint uVar7;
  
  FUN_0085c4c0((undefined4 *)(param_1 + 0xb0),param_1 + 0xc0,in_EDX,param_2,param_3);
  iVar1 = *(int *)(param_1 + 0xb8);
  do {
    if (iVar1 < 0xb) {
      return;
    }
    puVar2 = (undefined4 *)**(int **)(param_1 + 0xb4);
    iVar1 = *(int *)(param_1 + 0xb4);
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0xbc) == '\0') {
        iVar3 = *(int *)(iVar1 + 4);
        *(int *)(param_1 + 0xb4) = iVar3;
        if (iVar3 == 0) {
          *(undefined4 *)(param_1 + 0xb0) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 8) = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar1);
      }
      *(undefined1 *)(iVar1 + 0xc) = 1;
    }
    uVar7 = (uint)puVar2[3] % *(uint *)(param_1 + 0xc4);
    piVar6 = *(int **)(*(int *)(param_1 + 200) + uVar7 * 4);
    piVar5 = (int *)0x0;
    while (piVar4 = piVar6, piVar4 != (int *)0x0) {
      if ((undefined4 *)*piVar4 == puVar2) {
        if (piVar5 == (int *)0x0) {
          *(int *)(*(int *)(param_1 + 200) + uVar7 * 4) = piVar4[1];
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
    iVar1 = *(int *)(param_1 + 0xb8);
  } while( true );
}

