// FUN_0041cf40 @ 0041cf40 body=[[0041cf40, 0041d1b9]]


void FUN_0041cf40(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 local_cc [168];
  int *local_24;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b62e98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  iVar4 = (param_2[1] - *param_2) / 0x1c;
  local_1c = 1;
  if ((((0 < iVar4) && (1 < iVar4)) && (local_14 = (int *)FUN_00973bd0(), local_14 != (int *)0x0))
     && (cVar3 = (**(code **)(*local_14 + 0x20))(), cVar3 != '\0')) {
    iVar4 = FUN_00aaf0c5();
    iVar4 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar4 * 4);
    piVar7 = *(int **)(iVar4 + 0x194);
    local_18 = iVar4;
    while ((*(int **)(iVar4 + 0x194) <= piVar7 && (piVar7 < *(int **)(iVar4 + 0x198)))) {
      iVar1 = *piVar7;
      piVar7 = piVar7 + 4;
      while (iVar2 = iVar1, local_24 = piVar7, iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0x27c);
        piVar5 = (int *)FUN_009665d0();
        piVar7 = local_24;
        iVar4 = local_18;
        if (piVar5 == local_14) {
          *(undefined4 *)(iVar2 + 0x120) = 0x50000;
          *(undefined4 *)(iVar2 + 0x124) = 0;
        }
      }
    }
    FUN_009885d0();
    local_8 = 1;
    FUN_009885d0();
    local_8._0_1_ = 2;
    FUN_009888f0();
    local_8._0_1_ = 3;
    FUN_00988bb0(local_cc,0);
    local_8._0_1_ = 4;
    FUN_00988fa0();
    local_8._0_1_ = 5;
    FUN_00988f20();
    local_8._0_1_ = 6;
    FUN_00988f20();
    local_8._0_1_ = 7;
    uVar6 = FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_00408ed0(uVar6);
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    *param_1 = 1;
    ExceptionList = local_10;
    return;
  }
  FUN_00409350();
  *param_1 = 0;
  ExceptionList = local_10;
  return;
}

