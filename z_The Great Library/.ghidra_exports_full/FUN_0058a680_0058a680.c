// FUN_0058a680 @ 0058a680 body=[[0058a680, 0058a7ef]]


void FUN_0058a680(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int local_108 [65];
  
  puVar3 = param_2;
  do {
    while( true ) {
      piVar7 = *(int **)(param_1 + 0x1c);
      if ((char)piVar7[0x44] == '\0') {
        iVar4 = (**(code **)(*piVar7 + 4))();
        piVar7[2] = iVar4;
        if (iVar4 == 0) {
          piVar7[3] = 0x13;
        }
        *(undefined1 *)(piVar7 + 0x44) = 1;
      }
      piVar7 = piVar7 + 3;
      piVar8 = local_108;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      if ((local_108[0] == 4) || (local_108[0] == 0x13)) {
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        return;
      }
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      param_2 = (uint *)0x0;
      FUN_0098fc80(*(int *)(param_1 + 0x1c) + 0xc,&param_2);
      puVar1 = (undefined4 *)puVar3[1];
      if ((&param_2 < puVar1) && (puVar2 = (undefined4 *)*puVar3, puVar2 <= &param_2)) break;
      if (puVar1 == (undefined4 *)puVar3[2]) {
        uVar5 = (int)((int)puVar1 - *puVar3) >> 2;
        if (0x3ffffffe < uVar5) goto LAB_0058a7d0;
        uVar5 = uVar5 + 1;
        uVar6 = (int)((int)puVar3[2] - *puVar3) >> 2;
        if (uVar6 < uVar5) {
          if (0x3fffffff - (uVar6 >> 1) < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < uVar5) {
            uVar6 = uVar5;
          }
          FUN_00435b80(uVar6);
        }
      }
      if ((undefined4 *)puVar3[1] != (undefined4 *)0x0) {
        *(undefined4 *)puVar3[1] = param_2;
      }
      puVar3[1] = puVar3[1] + 4;
    }
    if (puVar1 == (undefined4 *)puVar3[2]) {
      uVar5 = (int)puVar1 - (int)puVar2 >> 2;
      if (0x3ffffffe < uVar5) {
LAB_0058a7d0:
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar5 = uVar5 + 1;
      uVar6 = (int)puVar3[2] - (int)puVar2 >> 2;
      if (uVar6 < uVar5) {
        if (0x3fffffff - (uVar6 >> 1) < uVar6) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar6 + (uVar6 >> 1);
        }
        if (uVar6 < uVar5) {
          uVar6 = uVar5;
        }
        FUN_00435b80(uVar6);
      }
    }
    if ((undefined4 *)puVar3[1] != (undefined4 *)0x0) {
      *(undefined4 *)puVar3[1] = *(undefined4 *)(*puVar3 + ((int)&param_2 - (int)puVar2 >> 2) * 4);
    }
    puVar3[1] = puVar3[1] + 4;
  } while( true );
}

