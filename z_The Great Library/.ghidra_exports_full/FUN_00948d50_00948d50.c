// FUN_00948d50 @ 00948d50 body=[[00948d50, 00948db6] [00948dba, 00948e17] [00948e1b, 00948e6d] [00948e71, 00948e7e]]


void FUN_00948d50(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
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
  puStack_c = &LAB_00b420c8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("pick_side",9);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("offer_button",0xc);
  local_8 = 1;
  iVar2 = (**(code **)(*piVar1 + 0x34))(local_48);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x70);
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("demand_button",0xd);
  local_8 = 2;
  iVar2 = (**(code **)(*piVar1 + 0x34))(local_64);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x9c);
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  ExceptionList = local_10;
  return;
}

