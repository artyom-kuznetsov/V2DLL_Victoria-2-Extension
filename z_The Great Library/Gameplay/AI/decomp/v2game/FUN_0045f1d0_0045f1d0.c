// FUN_0045f1d0 @ 0045f1d0 body=[[0045f1d0, 0045f2e2] [0045f2eb, 0045f823] [0045f82c, 0045f89e]]


void FUN_0045f1d0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_664 [12];
  undefined4 uStack_658;
  undefined1 *puStack_654;
  char *pcStack_650;
  uint *puStack_64c;
  int *piStack_638;
  int local_634;
  uint uStack_630;
  undefined1 uStack_62c;
  undefined4 uStack_620;
  uint uStack_61c;
  undefined4 uStack_618;
  undefined1 local_610 [132];
  int iStack_58c;
  int iStack_588;
  int **ppiStack_574;
  int **ppiStack_570;
  int **ppiStack_56c;
  undefined1 auStack_55c [28];
  int aiStack_540 [66];
  int aiStack_438 [66];
  int aiStack_330 [66];
  int aiStack_228 [66];
  int aiStack_120 [67];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5be24;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_2 == 0xa39) {
    while( true ) {
      local_c = 0xffffffff;
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        puStack_64c = (uint *)0x45f21e;
        iVar2 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar2;
        if (iVar2 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar7 = aiStack_540;
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      if ((aiStack_540[0] == 4) || (aiStack_540[0] == 0x13)) break;
      puStack_64c = (uint *)param_1;
      pcStack_650 = (char *)0x45f263;
      FUN_009a1440();
      pcStack_650 = (char *)(param_1 + 0x24);
      uStack_61c = 0xf;
      uStack_620 = 0;
      uStack_630 = uStack_630 & 0xffffff00;
      pcVar3 = pcStack_650;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      puStack_64c = (uint *)((int)pcVar3 - (param_1 + 0x25));
      puStack_654 = (undefined1 *)0x45f294;
      FUN_00409350();
      puStack_64c = (uint *)(param_1 + 0x22c);
      local_c = 0;
      pcStack_650 = (char *)0x45f2ab;
      uVar4 = FUN_00aaf0c5();
      puStack_64c = &uStack_630;
      pcStack_650 = (char *)0x45f2c1;
      puVar5 = (undefined4 *)FUN_00a45090();
      *puVar5 = uVar4;
      local_c = 0xffffffff;
      if (0xf < uStack_61c) {
        puStack_64c = (uint *)uStack_630;
                    /* WARNING: Subroutine does not return */
        pcStack_650 = &UNK_0045f2e3;
        FUN_00aae91b();
      }
    }
    puStack_64c = (uint *)0x45f2f5;
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    ExceptionList = local_14;
    return;
  }
  if (param_2 == 0x9d7) {
    puStack_64c = (uint *)local_610;
    pcStack_650 = (char *)0x45f321;
    ExceptionList = &local_14;
    FUN_0045d730();
    local_c = 1;
    while( true ) {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        puStack_64c = (uint *)0x45f345;
        iVar2 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar2;
        if (iVar2 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar7 = aiStack_438;
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      if ((aiStack_438[0] == 4) || (aiStack_438[0] == 0x13)) break;
      puStack_64c = (uint *)param_1;
      pcStack_650 = (char *)0x45f38a;
      FUN_009a1440();
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 < 0x9d7) {
        if (iVar2 == 0x9d6) {
          pcStack_650 = (char *)(param_1 + 0x22c);
          pcVar3 = pcStack_650;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          puStack_64c = (uint *)((int)pcVar3 - (param_1 + 0x22d));
          puStack_654 = (undefined1 *)0x45f5e8;
          FUN_00409350();
        }
        else if (iVar2 == 0x1a) {
          pcStack_650 = (char *)(param_1 + 0x22c);
          pcVar3 = pcStack_650;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          puStack_64c = (uint *)((int)pcVar3 - (param_1 + 0x22d));
          puStack_654 = (undefined1 *)0x45f5c4;
          FUN_00409350();
        }
        else if (iVar2 == 0x3b6) {
          puStack_64c = (uint *)param_1;
          pcStack_650 = (char *)0x45f599;
          FUN_009a2a90();
        }
        else if (iVar2 == 0x9d2) {
          puStack_64c = (uint *)0x0;
          pcStack_650 = "";
          uStack_630 = 3;
          uStack_618 = 0xf;
          uStack_61c = 0;
          uStack_62c = 0;
          puStack_654 = (undefined1 *)0x45f3ea;
          FUN_00409350();
          local_c = CONCAT31(local_c._1_3_,2);
          while( true ) {
            piVar6 = *(int **)(param_1 + 0x1c);
            if ((char)piVar6[0x44] == '\0') {
              puStack_64c = (uint *)0x45f407;
              iVar2 = (**(code **)(*piVar6 + 4))();
              piVar6[2] = iVar2;
              if (iVar2 == 0) {
                piVar6[3] = 0x13;
              }
              *(undefined1 *)(piVar6 + 0x44) = 1;
            }
            piVar6 = piVar6 + 3;
            piVar7 = aiStack_228;
            for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            if ((aiStack_228[0] == 4) || (aiStack_228[0] == 0x13)) break;
            puStack_64c = (uint *)param_1;
            pcStack_650 = (char *)0x45f44c;
            FUN_009a1440();
            if (*(int *)(param_1 + 0x20) == 0x2e) {
              piStack_638 = (int *)auStack_664;
              pcStack_650 = (char *)0xf;
              puStack_654 = (undefined1 *)0x0;
              auStack_664[0] = 0;
              pcVar3 = (char *)(param_1 + 0x22c);
              do {
                cVar1 = *pcVar3;
                pcVar3 = pcVar3 + 1;
              } while (cVar1 != '\0');
              FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
              uStack_630 = FUN_00457690();
            }
            else if (*(int *)(param_1 + 0x20) == 0x9d6) {
              pcStack_650 = (char *)(param_1 + 0x22c);
              pcVar3 = pcStack_650;
              do {
                cVar1 = *pcVar3;
                pcVar3 = pcVar3 + 1;
              } while (cVar1 != '\0');
              puStack_64c = (uint *)((int)pcVar3 - (param_1 + 0x22d));
              puStack_654 = (undefined1 *)0x45f47a;
              FUN_00409350();
            }
          }
          puStack_64c = (uint *)0x45f4cf;
          (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
          if (uStack_630 == 3) {
            puStack_64c = (uint *)0x45f518;
            FUN_009885d0();
            puStack_64c = (uint *)0x10004;
            pcStack_650 = (char *)0x22d;
            local_c._0_1_ = 3;
            uStack_658 = 0x45f539;
            puStack_654 = auStack_55c;
            FUN_004015b0();
            local_c._0_1_ = 4;
            puStack_64c = (uint *)0x45f550;
            puStack_64c = (uint *)FUN_00987d20();
            pcStack_650 = (char *)0x45f556;
            FUN_00401280();
            local_c._0_1_ = 3;
            puStack_64c = (uint *)0x45f56d;
            FUN_00401650();
            puStack_64c = (uint *)0x45f579;
            FUN_00408ad0();
            local_c = CONCAT31(local_c._1_3_,1);
            puStack_64c = (uint *)0x45f58a;
            FUN_00a322f0();
          }
          else {
            puStack_64c = (uint *)0x45f4ea;
            FUN_00a36520();
            iStack_58c = iStack_58c + 1;
            local_c = CONCAT31(local_c._1_3_,1);
            puStack_64c = (uint *)0x45f502;
            FUN_00a322f0();
          }
        }
      }
      else if (iVar2 == 0x9e1) {
        while( true ) {
          piVar6 = *(int **)(param_1 + 0x1c);
          if ((char)piVar6[0x44] == '\0') {
            puStack_64c = (uint *)0x45f765;
            iVar2 = (**(code **)(*piVar6 + 4))();
            piVar6[2] = iVar2;
            if (iVar2 == 0) {
              piVar6[3] = 0x13;
            }
            *(undefined1 *)(piVar6 + 0x44) = 1;
          }
          piVar6 = piVar6 + 3;
          piVar7 = aiStack_120;
          for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
          puStack_64c = (uint *)param_1;
          pcStack_650 = (char *)0x45f7aa;
          FUN_009a1440();
          pcStack_650 = (char *)(param_1 + 0x24);
          uStack_61c = 0xf;
          uStack_620 = 0;
          uStack_630 = uStack_630 & 0xffffff00;
          pcVar3 = pcStack_650;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          puStack_64c = (uint *)((int)pcVar3 - (param_1 + 0x25));
          puStack_654 = (undefined1 *)0x45f7db;
          FUN_00409350();
          puStack_64c = (uint *)(param_1 + 0x22c);
          local_c._0_1_ = 5;
          pcStack_650 = (char *)0x45f7ef;
          uVar4 = FUN_00aaf0c5();
          puStack_64c = &uStack_630;
          pcStack_650 = (char *)0x45f805;
          puVar5 = (undefined4 *)FUN_00a45090();
          *puVar5 = uVar4;
          local_c = CONCAT31(local_c._1_3_,1);
          if (0xf < uStack_61c) {
            puStack_64c = (uint *)uStack_630;
                    /* WARNING: Subroutine does not return */
            pcStack_650 = &UNK_0045f824;
            FUN_00aae91b();
          }
        }
        puStack_64c = (uint *)0x45f836;
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      }
      else if (iVar2 == 0x9ed) {
        while( true ) {
          piVar6 = *(int **)(param_1 + 0x1c);
          if ((char)piVar6[0x44] == '\0') {
            puStack_64c = (uint *)0x45f618;
            iVar2 = (**(code **)(*piVar6 + 4))();
            piVar6[2] = iVar2;
            if (iVar2 == 0) {
              piVar6[3] = 0x13;
            }
            *(undefined1 *)(piVar6 + 0x44) = 1;
          }
          piVar6 = piVar6 + 3;
          piVar7 = aiStack_330;
          for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          if ((aiStack_330[0] == 4) || (aiStack_330[0] == 0x13)) break;
          puStack_64c = (uint *)param_1;
          pcStack_650 = (char *)0x45f65d;
          FUN_009a1440();
          if (*(int *)(param_1 + 0x20) == 0x9b8) {
            puStack_64c = (uint *)0x34;
            pcStack_650 = (char *)0x45f66d;
            piVar6 = (int *)FUN_00aae9af();
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              *piVar6 = (int)CNewsCasePicture::vftable;
              piVar6[1] = 0x18d;
              piVar6[3] = 0x18d;
              piVar6[4] = 0;
              piVar6[5] = 0;
              piVar6[6] = 0;
              *(undefined2 *)(piVar6 + 8) = 0;
              piVar6[2] = (int)CAndTrigger::vftable;
              piVar6[9] = 0;
              piVar6[10] = 0;
              piVar6[0xb] = 0;
            }
            puStack_64c = (uint *)param_1;
            pcStack_650 = (char *)0x45f6b8;
            piStack_638 = piVar6;
            (**(code **)(*piVar6 + 0xc))();
            if ((&piStack_638 < ppiStack_570) && (ppiStack_574 <= &piStack_638)) {
              iVar2 = (int)&piStack_638 - (int)ppiStack_574;
              if (ppiStack_570 == ppiStack_56c) {
                puStack_64c = (uint *)0x45f6f0;
                FUN_00a513f0();
              }
              if (ppiStack_570 != (int **)0x0) {
                *ppiStack_570 = ppiStack_574[iVar2 >> 2];
              }
            }
            else {
              if (ppiStack_570 == ppiStack_56c) {
                puStack_64c = (uint *)0x45f71e;
                FUN_00a513f0();
              }
              if (ppiStack_570 != (int **)0x0) {
                *ppiStack_570 = piVar6;
              }
            }
            ppiStack_570 = ppiStack_570 + 1;
          }
        }
        puStack_64c = (uint *)0x45f74b;
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      }
    }
    puStack_64c = (uint *)0x45f845;
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    iStack_588 = (*(int *)(local_634 + 0xc) - *(int *)(local_634 + 8)) / 0xac;
    puStack_64c = (uint *)0x45f873;
    FUN_00462fc0();
    puStack_64c = (uint *)local_610;
    local_c = 0xffffffff;
    pcStack_650 = (char *)0x45f888;
    FUN_0045f8a0();
  }
  ExceptionList = local_14;
  return;
}

