// FUN_004f5a50 @ 004f5a50 body=[[004f5a50, 004f5bdb]]


void FUN_004f5a50(int param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int local_114 [66];
  undefined8 local_c;
  
  do {
    while( true ) {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar3 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar3;
        if (iVar3 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar8 = local_114;
      for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      }
      if ((local_114[0] == 4) || (local_114[0] == 0x13)) {
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        return;
      }
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      puVar7 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
      puVar9 = (undefined4 *)(param_1 + 0x228);
      for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      local_c = 0;
      FUN_009a1d40();
      puVar1 = (undefined8 *)param_2[1];
      if ((&local_c < puVar1) && (puVar2 = (undefined8 *)*param_2, puVar2 <= &local_c)) break;
      if (puVar1 == (undefined8 *)param_2[2]) {
        uVar4 = (int)((int)puVar1 - *param_2) >> 3;
        if (0x1ffffffe < uVar4) goto LAB_004f5bbc;
        uVar4 = uVar4 + 1;
        uVar5 = (int)((int)param_2[2] - *param_2) >> 3;
        if (uVar5 < uVar4) {
          if (0x1fffffff - (uVar5 >> 1) < uVar5) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar5 + (uVar5 >> 1);
          }
          if (uVar5 < uVar4) {
            uVar5 = uVar4;
          }
          FUN_004237e0(uVar5);
        }
      }
      puVar7 = (undefined4 *)param_2[1];
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = (undefined4)local_c;
        puVar7[1] = local_c._4_4_;
      }
      param_2[1] = param_2[1] + 8;
    }
    iVar3 = (int)&local_c - (int)puVar2 >> 3;
    if (puVar1 == (undefined8 *)param_2[2]) {
      uVar4 = (int)puVar1 - (int)puVar2 >> 3;
      if (0x1ffffffe < uVar4) {
LAB_004f5bbc:
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar4 = uVar4 + 1;
      uVar5 = (int)param_2[2] - (int)puVar2 >> 3;
      if (uVar5 < uVar4) {
        if (0x1fffffff - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (uVar5 < uVar4) {
          uVar5 = uVar4;
        }
        FUN_004237e0(uVar5);
      }
    }
    puVar7 = (undefined4 *)param_2[1];
    if (puVar7 != (undefined4 *)0x0) {
      uVar4 = *param_2;
      *puVar7 = *(undefined4 *)(uVar4 + iVar3 * 8);
      puVar7[1] = *(undefined4 *)(uVar4 + 4 + iVar3 * 8);
    }
    param_2[1] = param_2[1] + 8;
  } while( true );
}

