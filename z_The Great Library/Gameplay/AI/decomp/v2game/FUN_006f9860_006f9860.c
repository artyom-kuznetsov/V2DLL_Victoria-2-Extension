// FUN_006f9860 @ 006f9860 body=[[006f9860, 006f98e3] [006f98e7, 006f9912]]


undefined4 FUN_006f9860(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006f9ff0();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("build_factory",0xd);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x2c) + 0x34))();
  iVar1 = *piVar2;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x3c))();
  uVar3 = (**(code **)(iVar1 + 0x2c))(local_2c,uVar3);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x28) = uVar3;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_006f9920();
  ExceptionList = local_10;
  return 1;
}

