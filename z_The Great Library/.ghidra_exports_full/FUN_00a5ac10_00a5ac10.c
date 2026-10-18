// FUN_00a5ac10 @ 00a5ac10 body=[[00a5ac10, 00a5aca6] [00a5acaa, 00a5acf5] [00a5acf9, 00a5ad0c]]


undefined4 FUN_00a5ac10(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  uint in_stack_00000018;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3b6c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*(int *)(unaff_ESI + 0xa0) + 4))(&param_1);
  if (piVar1 == (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x9c) + 0x48))(unaff_ESI + 0x78);
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00408ed0(&param_1,0,0xffffffff);
    local_8._0_1_ = 1;
    piVar1 = (int *)(**(code **)(*(int *)(iVar2 + 0xa0) + 4))(local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  uVar3 = (**(code **)(*piVar1 + 0x30))
                    (*(undefined4 *)(unaff_ESI + 0x98),*(undefined4 *)(unaff_ESI + 0x9c),0,0,0);
  (**(code **)(**(int **)(unaff_ESI + 0x9c) + 0x40))(uVar3);
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return uVar3;
}

