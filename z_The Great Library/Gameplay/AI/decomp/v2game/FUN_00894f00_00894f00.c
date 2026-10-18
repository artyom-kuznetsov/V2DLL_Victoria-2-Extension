// FUN_00894f00 @ 00894f00 body=[[00894f00, 00894f82] [00894f86, 00894fdb] [00894fdf, 00894ff9] [00894ffd, 00895048] [0089504c, 0089508b] [0089508f, 008950a3]]


/* WARNING: Removing unreachable block (ram,0x00894ff1) */

undefined1 * FUN_00894f00(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint in_stack_00000020;
  uint local_68;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68ea2;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((*(int **)(in_ECX + 0x20) == (int *)0x0) ||
     (ExceptionList = &local_10, cVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(),
     cVar1 == '\0')) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("SET_MILITARY_REFORM_EFFECT",0x1a);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_28,local_44);
    local_8._0_1_ = 3;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfbf14,4);
    local_8._0_1_ = 4;
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x18))();
    local_8._0_1_ = 5;
    FUN_009a9980();
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

