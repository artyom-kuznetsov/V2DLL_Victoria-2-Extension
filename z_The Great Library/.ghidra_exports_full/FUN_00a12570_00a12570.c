// FUN_00a12570 @ 00a12570 body=[[00a12570, 00a12673]]


void FUN_00a12570(int param_1,uint *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  int local_108 [65];
  
  puVar3 = param_2;
LAB_00a12580:
  do {
    do {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar4 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar4;
        if (iVar4 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar7 = local_108;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      if ((local_108[0] == 4) || (local_108[0] == 0x13)) {
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        return;
      }
      FUN_009a1440(param_1);
      puVar5 = (uint *)(**(code **)(*param_3 + 8))(param_1,*(undefined4 *)(param_1 + 0x20));
      param_2 = puVar5;
    } while (puVar5 == (uint *)0x0);
    (**(code **)(*puVar5 + 0xc))(param_1);
    puVar1 = (undefined4 *)puVar3[1];
    if (&param_2 < puVar1) {
      puVar2 = (undefined4 *)*puVar3;
      if (puVar2 <= &param_2) {
        if (puVar1 == (undefined4 *)puVar3[2]) {
          FUN_00a513f0();
        }
        if ((undefined4 *)puVar3[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar3[1] =
               *(undefined4 *)(*puVar3 + ((int)&param_2 - (int)puVar2 >> 2) * 4);
        }
        puVar3[1] = puVar3[1] + 4;
        goto LAB_00a12580;
      }
    }
    if (puVar1 == (undefined4 *)puVar3[2]) {
      FUN_00a513f0();
    }
    if ((undefined4 *)puVar3[1] != (undefined4 *)0x0) {
      *(undefined4 *)puVar3[1] = puVar5;
    }
    puVar3[1] = puVar3[1] + 4;
  } while( true );
}

