// FUN_0055e460 @ 0055e460 body=[[0055e460, 0055e5b3] [0055e5b7, 0055e6d5]]


void FUN_0055e460(undefined4 *param_1)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int local_144 [65];
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  int local_24;
  int *local_20;
  int *local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5ad9c;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  if (DAT_0125e2b0 == (uint *)0x0) {
    ExceptionList = &local_10;
    FUN_0055e410();
  }
  do {
    while( true ) {
      piVar6 = (int *)param_1[7];
      if ((char)piVar6[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar5;
        if (iVar5 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar10 = local_144;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      if (local_144[0] == 0x13) {
        (**(code **)*param_1)(1);
        ExceptionList = local_10;
        return;
      }
      FUN_009a1440(param_1);
      piVar6 = (int *)FUN_00aae9af(0x70);
      local_8 = 0;
      local_20 = piVar6;
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = local_40[0] & 0xffffff00;
        pcVar7 = (char *)(param_1 + 9);
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(param_1 + 9,(int)pcVar7 - ((int)param_1 + 0x25));
        local_8 = CONCAT31(local_8._1_3_,1);
        uVar8 = DAT_0125e2b0[1];
        uVar9 = *DAT_0125e2b0;
        local_14 = local_14 | 1;
        FUN_0044bc60(piVar6);
        local_8 = 2;
        *piVar6 = (int)CCrime::vftable;
        piVar6[0x11] = 0xf;
        piVar6[0x10] = 0;
        *(undefined1 *)(piVar6 + 0xc) = 0;
        FUN_00408ed0(local_40,0,0xffffffff);
        piVar6[0x13] = (int)(uVar8 - uVar9) >> 2;
        piVar6[0x15] = 0x18d;
        piVar6[0x16] = 0;
        piVar6[0x17] = 0;
        piVar6[0x18] = 0;
        *(undefined2 *)(piVar6 + 0x1a) = 0;
        piVar6[0x14] = (int)CAndTrigger::vftable;
        *(undefined1 *)(piVar6 + 0x1b) = 0;
      }
      local_8 = 0xffffffff;
      local_1c[0] = piVar6;
      if ((local_14 & 1) != 0) {
        local_14 = local_14 & 0xfffffffe;
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = local_40[0] & 0xffffff00;
      }
      (**(code **)(*piVar6 + 0xc))(param_1);
      puVar4 = DAT_0125e2b0;
      ppiVar2 = (int **)DAT_0125e2b0[1];
      local_1c[1] = (int *)(DAT_0125e2b0 + 1);
      if ((ppiVar2 <= local_1c) || (ppiVar3 = (int **)*DAT_0125e2b0, local_1c < ppiVar3)) break;
      local_24 = (int)local_1c - (int)ppiVar3 >> 2;
      if (ppiVar2 == (int **)DAT_0125e2b0[2]) {
        uVar8 = (int)ppiVar2 - (int)ppiVar3 >> 2;
        if (0x3ffffffe < uVar8) goto LAB_0055e6b0;
        uVar8 = uVar8 + 1;
        uVar9 = (int)DAT_0125e2b0[2] - (int)ppiVar3 >> 2;
        if (uVar9 < uVar8) {
          if (0x3fffffff - (uVar9 >> 1) < uVar9) {
            uVar9 = 0;
          }
          else {
            uVar9 = uVar9 + (uVar9 >> 1);
          }
          if (uVar9 < uVar8) {
            uVar9 = uVar8;
          }
          FUN_004bf300(uVar9);
        }
      }
      if ((undefined4 *)*local_1c[1] != (undefined4 *)0x0) {
        *(undefined4 *)*local_1c[1] = *(undefined4 *)(*puVar4 + local_24 * 4);
      }
      *local_1c[1] = *local_1c[1] + 4;
    }
    if (ppiVar2 == (int **)DAT_0125e2b0[2]) {
      uVar8 = (int)((int)ppiVar2 - *DAT_0125e2b0) >> 2;
      if (0x3ffffffe < uVar8) {
LAB_0055e6b0:
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar8 = uVar8 + 1;
      uVar9 = (int)((int)DAT_0125e2b0[2] - *DAT_0125e2b0) >> 2;
      if (uVar9 < uVar8) {
        if (0x3fffffff - (uVar9 >> 1) < uVar9) {
          uVar9 = 0;
        }
        else {
          uVar9 = uVar9 + (uVar9 >> 1);
        }
        if (uVar9 < uVar8) {
          uVar9 = uVar8;
        }
        FUN_004bf300(uVar9);
      }
    }
    if ((undefined4 *)*local_1c[1] != (undefined4 *)0x0) {
      *(undefined4 *)*local_1c[1] = piVar6;
    }
    *local_1c[1] = *local_1c[1] + 4;
  } while( true );
}

