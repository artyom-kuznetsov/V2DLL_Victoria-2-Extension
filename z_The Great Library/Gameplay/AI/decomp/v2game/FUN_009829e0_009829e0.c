// FUN_009829e0 @ 009829e0 body=[[009829e0, 00982a6d] [00982a71, 00982a99]]


undefined4 FUN_009829e0(void)

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
  if (*(int **)(in_ECX + 0x20) != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x50))();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("pop_details_win",0xf);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x24) + 0x34))();
  iVar1 = *piVar2;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x3c))();
  uVar3 = (**(code **)(iVar1 + 0x2c))(local_2c,uVar3);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x20) = uVar3;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_0097fb00();
  ExceptionList = local_10;
  return 1;
}

