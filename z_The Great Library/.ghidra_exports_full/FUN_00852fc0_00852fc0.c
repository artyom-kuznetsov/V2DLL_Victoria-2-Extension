// FUN_00852fc0 @ 00852fc0 body=[[00852fc0, 0085304b] [00853050, 00853259] [00853260, 00853375] [00853380, 008534e3]]


void FUN_00852fc0(int param_1)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  int *piVar6;
  undefined4 uVar7;
  float *pfVar8;
  int iVar9;
  int *in_ECX;
  int iVar10;
  int *piVar11;
  int iVar12;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  int local_10;
  
  if (*(char *)(in_ECX[2] + 0x3c) == '\0') {
    in_ECX[2] = 0;
    return;
  }
  piVar11 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x7b4);
  if ((piVar11 != (int *)0x0) && (in_ECX[4] != 0)) {
    fVar1 = *(float *)(*(int *)(in_ECX[2] + 0x68) + 0x6c);
    local_10 = *(int *)(in_ECX[4] + 0xe8);
    local_20 = 0;
    do {
      if (99 < local_20) break;
      piVar2 = (int *)*piVar11;
      piVar11 = (int *)piVar11[2];
      if (piVar2[0x51] == 0) {
        piVar2[0x51] = param_1;
      }
      else if ((((piVar2[0x51] != in_ECX[2]) && (piVar2[0x37] != 0)) &&
               (cVar5 = (**(code **)(*piVar2 + 0x38))(), cVar5 != '\0')) &&
              (((cVar5 = FUN_005cf180(), cVar5 != '\0' && ((char)piVar2[0x41] == '\0')) &&
               (piVar2[0x1d] == 0)))) {
        cVar5 = (**(code **)(*(int *)piVar2[0x51] + 0xf0))();
        if (cVar5 != '\0') {
          piVar6 = (int *)(**(code **)(*(int *)piVar2[0x51] + 0xf4))();
          cVar5 = (**(code **)(*piVar6 + 0x1e8))();
          if ((cVar5 == '\0') ||
             (iVar12 = (**(code **)(*(int *)piVar2[0x51] + 0xf4))(),
             fVar1 - 1.0 < *(float *)(*(int *)(iVar12 + 0x68) + 0x6c))) goto LAB_0085320f;
        }
        cVar5 = (**(code **)(*(int *)in_ECX[2] + 0x194))(piVar2);
        if ((cVar5 == '\0') &&
           (cVar5 = FUN_0048f070(*(undefined4 *)(piVar2[0x37] + 0xe8),1), cVar5 == '\0')) {
          iVar12 = piVar2[0x37];
          uVar7 = (**(code **)(*piVar2 + 0x2c))();
          uVar4 = DAT_0125870c;
          (&DAT_013f2014)[local_20 * 2] = uVar7;
          FUN_004a0e80(uVar4,&iStack_14);
          fVar3 = (float)iStack_14 / 1000.0;
          (&DAT_013f2010)[local_20 * 2] = fVar3;
          if (((local_10 != 0) && (*(int *)(iVar12 + 0xe8) != 0)) &&
             (*(int *)(iVar12 + 0xe8) != local_10)) {
            cVar5 = FUN_004e0ac0();
            if (cVar5 == '\0') {
              fVar3 = fVar3 + 1e+06;
            }
            else {
              fVar3 = fVar3 + 250000.0;
            }
            (&DAT_013f2010)[local_20 * 2] = fVar3;
          }
          local_20 = local_20 + 1;
        }
      }
LAB_0085320f:
    } while (piVar11 != (int *)0x0);
    local_1c = local_20 + -1;
    if (0 < local_1c) {
      iVar12 = 1;
      pfVar8 = (float *)&DAT_013f2010;
      local_18 = local_1c;
      do {
        if (iVar12 < local_20) {
          iVar10 = iVar12;
          if (3 < local_1c) {
            do {
              fVar1 = *pfVar8;
              if ((float)(&DAT_013f2010)[iVar10 * 2] < fVar1) {
                fVar3 = pfVar8[1];
                pfVar8[1] = (float)(&DAT_013f2014)[iVar10 * 2];
                *pfVar8 = (float)(&DAT_013f2010)[iVar10 * 2];
                (&DAT_013f2014)[iVar10 * 2] = fVar3;
                (&DAT_013f2010)[iVar10 * 2] = fVar1;
              }
              fVar1 = *pfVar8;
              if ((float)(&DAT_013f2018)[iVar10 * 2] < fVar1) {
                fVar3 = pfVar8[1];
                pfVar8[1] = (float)(&DAT_013f201c)[iVar10 * 2];
                *pfVar8 = (float)(&DAT_013f2018)[iVar10 * 2];
                (&DAT_013f201c)[iVar10 * 2] = fVar3;
                (&DAT_013f2018)[iVar10 * 2] = fVar1;
              }
              fVar1 = *pfVar8;
              if ((float)(&DAT_013f2020)[iVar10 * 2] < fVar1) {
                fVar3 = pfVar8[1];
                pfVar8[1] = (float)(&DAT_013f2024)[iVar10 * 2];
                *pfVar8 = (float)(&DAT_013f2020)[iVar10 * 2];
                (&DAT_013f2024)[iVar10 * 2] = fVar3;
                (&DAT_013f2020)[iVar10 * 2] = fVar1;
              }
              fVar1 = *pfVar8;
              if ((float)(&DAT_013f2028)[iVar10 * 2] < fVar1) {
                fVar3 = pfVar8[1];
                pfVar8[1] = (float)(&DAT_013f202c)[iVar10 * 2];
                *pfVar8 = (float)(&DAT_013f2028)[iVar10 * 2];
                (&DAT_013f202c)[iVar10 * 2] = fVar3;
                (&DAT_013f2028)[iVar10 * 2] = fVar1;
              }
              iVar10 = iVar10 + 4;
            } while (iVar10 < local_20 + -3);
          }
          for (; iVar10 < local_20; iVar10 = iVar10 + 1) {
            fVar1 = *pfVar8;
            if ((float)(&DAT_013f2010)[iVar10 * 2] < fVar1) {
              fVar3 = pfVar8[1];
              pfVar8[1] = (float)(&DAT_013f2014)[iVar10 * 2];
              *pfVar8 = (float)(&DAT_013f2010)[iVar10 * 2];
              (&DAT_013f2014)[iVar10 * 2] = fVar3;
              (&DAT_013f2010)[iVar10 * 2] = fVar1;
            }
          }
        }
        local_1c = local_1c + -1;
        iVar12 = iVar12 + 1;
        pfVar8 = pfVar8 + 2;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    iVar12 = 0;
    if (0 < local_20) {
      while( true ) {
        cVar5 = (**(code **)*in_ECX)();
        if (cVar5 != '\0') {
          return;
        }
        if (in_ECX[2] == 0) {
          return;
        }
        iVar10 = (&DAT_013f2014)[iVar12 * 2];
        iVar12 = iVar12 + 1;
        FUN_00401000(0x3f000000);
        iVar9 = FUN_00b31c00();
        for (piVar11 = *(int **)(iVar10 + 0x38); piVar11 != (int *)0x0; piVar11 = (int *)piVar11[2])
        {
          iVar9 = iVar9 + *(int *)(*piVar11 + 0x3c);
        }
        if ((char)((int *)in_ECX[2])[0xf] == '\0') break;
        cVar5 = (**(code **)(*(int *)in_ECX[2] + 0x1a8))(iVar10);
        fVar1 = DAT_00f17898;
        if ((cVar5 != '\0') &&
           (fVar3 = (float)in_ECX[3] - (float)iVar9 / 1000.0, in_ECX[3] = (int)fVar3, fVar3 < fVar1)
           ) {
          (**(code **)(*in_ECX + 8))();
        }
        if (local_20 <= iVar12) {
          return;
        }
      }
      in_ECX[2] = 0;
    }
  }
  return;
}

