// FUN_0081e5b0 @ 0081e5b0  (requested 0081E5B0, first bytes: 55 8B EC 6A FF 68 EE 2C)


/* WARNING: Removing unreachable block (ram,0x0081e9b9) */

void FUN_0081e5b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int **ppiVar10;
  undefined8 uVar11;
  int **local_34;
  int *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52cee;
  local_10 = ExceptionList;
  iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x34) * 4);
  if (*(char *)(iVar6 + 0x67c) == '\0') {
    iVar5 = *(int *)(iVar6 + 0x160) * 1000 + DAT_0131736c;
    iVar8 = *(int *)(iVar6 + 0x168) * 1000 + DAT_0131736c;
    if (iVar8 == 0) {
      iVar8 = -1;
      ExceptionList = &local_10;
    }
    else if ((iVar5 < -0x189373) || (0x20c49a < iVar5)) {
      ExceptionList = &local_10;
      uVar11 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
      iVar8 = __alldiv(uVar11,iVar8,iVar8 >> 0x1f);
    }
    else {
      iVar8 = (iVar5 * 1000) / iVar8;
      ExceptionList = &local_10;
    }
    if (iVar8 < DAT_013173cc) {
      ppiVar10 = (int **)0x0;
      local_34 = (int **)0x0;
      local_8 = 1;
      piVar1 = *(int **)(iVar6 + 0x7b4);
      while (piVar1 != (int *)0x0) {
        piVar2 = (int *)piVar1[2];
        piVar3 = (int *)*piVar1;
        cVar4 = FUN_005cc3e0();
        piVar1 = piVar2;
        if ((((cVar4 == '\0') && (piVar3[0x1d] == 0)) &&
            (cVar4 = (**(code **)(*piVar3 + 0x3c))(), cVar4 != '\0')) &&
           (iVar6 = (**(code **)(*piVar3 + 0x30))(), *(int *)(iVar6 + 0x1ac) < 1)) {
          if ((int *)piVar3[0x51] != (int *)0x0) {
            (**(code **)(*(int *)piVar3[0x51] + 0x104))();
          }
          piVar2 = (int *)piVar3[0xe];
          while (piVar2 != (int *)0x0) {
            local_18[0] = (int *)*piVar2;
            iVar6 = local_18[0][0xe];
            piVar2 = (int *)piVar2[2];
            iVar8 = FUN_0081eab0(param_1,*(undefined4 *)(iVar6 + 0x34),0xffffffff);
            iVar5 = *(int *)(iVar8 + 0x244);
            if (iVar5 + 0x189373U < 0x39580e) {
              iVar5 = (iVar5 * 1000) / 2000;
            }
            else {
              uVar11 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
              iVar5 = __alldiv(uVar11,2000,0);
            }
            if ((*(int *)(iVar6 + 0x244) < iVar5) ||
               ((ppiVar10 = local_34, *(char *)(iVar6 + 0x3e) != '\0' &&
                (*(char *)(iVar8 + 0x3e) == '\0')))) {
              if (local_18 < local_34) {
                if (local_34 == (int **)0x0) {
                  FUN_00a513f0();
                }
                else {
                  *local_34 = *(int **)(((int)local_18 >> 2) * 4);
                }
              }
              else if (local_34 == (int **)0x0) {
                FUN_00a513f0();
              }
              else {
                *local_34 = local_18[0];
              }
              ppiVar10 = local_34 + 1;
              local_34 = ppiVar10;
            }
          }
        }
      }
      if (0 < (int)ppiVar10 >> 2) {
        iVar6 = FUN_00ab047b();
        iVar6 = *(int *)((iVar6 % ((int)ppiVar10 >> 2)) * 4);
        cVar4 = (**(code **)(**(int **)(iVar6 + 0x38) + 0x24))();
        if (cVar4 != '\0') {
          FUN_0081ec90(*(undefined4 *)(*(int *)(iVar6 + 0x38) + 0x34));
          iVar5 = FUN_00aae9af(100);
          local_8._0_1_ = 2;
          if (iVar5 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_005e1000(iVar5,iVar6);
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
          (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))(uVar9);
        }
      }
    }
    else {
      local_18[0] = *(int **)(iVar6 + 0x7b4);
      if (local_18[0] != (int *)0x0) {
        do {
          piVar1 = (int *)*local_18[0];
          local_18[0] = (int *)local_18[0][2];
          cVar4 = FUN_005cc3e0();
          if (((cVar4 == '\0') && (piVar1[0x1d] == 0)) &&
             ((cVar4 = (**(code **)(*piVar1 + 0x3c))(), cVar4 != '\0' &&
              (iVar6 = (**(code **)(*piVar1 + 0x30))(), *(int *)(iVar6 + 0x1ac) < 1)))) {
            piVar1 = (int *)piVar1[0xe];
            while (piVar1 != (int *)0x0) {
              iVar6 = *piVar1;
              iVar5 = *(int *)(iVar6 + 0x38);
              piVar1 = (int *)piVar1[2];
              iVar7 = FUN_0081eab0(param_1,*(undefined4 *)(iVar5 + 0x34),0xffffffff);
              iVar8 = *(int *)(iVar7 + 0x244);
              if (iVar8 + 0x189373U < 0x39580e) {
                iVar8 = (iVar8 * 1000) / 3000;
              }
              else {
                uVar11 = __allmul(iVar8,iVar8 >> 0x1f,1000,0);
                iVar8 = __alldiv(uVar11,3000,0);
              }
              if ((*(int *)(iVar5 + 0x244) < iVar8) ||
                 ((*(char *)(iVar5 + 0x3e) != '\0' && (*(char *)(iVar7 + 0x3e) == '\0')))) {
                iVar5 = FUN_00aae9af(100);
                uVar9 = 0;
                local_8 = 0;
                if (iVar5 != 0) {
                  uVar9 = FUN_005e1000(iVar5,iVar6);
                }
                local_8 = 0xffffffff;
                iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
                (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))(uVar9);
              }
            }
          }
        } while (local_18[0] != (int *)0x0);
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

