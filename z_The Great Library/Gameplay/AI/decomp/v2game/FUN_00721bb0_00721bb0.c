// FUN_00721bb0 @ 00721bb0 body=[[00721bb0, 00721c62] [00721c66, 00721c88] [00721c8c, 00721ce4]]


/* WARNING: Removing unreachable block (ram,0x00721c80) */

void FUN_00721bb0(int param_1)

{
  int iVar1;
  void **ppvVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint local_50;
  uint local_3c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44510;
  local_10 = ExceptionList;
  piVar5 = (int *)(DAT_012587f0 + 0x38);
  iVar6 = *(int *)(DAT_012587f0 + 0x3c) - *piVar5 >> 2;
  local_14 = 0;
  ExceptionList = &local_10;
  ppvVar2 = &local_10;
  if (0 < iVar6) {
    do {
      iVar1 = *(int *)(*piVar5 + local_14 * 4);
      if ((iVar1 != 0) && (iVar1 != DAT_012587f0 + 0xa8)) {
        FUN_00409350("group_",6);
        local_8 = 0;
        uVar3 = FUN_00988f20(iVar1 + 0xc);
        local_8 = CONCAT31(local_8._1_3_,1);
        piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))(uVar3);
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50);
        }
        local_8 = 0xffffffff;
        local_3c = 0xf;
        local_50 = local_50 & 0xffffff00;
        (**(code **)(*piVar4 + 0x90))();
        (**(code **)(*piVar4 + 0x88))();
      }
      local_14 = local_14 + 1;
      ppvVar2 = ExceptionList;
    } while (local_14 < iVar6);
  }
  ExceptionList = ppvVar2;
  FUN_00724460(param_1 + 0x5c);
  ExceptionList = local_10;
  return;
}

