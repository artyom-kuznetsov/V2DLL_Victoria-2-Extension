// FUN_0078b930 @ 0078b930 body=[[0078b930, 0078b9c1] [0078b9c5, 0078ba3d]]


undefined4 FUN_0078b930(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b43a43;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00dfad80,4);
  local_8._0_1_ = 1;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x7c))(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x2c))();
  piVar3 = (int *)*puVar4;
  do {
    if (piVar3 == (int *)0x0) {
      FUN_0040c830(param_1);
      goto LAB_0078ba0b;
    }
    piVar1 = (int *)*piVar3;
    piVar3 = (int *)piVar3[2];
    cVar2 = (**(code **)(piVar1[7] + 0x58))(param_2);
  } while (cVar2 == '\0');
  (**(code **)(*piVar1 + 0x30))(param_1,param_2);
LAB_0078ba0b:
  FUN_00459820();
  ExceptionList = local_10;
  return param_1;
}

