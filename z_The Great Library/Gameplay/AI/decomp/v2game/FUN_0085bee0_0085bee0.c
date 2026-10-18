// FUN_0085bee0 @ 0085bee0 body=[[0085bee0, 0085bf8b] [0085bf92, 0085bfd5] [0085bfdf, 0085c000]]


void FUN_0085bee0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = param_1;
  puVar2 = (undefined4 *)(param_1 + 0xe8);
  FUN_0085c4c0(puVar2,param_1 + 0xf8,param_2,param_3,param_4);
  piVar1 = (int *)(param_1 + 0xc);
  param_1 = 4;
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *piVar1 * 4) + 0x31) != '\0') {
    param_1 = 8;
  }
  if (*(int *)(iVar8 + 0x1c) == 3) {
    param_1 = 0xc;
  }
  iVar3 = *(int *)(iVar8 + 0xf0);
  do {
    if (iVar3 <= param_1) {
      return;
    }
    iVar3 = *(int *)(iVar8 + 0xec);
    puVar4 = (undefined4 *)**(int **)(iVar8 + 0xec);
    if (iVar3 != 0) {
      if (*(char *)(iVar8 + 0xf4) == '\0') {
        iVar5 = *(int *)(iVar3 + 4);
        *(int *)(iVar8 + 0xec) = iVar5;
        if (iVar5 == 0) {
          *puVar2 = 0;
        }
        else {
          *(undefined4 *)(iVar5 + 8) = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar3);
      }
      *(undefined1 *)(iVar3 + 0xc) = 1;
    }
    piVar1 = (int *)(*(int *)(iVar8 + 0x100) + ((uint)puVar4[3] % *(uint *)(iVar8 + 0xfc)) * 4);
    piVar6 = (int *)0x0;
    for (piVar7 = (int *)*piVar1; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
      if ((undefined4 *)*piVar7 == puVar4) {
        if (piVar6 == (int *)0x0) {
          *piVar1 = piVar7[1];
        }
        else {
          piVar6[1] = piVar7[1];
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar7);
      }
      piVar6 = piVar7;
    }
    (**(code **)*puVar4)(1);
    iVar3 = *(int *)(iVar8 + 0xf0);
  } while( true );
}

