// FUN_009d0560 @ 009d0560 body=[[009d0560, 009d05f9] [009d05fd, 009d065c] [009d0660, 009d0674]]


int FUN_009d0560(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  uint in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3b6c0;
  local_10 = ExceptionList;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*(int *)(in_ECX + 0x150) + 4))(&param_1);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x14c) + 0x48))(in_ECX + 0x68);
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00408ed0(&param_1,0,0xffffffff);
    local_8._0_1_ = 1;
    (**(code **)(*(int *)(iVar1 + 0x150) + 4))(local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  iVar1 = FUN_009cde70(*(undefined4 *)(in_ECX + 0x148),*(undefined4 *)(in_ECX + 0x14c),
                       in_stack_00000024,in_stack_00000020,*(undefined4 *)(in_ECX + 0xa8),
                       *(undefined4 *)(in_ECX + 0xac));
  if (iVar1 != 0) {
    iVar2 = iVar1 + 0x18;
  }
  (**(code **)(**(int **)(in_ECX + 0x14c) + 0x40))(iVar2);
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return iVar1;
}

