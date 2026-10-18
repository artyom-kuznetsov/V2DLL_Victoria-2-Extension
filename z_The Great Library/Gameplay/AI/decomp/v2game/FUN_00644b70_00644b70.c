// FUN_00644b70 @ 00644b70 body=[[00644b70, 00644de9] [00644df0, 00644e69] [00644e70, 00645084] [006450a3, 006450eb] [0064510a, 0064516a] [00645187, 006451af]]


void FUN_00644b70(int param_1,int param_2,float *param_3)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *in_ECX;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  float10 fVar15;
  int *piStack_8c;
  float local_7c;
  int iStack_6c;
  char *pcStack_68;
  undefined1 auStack_64 [4];
  int iStack_60;
  undefined1 auStack_5c [4];
  int iStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined **appuStack_48 [3];
  undefined1 auStack_3c [12];
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b45613;
  pvStack_14 = ExceptionList;
  iVar13 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)(*(int *)(param_2 + 8) + 0xb4) * 4);
  local_7c = 0.0;
  ExceptionList = &pvStack_14;
  uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x20b4) + 0x1c) + 0x16c))();
  pfVar5 = (float *)(**(code **)(*(int *)(*(int *)(param_1 + 0x20b4) + 0x1c) + 0x174))();
  fStack_54 = ((*param_3 * 2.0) / (float)*(int *)(*(int *)(param_1 + 0x20b4) + 8) - 1.0) / *pfVar5;
  piVar8 = *(int **)(*(int *)(param_2 + 0x10) + 0xdc);
  fStack_50 = -(((param_3[1] * 2.0) / (float)*(int *)(*(int *)(param_1 + 0x20b4) + 0xc) - 1.0) /
               pfVar5[5]);
  piStack_8c = (int *)0x0;
  uStack_4c = DAT_00f092fc;
  if (in_ECX[2] == 1) {
    piVar7 = *(int **)*in_ECX;
    iVar6 = (**(code **)(*piVar7 + 4))();
    if ((((iVar6 == 0) || (iVar6 = (**(code **)(*piVar7 + 4))(), iVar6 == 1)) ||
        (iVar6 = (**(code **)(*piVar7 + 4))(), iVar6 == 2)) &&
       ((piStack_8c = piVar7, (int *)piVar7[0x43] != (int *)0x0 &&
        (fVar15 = (float10)(**(code **)(*(int *)piVar7[0x43] + 0x50))
                                     (*param_3,param_3[1],uVar4,CONCAT44(fStack_50,fStack_54),
                                      uStack_4c,auStack_3c,
                                      *(undefined1 *)(*(int *)(param_1 + 0x20b4) + 0x304)),
        (float)fVar15 <= 0.0)))) {
      piStack_8c = (int *)0x0;
    }
  }
  piStack_30 = (int *)0x0;
  piVar7 = (int *)FUN_00aae9af(8);
  if (piVar7 == (int *)0x0) {
    pcStack_68 = (char *)0x0;
    std::exception::exception((exception *)appuStack_48,&pcStack_68);
    appuStack_48[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(appuStack_48,&DAT_00e6fb20);
  }
  *piVar7 = 0;
  piVar7[1] = 0;
  *piVar7 = (int)&piStack_30;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  iStack_c = 0;
  bVar2 = false;
  piStack_30 = piVar7;
  while ((piVar8 != (int *)0x0 && (!bVar2))) {
    fVar15 = (float10)(**(code **)(*piVar8 + 0x50))
                                (*param_3,param_3[1],uVar4,fStack_54,fStack_50,uStack_4c,auStack_3c,
                                 *(undefined1 *)(*(int *)(param_1 + 0x20b4) + 0x304));
    fVar1 = (float)fVar15;
    bVar2 = false;
    if (local_7c < fVar1) {
      piVar7 = *(int **)(iVar13 + 0xfc);
      while (piVar7 != (int *)0x0) {
        iVar6 = *piVar7;
        piVar7 = (int *)piVar7[2];
        iStack_6c = iVar6;
        if (0 < *(int *)(iVar6 + 0x18c)) {
          if (piStack_8c == (int *)0x0) {
            if ((*(int **)(iVar6 + 0x10c) == piVar8) &&
               (cVar3 = (**(code **)(*piVar8 + 0x3c))(), cVar3 != '\0')) {
              local_7c = fVar1;
            }
          }
          else if (((piStack_8c[0x37] == *(int *)(iVar6 + 0xdc)) &&
                   (((**(code **)(*(int *)piStack_8c[0x42] + 0x58))(auStack_64),
                    piStack_8c[0x31] == iStack_60 ||
                    (cVar3 = FUN_005cc2e0(auStack_64,0), cVar3 != '\0')))) &&
                  (((**(code **)(**(int **)(iVar6 + 0x108) + 0x58))(auStack_5c),
                   *(int *)(iVar6 + 0xc4) == iStack_58 ||
                   (cVar3 = FUN_005cc2e0(auStack_5c,0), cVar3 != '\0')))) {
            FUN_00868340(&iStack_6c);
            (**(code **)(*piVar8 + 0x3c))();
            bVar2 = true;
          }
        }
      }
      if (((piStack_8c == (int *)0x0) && (cVar3 = (**(code **)(*piVar8 + 0x3c))(), cVar3 != '\0'))
         && (cVar3 = FUN_004b6de0(iVar13), cVar3 == '\0')) {
        puVar12 = *(undefined4 **)(param_2 + 0x54);
        iVar6 = *(int *)(param_2 + 0x58) - (int)puVar12 >> 2;
        iVar10 = 0;
        if (0 < iVar6) {
          do {
            if ((int *)*puVar12 == piVar8) {
              local_7c = fVar1;
              if (DAT_0125ce80 == 0) {
                iStack_6c = FUN_00aae9af(0x3c);
                iStack_c._0_1_ = 1;
                if (iStack_6c == 0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = FUN_004dada0();
                }
                iStack_c = (uint)iStack_c._1_3_ << 8;
                FUN_004dc340(uVar9);
              }
              break;
            }
            iVar10 = iVar10 + 1;
            puVar12 = puVar12 + 1;
          } while (iVar10 < iVar6);
        }
        iVar6 = FUN_00642020(piVar8);
        if (iVar6 != 0) goto LAB_00645072;
      }
    }
    piVar8 = (int *)piVar8[0x36];
  }
  if (piStack_8c == (int *)0x0) {
LAB_00645072:
    FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piStack_30);
  }
  uVar14 = 0;
  if (uStack_20 != 0) {
    do {
      uVar11 = uVar14;
      FUN_0099e240(uVar14);
      piVar8 = (int *)FUN_00868600(uVar11);
      if ((int *)*piVar8 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)*piVar8;
      }
      uVar11 = (uint)piVar8[2] >> 2;
      if (*(uint *)(iVar13 + 8) <= uVar11) {
        uVar11 = uVar11 - *(uint *)(iVar13 + 8);
      }
      if (*(int **)(*(int *)(*(int *)(iVar13 + 4) + uVar11 * 4) + (piVar8[2] & 3U) * 4) ==
          piStack_8c) {
        if (uVar14 != 0xffffffff) {
          uVar14 = (uVar14 + 1) % uStack_20;
          FUN_0099e240(uVar14);
          FUN_00868600(uVar14);
          FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(piStack_30);
        }
        break;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uStack_20);
  }
  FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piStack_30);
}

