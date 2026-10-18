// FUN_009cfc00 @ 009cfc00 body=[[009cfc00, 009cfc9c] [009cfca0, 009cfcea] [009cfcee, 009cfd02]]


undefined4 FUN_009cfc00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_stack_0000001c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b77c80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x150) + 4))(&param_2);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14c) + 0x48))(param_1 + 0x68);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00408ed0(&param_2,0,0xffffffff);
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
  uVar2 = FUN_009f0880(*(undefined4 *)(param_1 + 0x148),0,0);
  (**(code **)(**(int **)(param_1 + 0x14c) + 0x40))(uVar2);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return uVar2;
}

