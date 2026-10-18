// FUN_00436e50 @ 00436e50 body=[[00436e50, 00436fe5]]


void FUN_00436e50(int param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined8 uVar10;
  int local_11c [66];
  undefined1 local_14 [8];
  undefined8 local_c;
  
  uVar3 = CONCAT44(local_c._4_4_,(undefined4)local_c);
  do {
    while( true ) {
      piVar5 = *(int **)(param_1 + 0x1c);
      local_c = uVar3;
      if ((char)piVar5[0x44] == '\0') {
        iVar4 = (**(code **)(*piVar5 + 4))();
        piVar5[2] = iVar4;
        if (iVar4 == 0) {
          piVar5[3] = 0x13;
        }
        *(undefined1 *)(piVar5 + 0x44) = 1;
      }
      piVar5 = piVar5 + 3;
      piVar9 = local_11c;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar9 = piVar9 + 1;
      }
      if ((local_11c[0] == 4) || (local_11c[0] == 0x13)) {
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        return;
      }
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      piVar5 = (int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if (*piVar5 == 399) {
        uVar10 = FUN_00aaf0d0(*(int *)(param_1 + 0x1c) + 0x10);
      }
      else {
        puVar6 = (undefined8 *)FUN_0098fdd0(piVar5,local_14);
        uVar10 = *puVar6;
      }
      puVar6 = (undefined8 *)param_2[1];
      local_c = uVar10;
      if ((&local_c < puVar6) && (puVar1 = (undefined8 *)*param_2, puVar1 <= &local_c)) break;
      uVar3 = uVar10;
      if (puVar6 == (undefined8 *)param_2[2]) {
        uVar7 = (int)((int)puVar6 - *param_2) >> 3;
        if (0x1ffffffe < uVar7) goto LAB_00436fc6;
        uVar7 = uVar7 + 1;
        uVar8 = (int)((int)param_2[2] - *param_2) >> 3;
        if (uVar8 < uVar7) {
          if (0x1fffffff - (uVar8 >> 1) < uVar8) {
            uVar8 = 0;
          }
          else {
            uVar8 = uVar8 + (uVar8 >> 1);
          }
          if (uVar8 < uVar7) {
            uVar8 = uVar7;
          }
          FUN_004237e0(uVar8);
          uVar3 = local_c;
        }
      }
      local_c._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar2 = (undefined4 *)param_2[1];
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = (int)uVar10;
        puVar2[1] = local_c._4_4_;
      }
      param_2[1] = param_2[1] + 8;
    }
    iVar4 = (int)&local_c - (int)puVar1 >> 3;
    if (puVar6 == (undefined8 *)param_2[2]) {
      uVar7 = (int)puVar6 - (int)puVar1 >> 3;
      if (0x1ffffffe < uVar7) {
LAB_00436fc6:
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar7 = uVar7 + 1;
      uVar8 = (int)param_2[2] - (int)puVar1 >> 3;
      if (uVar8 < uVar7) {
        if (0x1fffffff - (uVar8 >> 1) < uVar8) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 + (uVar8 >> 1);
        }
        if (uVar8 < uVar7) {
          uVar8 = uVar7;
        }
        FUN_004237e0(uVar8);
      }
    }
    puVar2 = (undefined4 *)param_2[1];
    if (puVar2 != (undefined4 *)0x0) {
      uVar7 = *param_2;
      *puVar2 = *(undefined4 *)(uVar7 + iVar4 * 8);
      puVar2[1] = *(undefined4 *)(uVar7 + 4 + iVar4 * 8);
    }
    param_2[1] = param_2[1] + 8;
    uVar3 = local_c;
  } while( true );
}

