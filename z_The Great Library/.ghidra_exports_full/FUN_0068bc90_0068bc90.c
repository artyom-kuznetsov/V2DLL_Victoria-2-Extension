// FUN_0068bc90 @ 0068bc90 body=[[0068bc90, 0068bd14] [0068bd18, 0068bece] [0068bed2, 0068bee7]]


int * FUN_0068bc90(int param_1,int *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint in_stack_00000024;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = (int)param_2;
  puStack_c = &LAB_00ba63de;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_3 == 0) {
    ExceptionList = &local_10;
    if (DAT_0125d36c == 0) {
      ExceptionList = &local_10;
      iVar3 = FUN_00aae9af();
      local_8._0_1_ = 1;
      if (iVar3 != 0) {
        FUN_008b0060();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004ec430();
    }
    param_3 = FUN_004ec290();
    if (param_3 == 0) {
      if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = local_10;
      return (int *)0x0;
    }
  }
  if (((*(int *)(param_3 + 0x100) != 6) ||
      (((iVar3 = *(int *)((int)param_2 + 100), iVar3 != 0 && (iVar4 = FUN_0050e450(), iVar4 != 0))
       && (*(int *)(iVar3 + 0xe8) != iVar4)))) && (FUN_004ead40(), local_14 == 0)) {
    FUN_004ebcb0();
    iVar3 = FUN_004ec290();
    if (iVar3 != 0) {
      param_3 = iVar3;
    }
  }
  piVar6 = (int *)((int)param_2 + 100);
  param_2 = (int *)0x0;
  if (*(int *)(*(int *)(param_1 + 0xb98) + 8 + *(int *)(*piVar6 + 300) * 0x10) == 0) {
LAB_0068bdef:
    piVar5 = param_2;
    if (param_3 != 0) {
      iVar3 = FUN_00aae9af();
      local_8._0_1_ = 2;
      if (iVar3 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        FUN_00401320();
        piVar5 = (int *)FUN_004e0c50(iVar3);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004ec520();
      DAT_00f0971c = DAT_00f0971c + 1;
      (**(code **)(*piVar5 + 0x18))();
      puVar7 = (undefined4 *)
               (*(int *)(*(int *)(iVar1 + 100) + 300) * 0x10 + *(int *)(param_1 + 0xb98));
      iVar1 = puVar7[1];
      piVar6 = (int *)FUN_00aae9af();
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        *piVar6 = (int)piVar5;
        piVar6[1] = iVar1;
        piVar6[2] = 0;
        *(undefined1 *)(piVar6 + 3) = 0;
      }
      iVar3 = puVar7[2];
      puVar7[1] = piVar6;
      puVar7[2] = iVar3 + 1;
      if (iVar3 == 0) {
        *puVar7 = piVar6;
      }
      else {
        *(int **)(iVar1 + 8) = piVar6;
      }
    }
  }
  else {
    piVar6 = *(int **)(*(int *)(param_1 + 0xb98) + *(int *)(*piVar6 + 300) * 0x10);
    do {
      if (piVar6 == (int *)0x0) goto LAB_0068bdef;
      piVar5 = (int *)*piVar6;
      piVar6 = (int *)piVar6[2];
    } while ((piVar5[0xc] != param_3) || (cVar2 = FUN_004e8bd0(), cVar2 == '\0'));
  }
  param_2 = piVar5;
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

