// FUN_00a84990 @ 00a84990 body=[[00a84990, 00a84b28]]


void FUN_00a84990(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  int local_10c [65];
  uint local_8;
  
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
      piVar9 = local_10c;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      if ((local_10c[0] == 4) || (local_10c[0] == 0x13)) {
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        return;
      }
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      puVar8 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
      puVar10 = (undefined4 *)(param_1 + 0x228);
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      iVar4 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%u",&param_2);
      if (iVar4 == 0) {
        uVar11 = 0;
        local_8 = 0;
        FUN_009a1140();
      }
      else {
        uVar11 = (uint)param_2 & 0xffff;
        local_8 = uVar11;
      }
      puVar1 = (uint *)puVar3[1];
      if ((&local_8 < puVar1) && (puVar2 = (uint *)*puVar3, puVar2 <= &local_8)) break;
      if (puVar1 == (uint *)puVar3[2]) {
        uVar5 = (int)((int)puVar1 - *puVar3) >> 1;
        if (0x7ffffffe < uVar5) goto LAB_00a84b09;
        uVar5 = uVar5 + 1;
        uVar6 = (int)((int)puVar3[2] - *puVar3) >> 1;
        if (uVar6 < uVar5) {
          if (0x7fffffff - (uVar6 >> 1) < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < uVar5) {
            uVar6 = uVar5;
          }
          FUN_005c5920(uVar6);
        }
      }
      if ((undefined2 *)puVar3[1] != (undefined2 *)0x0) {
        *(undefined2 *)puVar3[1] = (short)uVar11;
      }
      puVar3[1] = puVar3[1] + 2;
    }
    if (puVar1 == (uint *)puVar3[2]) {
      uVar11 = (int)puVar1 - (int)puVar2 >> 1;
      if (0x7ffffffe < uVar11) {
LAB_00a84b09:
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar11 = uVar11 + 1;
      uVar5 = (int)puVar3[2] - (int)puVar2 >> 1;
      if (uVar5 < uVar11) {
        if (0x7fffffff - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (uVar5 < uVar11) {
          uVar5 = uVar11;
        }
        FUN_005c5920(uVar5);
      }
    }
    if ((undefined2 *)puVar3[1] != (undefined2 *)0x0) {
      *(undefined2 *)puVar3[1] = *(undefined2 *)(*puVar3 + ((int)&local_8 - (int)puVar2 >> 1) * 2);
    }
    puVar3[1] = puVar3[1] + 2;
  } while( true );
}

