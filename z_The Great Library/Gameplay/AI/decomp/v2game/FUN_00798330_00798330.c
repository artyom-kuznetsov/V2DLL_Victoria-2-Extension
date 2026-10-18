// FUN_00798330 @ 00798330 body=[[00798330, 007983ba] [007983be, 0079841c]]


undefined4 FUN_00798330(void)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *in_ECX;
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
  cVar1 = (**(code **)(*(int *)(*in_ECX + 0x18) + 0x94))();
  if (cVar1 != '\0') {
    ExceptionList = local_10;
    return 1;
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("leaderlist",10);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(*(int *)*in_ECX + 0x7c))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x2c))();
  piVar2 = (int *)*puVar3;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
    cVar1 = (**(code **)(*(int *)(*piVar2 + 0x1c) + 0x58))();
    if (cVar1 != '\0') break;
    piVar2 = (int *)piVar2[2];
  }
  ExceptionList = local_10;
  return 1;
}

