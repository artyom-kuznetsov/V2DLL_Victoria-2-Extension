// FUN_008534f0 @ 008534f0 body=[[008534f0, 00853569] [00853570, 008537b9] [008537c0, 008537d8] [008537e0, 00853b22]]


void FUN_008534f0(int *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 *in_ECX;
  int iVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  float local_18;
  float local_14;
  int *local_10;
  undefined4 *local_c;
  int local_8;
  
  if (*(char *)(in_ECX[2] + 0x3c) == '\0') {
    in_ECX[2] = 0;
    return;
  }
  piVar3 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4) + 0x7b4);
  if ((piVar3 != (int *)0x0) && (in_ECX[4] != 0)) {
    local_14 = *(float *)(*(int *)(in_ECX[2] + 0x68) + 0x6c) - 1.0;
    local_8 = 0;
    local_c = in_ECX;
    do {
      if (99 < local_8) break;
      local_10 = (int *)piVar3[2];
      piVar3 = (int *)*piVar3;
      if (piVar3[0x51] == 0) {
        piVar3[0x51] = (int)param_1;
        puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x1b4))();
        for (piVar5 = (int *)*puVar4; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
          if ((int *)*piVar5 == piVar3) goto LAB_00853790;
        }
        puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x1b4))();
        iVar10 = puVar4[1];
        piVar5 = (int *)FUN_00aae9af(0x10);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = (int)piVar3;
          piVar5[1] = iVar10;
          piVar5[2] = 0;
          *(undefined1 *)(piVar5 + 3) = 0;
        }
        iVar9 = puVar4[2];
        puVar4[1] = piVar5;
        puVar4[2] = iVar9 + 1;
        if (iVar9 == 0) {
          *puVar4 = piVar5;
        }
        else {
          *(int **)(iVar10 + 8) = piVar5;
        }
      }
      else if ((((piVar3[0x51] != local_c[2]) &&
                (cVar2 = (**(code **)(*piVar3 + 0x3c))(), cVar2 != '\0')) &&
               (cVar2 = FUN_005cf180(), cVar2 != '\0')) &&
              (iVar10 = (**(code **)(*piVar3 + 0x30))(), puVar4 = local_c,
              *(int *)(iVar10 + 0x1ac) < 1)) {
        if (0 < (int)local_c[5]) {
          (**(code **)(*piVar3 + 0x30))();
          iVar10 = FUN_005d05f0();
          if (iVar10 < 1) goto LAB_00853790;
        }
        cVar2 = (**(code **)(*(int *)piVar3[0x51] + 0xf0))();
        if (cVar2 != '\0') {
          piVar5 = (int *)(**(code **)(*(int *)piVar3[0x51] + 0xf4))();
          cVar2 = (**(code **)(*piVar5 + 0x1e8))();
          if ((cVar2 == '\0') ||
             (iVar10 = (**(code **)(*(int *)piVar3[0x51] + 0xf4))(),
             local_14 < *(float *)(*(int *)(iVar10 + 0x68) + 0x6c))) goto LAB_00853790;
        }
        cVar2 = (**(code **)(*(int *)puVar4[2] + 0x194))(piVar3);
        if (cVar2 == '\0') {
          iVar10 = piVar3[0x37];
          uVar6 = (**(code **)(*piVar3 + 0x30))();
          (&DAT_013f1cf4)[local_8 * 2] = uVar6;
          FUN_004a0e80(DAT_0125870c,&local_18);
          (&DAT_013f1cf0)[local_8 * 2] = (float)(int)local_18 / 1000.0;
          if ((*(int *)(iVar10 + 0x158) != 0) &&
             (cVar2 = (**(code **)(*(int *)piVar3[0x51] + 0xf0))(), cVar2 != '\0')) {
            (&DAT_013f1cf0)[local_8 * 2] = (float)(&DAT_013f1cf0)[local_8 * 2] + 250000.0;
          }
          local_8 = local_8 + 1;
        }
      }
