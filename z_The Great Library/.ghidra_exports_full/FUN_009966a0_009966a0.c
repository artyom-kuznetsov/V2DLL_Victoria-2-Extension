// FUN_009966a0 @ 009966a0 body=[[009966a0, 009967e9] [009967ed, 0099680d] [00996811, 0099682c] [00996830, 00996844]]


int * FUN_009966a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  uint in_stack_00000038;
  undefined4 in_stack_00000040;
  uint in_stack_00000054;
  int in_stack_00000064;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4a2c3;
  local_10 = ExceptionList;
  local_8 = 2;
  ExceptionList = &local_10;
  iVar1 = FUN_005c2ad0();
  if (iVar1 == 0) {
    iVar1 = FUN_00aae9af();
    local_8._0_1_ = 3;
    if (iVar1 != 0) {
      FUN_00408ed0(param_1,0,0xffffffff);
      FUN_00a54ff0(iVar1);
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_008b2480();
  }
  piVar2 = (int *)FUN_005c2ad0();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x5c))();
  FUN_0068f390();
  (**(code **)(*piVar2 + 0xf0))();
  if (in_stack_00000064 == 0) {
    (**(code **)(*piVar2 + 0x74))(in_ECX + 0x6b9e0);
  }
  else {
    (**(code **)(*piVar2 + 0x74))(in_stack_00000064);
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  if (0xf < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000024);
  }
  if (in_stack_00000054 < 0x10) {
    ExceptionList = local_10;
    return piVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_stack_00000040);
}

