// FUN_00461fc0 @ 00461fc0 body=[[00461fc0, 00462073] [00462077, 0046208e] [00462092, 004620a6]]


int * FUN_00461fc0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int unaff_EDI;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  int local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d2b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar2 = (int *)FUN_004623b0(param_1);
  if (piVar2 != *(int **)(unaff_EDI + 4)) {
    cVar1 = FUN_0098ab20();
    piVar4 = piVar2;
    if (cVar1 == '\0') goto LAB_00462092;
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00408ed0(param_1,0,0xffffffff);
  piVar4 = local_30;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_8._0_1_ = 2;
  FUN_009beeb0(&local_20);
  local_8 = CONCAT31(local_8._1_3_,3);
  uVar3 = FUN_00463a70(local_4c);
  FUN_00462e70(piVar2,uVar3);
  if (local_30[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
LAB_00462092:
  ExceptionList = local_10;
  return piVar4 + 10;
}

