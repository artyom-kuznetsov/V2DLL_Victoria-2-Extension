// FUN_008a5110 @ 008a5110 body=[[008a5110, 008a5270] [008a5274, 008a5288]]


undefined1 * FUN_008a5110(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  uint in_stack_00000020;
  undefined1 local_50 [28];
  undefined1 local_34 [28];
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b94103;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  if (DAT_0125ce80 == 0) {
    ExceptionList = &local_10;
    local_14 = FUN_00aae9af(0x3c);
    local_8._0_1_ = 1;
    if (local_14 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_004dada0();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004dc340(uVar1);
  }
  piVar2 = (int *)FUN_004dc420(in_ECX + 0x20);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_004dacc0();
  }
  if (piVar2 != (int *)0x0) {
    local_18 = *(undefined4 *)(param_2 + 8);
    if (((*(int *)(param_2 + 0xc) != 0) &&
        (((*(char *)(param_2 + 8) != 'R' || (*(char *)(param_2 + 9) != 'E')) ||
         (*(char *)(param_2 + 10) != 'B')))) &&
       (((DAT_01258734 != 0 && (piVar2[0x4b] != DAT_01258734 + 0x10)) && (piVar2[0x4b] != 0)))) {
      uVar1 = (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) +
                                     *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                      *(int *)(param_2 + 0xc) * 4) + 0xbe4) * 4) +
                          0x1c))(local_50);
      local_8._0_1_ = 2;
      uVar3 = (**(code **)(*piVar2 + 0x18))(local_34);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_0043ec10(param_1,&DAT_00e2a7e8,uVar3,"PROVS",uVar1);
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      ExceptionList = local_10;
      return param_1;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_3);
}

