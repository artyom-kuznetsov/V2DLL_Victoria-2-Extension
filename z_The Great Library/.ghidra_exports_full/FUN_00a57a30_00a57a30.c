// FUN_00a57a30 @ 00a57a30 body=[[00a57a30, 00a57ac9] [00a57acd, 00a57b19] [00a57b1d, 00a57b30]]


undefined4 FUN_00a57a30(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  uint in_stack_00000018;
  undefined4 in_stack_00000020;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b52720;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*(int *)(unaff_ESI + 0x160) + 4))(&param_1);
  if (piVar1 == (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x15c) + 0x48))(unaff_ESI + 0x110);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00408ed0(&param_1,0,0xffffffff);
    local_8._0_1_ = 1;
    piVar1 = (int *)(**(code **)(*(int *)(iVar2 + 0x160) + 4))(local_34);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  }
  uVar3 = (**(code **)(*piVar1 + 0x2c))
                    (*(undefined4 *)(unaff_ESI + 0x158),*(undefined4 *)(unaff_ESI + 0x15c),
                     in_stack_00000020,0,0);
  (**(code **)(**(int **)(unaff_ESI + 0x15c) + 0x40))(uVar3);
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return uVar3;
}

