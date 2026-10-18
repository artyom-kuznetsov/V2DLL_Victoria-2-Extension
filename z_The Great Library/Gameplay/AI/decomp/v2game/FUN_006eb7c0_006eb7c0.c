// FUN_006eb7c0 @ 006eb7c0 body=[[006eb7c0, 006eb854] [006eb858, 006eb872] [006eb876, 006eb886]]


void FUN_006eb7c0(void)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  int in_EDX;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e110;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(in_EDX + 0x4c) = in_ECX;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("cat_name",8);
  local_8 = 0;
  uVar1 = FUN_005659c0(in_ECX,local_48);
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(**(int **)(in_EDX + 0x20) + 0x3c))(local_2c);
  FUN_00408ed0(uVar1,0,0xffffffff);
  FUN_00a5ecc0(uVar1,0);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

