// FUN_0072f1e0 @ 0072f1e0 body=[[0072f1e0, 0072fa00]]


/* WARNING: Removing unreachable block (ram,0x0072f5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072f1e0(void)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  bool bVar6;
  double dVar7;
  undefined4 uStack_64;
  undefined4 uStack_2c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar1 = DAT_012588e8;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b8a60b;
  local_14 = ExceptionList;
  piVar2 = *(int **)(DAT_012588e8 + 0xb24);
  ExceptionList = &local_14;
  iVar4 = FUN_0068b500();
  if (*(int *)(iVar4 + 0x1c) != -1) {
    *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(in_ECX + 0x3c);
    iVar4 = (**(code **)(*piVar2 + 0x44))();
    if (*(char *)(iVar4 + 0x34) != '\0') {
      iVar1 = (*(int *)(iVar1 + 0xb0c) + -43800000) / 0x18;
      dVar7 = (double)iVar1 / 365.0;
      iVar1 = (iVar1 - (int)((float)(int)dVar7 * 365.0)) + (int)dVar7 * 0x16d;
      iVar4 = (*(int *)(in_ECX + 0x3c) + -43800000) / 0x18;
      fVar3 = (float)iVar4 / 365.0;
      iVar4 = iVar1 - ((int)fVar3 * 0x16d + (iVar4 - (int)((float)(int)fVar3 * 365.0)));
      if (iVar4 < 0xb) {
        if (iVar4 < 6) {
          ExceptionList = local_14;
          return;
        }
        if ((_DAT_013f303c & 2) == 0) {
          _DAT_013f303c = _DAT_013f303c | 2;
          DAT_013f3034 = iVar1;
          ExceptionList = local_14;
          return;
        }
        if (DAT_013f3034 == iVar1) {
          ExceptionList = local_14;
          return;
        }
        (**(code **)(*piVar2 + 0x168))();
        FUN_0068b610();
        FUN_0064a460();
        uStack_c._0_1_ = 0x1d;
        uStack_c._1_3_ = 0;
        iVar4 = FUN_00aae9af();
        uStack_c._0_1_ = 0x1e;
        if (iVar4 == 0) {
          bVar6 = false;
        }
        else {
          iVar5 = FUN_00aae9af();
          uStack_c._0_1_ = 0x1f;
          bVar6 = iVar5 != 0;
          if (bVar6) {
            FUN_009885d0();
            uStack_c = CONCAT31(uStack_c._1_3_,0x20);
            FUN_009885d0();
            uStack_c = 0x21;
            FUN_009885d0();
            uStack_c = 0x22;
            FUN_00988f20();
            uStack_c = 0x23;
            FUN_00988f20();
            uStack_c = 0x24;
            FUN_00988f20();
            uStack_c = 0x25;
            FUN_0042c180();
            uStack_c = 0x26;
            FUN_0055dd40();
            uStack_c = 0x27;
            FUN_009f3290(iVar5,uStack_2c);
          }
          uStack_c = 0x2f;
          (**(code **)(*piVar2 + 0x44))();
          FUN_009c16d0();
          FUN_009f4240(iVar4);
        }
        uStack_c = 0x37;
        iVar4 = (**(code **)(*piVar2 + 0x44))();
        (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))();
        if (bVar6) {
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
        }
        DAT_013f3034 = iVar1;
        FUN_004097a0();
      }
      else {
        if ((_DAT_013f303c & 1) == 0) {
          _DAT_013f303c = _DAT_013f303c | 1;
          DAT_013f3038 = iVar1;
          ExceptionList = local_14;
          return;
        }
        if (DAT_013f3038 == iVar1) {
          ExceptionList = local_14;
          return;
        }
        (**(code **)(*piVar2 + 0x15c))();
        FUN_0068b610();
        FUN_0064a460();
        uStack_c._0_1_ = 1;
        uStack_c._1_3_ = 0;
        iVar4 = FUN_00aae9af();
        uStack_c._0_1_ = 2;
        if (iVar4 == 0) {
          bVar6 = false;
        }
        else {
          iVar5 = FUN_00aae9af();
          uStack_c._0_1_ = 3;
          bVar6 = iVar5 != 0;
          if (bVar6) {
            FUN_009885d0();
            uStack_c = CONCAT31(uStack_c._1_3_,4);
            FUN_009885d0();
            uStack_c = 5;
            FUN_009885d0();
            uStack_c = 6;
            FUN_00988f20();
            uStack_c = 7;
            FUN_00988f20();
            uStack_c = 8;
            FUN_00988f20();
            uStack_c = 9;
            FUN_0042c180();
            uStack_c = 10;
            FUN_0055dd40();
            uStack_c = 0xb;
            FUN_009f3290(iVar5,uStack_64);
          }
          uStack_c = 0x13;
          (**(code **)(*piVar2 + 0x44))();
          FUN_009c16d0();
          FUN_009f4240(iVar4);
        }
        uStack_c = 0x1b;
        iVar4 = (**(code **)(*piVar2 + 0x44))();
        (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))();
        if (bVar6) {
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
        }
        DAT_013f3038 = iVar1;
        FUN_004097a0();
      }
      FUN_0099ee70();
    }
  }
  ExceptionList = local_14;
  return;
}

