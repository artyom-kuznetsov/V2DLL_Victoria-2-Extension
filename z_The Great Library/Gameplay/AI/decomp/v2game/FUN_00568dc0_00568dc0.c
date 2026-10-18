// FUN_00568dc0 @ 00568dc0 body=[[00568dc0, 00568df6] [00568e00, 00568e6d] [00568e77, 00568fe8] [00568fec, 0056900e] [00569010, 005690a7] [005690b0, 005690d6]]


void FUN_00568dc0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iStack_254;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5aba6;
  pvStack_14 = ExceptionList;
  piVar1 = *(int **)(param_2 + 0xb8);
  ExceptionList = &pvStack_14;
  while (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x2d8);
    iVar6 = *piVar1;
    piVar1 = (int *)piVar1[2];
    for (piVar3 = *(int **)(iVar2 + 0x4f8); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      if (*piVar3 == iVar6) {
        if (piVar3 != (int *)0x0) {
          if (*(char *)(iVar2 + 0x504) == '\0') {
            iVar6 = piVar3[1];
            iVar7 = piVar3[2];
            if (iVar6 != 0) {
              *(int *)(iVar6 + 8) = iVar7;
            }
            if (iVar7 != 0) {
              *(int *)(iVar7 + 4) = iVar6;
            }
            if (piVar3 == *(int **)(iVar2 + 0x4f8)) {
              *(int *)(iVar2 + 0x4f8) = iVar7;
            }
            if (piVar3 == *(int **)(iVar2 + 0x4fc)) {
              *(int *)(iVar2 + 0x4fc) = iVar6;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          *(undefined1 *)(piVar3 + 3) = 1;
        }
        break;
      }
    }
    *(undefined1 *)(param_1 + 0x30c) = 1;
  }
  cVar5 = (**(code **)(**(int **)(param_2 + 0x348) + 0x24))();
  if (cVar5 != '\0') {
    *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x34c) + 0x24) + *(int *)(param_1 + 0x2dc)) = 0;
  }
  cVar5 = (**(code **)(**(int **)(param_2 + 0x34c) + 0x24))();
  if (cVar5 != '\0') {
    *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x34c) + 0x24) + *(int *)(param_1 + 0x2dc)) = 1;
  }
  cVar5 = (**(code **)(**(int **)(param_2 + 0x350) + 0x38))();
  if (cVar5 != '\0') {
    *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x350) + 0x4c) + *(int *)(param_1 + 0x2ec)) = 1;
  }
  cVar5 = (**(code **)(**(int **)(param_2 + 0x354) + 0x24))();
  if (cVar5 != '\0') {
    *(undefined1 *)(*(int *)(*(int *)(param_2 + 0x354) + 0x58) + *(int *)(param_1 + 0x2fc)) = 1;
    *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(*(int *)(param_2 + 0x354) + 0x58) * 4) = 1;
  }
  iVar2 = *(int *)(param_2 + 0x330);
  do {
    if (iVar2 == 0) {
      FUN_0056c900(param_1,param_2);
      if (*(int *)(param_2 + 0x284) != 0) {
        piVar1 = *(int **)(*(int *)(param_1 + 0x2d8) + 0x7b4);
        while (piVar1 != (int *)0x0) {
          iVar2 = *piVar1;
          piVar1 = (int *)piVar1[2];
          *(undefined1 *)(iVar2 + 0xbc) = 1;
        }
      }
      ExceptionList = pvStack_14;
      return;
    }
    iVar2 = *(int *)(iVar2 + 8);
    FUN_005690e0();
    uStack_c = 3;
    FUN_005bd930();
    if (iStack_254 < 3) {
      if (DAT_0125fdd8 == 0) {
        iVar6 = FUN_00aae9af();
        uStack_c._0_1_ = 8;
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_008b0060();
        }
        uStack_c = CONCAT31(uStack_c._1_3_,9);
        if ((iVar6 != DAT_0125fdd8) && (DAT_0125fdd8 != 0)) {
          FUN_005c1a70();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_c = CONCAT31(uStack_c._1_3_,3);
        DAT_0125fdd8 = iVar6;
      }
      iVar6 = DAT_0125fdd8;
      iVar7 = 3;
      if (0xc < (int)(*(int *)(DAT_0125fdd8 + 0x10) - *(int *)(DAT_0125fdd8 + 0xc) & 0xfffffffcU)) {
        do {
          iVar4 = *(int *)(*(int *)(iVar6 + 0xc) + iVar7 * 4);
          if (iStack_254 == 1) {
            cVar5 = *(char *)(iVar4 + 0x39);
LAB_0056902e:
            if (cVar5 != '\0') {
              FUN_005bd930();
            }
          }
          else if (iStack_254 == 2) {
            cVar5 = *(char *)(iVar4 + 0x3a);
            goto LAB_0056902e;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc) >> 2);
      }
    }
    uStack_c = 0xffffffff;
    FUN_005694d0();
  } while( true );
}

