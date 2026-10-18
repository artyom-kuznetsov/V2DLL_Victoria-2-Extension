// FUN_009d0140 @ 009d0140 body=[[009d0140, 009d01d6] [009d01da, 009d022e] [009d0232, 009d0245]]


undefined4 FUN_009d0140(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
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
  iVar1 = (**(code **)(*(int *)(unaff_EDI + 0x150) + 4))(&param_1);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(unaff_EDI + 0x14c) + 0x48))(unaff_EDI + 0x68);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00408ed0(&param_1,0,0xffffffff);
    local_8._0_1_ = 1;
    (**(code **)(*(int *)(iVar1 + 0x150) + 4))(local_34);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  }
  uVar2 = FUN_00a584a0(*(undefined4 *)(unaff_EDI + 0x148),*(undefined4 *)(unaff_EDI + 0x14c),
                       in_stack_00000020,*(undefined4 *)(unaff_EDI + 0xa8),
                       *(undefined4 *)(unaff_EDI + 0xac));
  (**(code **)(**(int **)(unaff_EDI + 0x14c) + 0x40))(uVar2);
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return uVar2;
}