LAB_00853790:
      piVar3 = local_10;
    } while (local_10 != (int *)0x0);
    param_1 = (int *)(local_8 + -1);
    if (0 < (int)param_1) {
      iVar10 = 1;
      pfVar7 = (float *)&DAT_013f1cf0;
      local_10 = param_1;
      do {
        if (iVar10 < local_8) {
          iVar9 = iVar10;
          if (3 < (int)param_1) {
            do {
              fVar11 = *pfVar7;
              if ((float)(&DAT_013f1cf0)[iVar9 * 2] < fVar11) {
                fVar1 = pfVar7[1];
                pfVar7[1] = (float)(&DAT_013f1cf4)[iVar9 * 2];
                *pfVar7 = (float)(&DAT_013f1cf0)[iVar9 * 2];
                (&DAT_013f1cf4)[iVar9 * 2] = fVar1;
                (&DAT_013f1cf0)[iVar9 * 2] = fVar11;
              }
              fVar11 = *pfVar7;
              if ((float)(&DAT_013f1cf8)[iVar9 * 2] < fVar11) {
                fVar1 = pfVar7[1];
                pfVar7[1] = (float)(&DAT_013f1cfc)[iVar9 * 2];
                *pfVar7 = (float)(&DAT_013f1cf8)[iVar9 * 2];
                (&DAT_013f1cfc)[iVar9 * 2] = fVar1;
                (&DAT_013f1cf8)[iVar9 * 2] = fVar11;
              }
              fVar11 = *pfVar7;
              if ((float)(&DAT_013f1d00)[iVar9 * 2] < fVar11) {
                fVar1 = pfVar7[1];
                pfVar7[1] = (float)(&DAT_013f1d04)[iVar9 * 2];
                *pfVar7 = (float)(&DAT_013f1d00)[iVar9 * 2];
                (&DAT_013f1d04)[iVar9 * 2] = fVar1;
                (&DAT_013f1d00)[iVar9 * 2] = fVar11;
              }
              fVar11 = *pfVar7;
              if ((float)(&DAT_013f1d08)[iVar9 * 2] < fVar11) {
                fVar1 = pfVar7[1];
                pfVar7[1] = (float)(&DAT_013f1d0c)[iVar9 * 2];
                *pfVar7 = (float)(&DAT_013f1d08)[iVar9 * 2];
                (&DAT_013f1d0c)[iVar9 * 2] = fVar1;
                (&DAT_013f1d08)[iVar9 * 2] = fVar11;
              }
              iVar9 = iVar9 + 4;
            } while (iVar9 < local_8 + -3);
          }
          for (; iVar9 < local_8; iVar9 = iVar9 + 1) {
            fVar11 = *pfVar7;
            if ((float)(&DAT_013f1cf0)[iVar9 * 2] < fVar11) {
              fVar1 = pfVar7[1];
              pfVar7[1] = (float)(&DAT_013f1cf4)[iVar9 * 2];
              *pfVar7 = (float)(&DAT_013f1cf0)[iVar9 * 2];
              (&DAT_013f1cf4)[iVar9 * 2] = fVar1;
              (&DAT_013f1cf0)[iVar9 * 2] = fVar11;
            }
          }
        }
        param_1 = (int *)((int)param_1 + -1);
        iVar10 = iVar10 + 1;
        pfVar7 = pfVar7 + 2;
        local_10 = (int *)((int)local_10 + -1);
      } while (local_10 != (int *)0x0);
    }
    fVar11 = 0.0;
    if (0 < local_8) {
      while( true ) {
        puVar4 = local_c;
        cVar2 = (**(code **)*local_c)();
        if (cVar2 != '\0') {
          return;
        }
        if ((int *)puVar4[2] == (int *)0x0) {
          return;
        }
        local_10 = (int *)(&DAT_013f1cf4)[(int)fVar11 * 2];
        local_14 = (float)((int)fVar11 + 1);
        puVar8 = (undefined4 *)(**(code **)(*(int *)puVar4[2] + 0x1b4))();
        FUN_00401000(0x3f000000);
        iVar9 = FUN_00b31c00();
        puVar4 = local_c;
        piVar3 = (int *)*puVar8;
        iVar10 = iVar9;
        while (piVar3 != (int *)0x0) {
          iVar12 = *piVar3;
          piVar3 = (int *)piVar3[2];
          piVar5 = *(int **)(iVar12 + 0x38);
          iVar12 = iVar9;
          for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
            iVar12 = iVar12 + *(int *)(*piVar5 + 0x3c);
          }
          iVar10 = iVar10 + iVar12;
        }
        local_18 = (float)iVar10 / 1000.0;
        if ((char)((int *)local_c[2])[0xf] == '\0') break;
        cVar2 = (**(code **)(*(int *)local_c[2] + 0x1b8))(local_10);
        if (cVar2 != '\0') {
          puVar8 = (undefined4 *)(**(code **)(*(int *)puVar4[2] + 0x1b4))();
          piVar3 = (int *)*puVar8;
          iVar10 = iVar9;
          while (piVar3 != (int *)0x0) {
            iVar12 = *piVar3;
            piVar3 = (int *)piVar3[2];
            piVar5 = *(int **)(iVar12 + 0x38);
            iVar12 = iVar9;
            for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
              iVar12 = iVar12 + *(int *)(*piVar5 + 0x3c);
            }
            iVar10 = iVar10 + iVar12;
          }
          fVar11 = (float)puVar4[3] - ((float)iVar10 / 1000.0 - local_18);
          puVar4[3] = fVar11;
          if (fVar11 < 0.9) {
            puVar4[3] = 0;
          }
          iVar10 = (int)((ulonglong)((longlong)*(int *)(local_10[0x29] + 600) * -0x10624dd3) >> 0x20
                        );
          piVar3 = puVar4 + 5;
          *piVar3 = *piVar3 + ((iVar10 >> 6) - (iVar10 >> 0x1f));
          if (*piVar3 < 0) {
            puVar4[5] = 0;
          }
        }
        fVar11 = local_14;
        if (local_8 <= (int)local_14) {
          return;
        }
      }
      local_c[2] = 0;
    }
  }
  return;
}

