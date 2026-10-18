// FUN_00a3c440 @ 00a3c440 body=[[00a3c440, 00a3c5d3]]


void FUN_00a3c440(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int local_108 [65];
  
  puVar1 = param_2;
  do {
    while( true ) {
      piVar5 = *(int **)(param_1 + 0x1c);
      if ((char)piVar5[0x44] == '\0') {
        iVar2 = (**(code **)(*piVar5 + 4))();
        piVar5[2] = iVar2;
        if (iVar2 == 0) {
          piVar5[3] = 0x13;
        }
        *(undefined1 *)(piVar5 + 0x44) = 1;
      }
      piVar5 = piVar5 + 3;
      piVar7 = local_108;
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      }
      if ((local_108[0] == 4) || (local_108[0] == 0x13)) {
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        return;
      }
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      puVar6 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
      puVar8 = (undefined4 *)(param_1 + 0x228);
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%f",&param_2);
      if (iVar2 == 0) {
        FUN_009a1140();
      }
      puVar6 = (undefined4 *)puVar1[1];
      if ((&param_2 < puVar6) && (puVar8 = (undefined4 *)*puVar1, puVar8 <= &param_2)) break;
      if (puVar6 == (undefined4 *)puVar1[2]) {
        uVar3 = (int)((int)puVar6 - *puVar1) >> 2;
        if (0x3ffffffe < uVar3) goto LAB_00a3c5b4;
        uVar3 = uVar3 + 1;
        uVar4 = (int)((int)puVar1[2] - *puVar1) >> 2;
        if (uVar4 < uVar3) {
          if (0x3fffffff - (uVar4 >> 1) < uVar4) {
            uVar4 = 0;
          }
          else {
            uVar4 = uVar4 + (uVar4 >> 1);
          }
          if (uVar4 < uVar3) {
            uVar4 = uVar3;
          }
          FUN_004bf300(uVar4);
        }
      }
      if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
        *(undefined4 *)puVar1[1] = param_2;
      }
      puVar1[1] = puVar1[1] + 4;
    }
    if (puVar6 == (undefined4 *)puVar1[2]) {
      uVar3 = (int)puVar6 - (int)puVar8 >> 2;
      if (0x3ffffffe < uVar3) {
LAB_00a3c5b4:
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar3 = uVar3 + 1;
      uVar4 = (int)puVar1[2] - (int)puVar8 >> 2;
      if (uVar4 < uVar3) {
        if (0x3fffffff - (uVar4 >> 1) < uVar4) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 + (uVar4 >> 1);
        }
        if (uVar4 < uVar3) {
          uVar4 = uVar3;
        }
        FUN_004bf300(uVar4);
      }
    }
    if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
      *(undefined4 *)puVar1[1] = *(undefined4 *)(*puVar1 + ((int)&param_2 - (int)puVar8 >> 2) * 4);
    }
    puVar1[1] = puVar1[1] + 4;
  } while( true );
}

