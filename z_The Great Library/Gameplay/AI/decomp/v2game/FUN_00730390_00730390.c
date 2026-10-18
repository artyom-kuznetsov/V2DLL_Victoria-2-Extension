// FUN_00730390 @ 00730390 body=[[00730390, 00730418] [0073041c, 00730429]]


void FUN_00730390(void)

{
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
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("value",5);
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_2c);
  FUN_00408ed0(in_ECX + 0x14,0,0xffffffff);
  FUN_00a5ecc0(in_ECX + 0x14,0);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

