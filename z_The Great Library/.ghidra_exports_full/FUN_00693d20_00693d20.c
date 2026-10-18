// FUN_00693d20 @ 00693d20 body=[[00693d20, 00693da6] [00693daa, 00693db8]]


void FUN_00693d20(void)

{
  int *piVar1;
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
  *(undefined1 *)(in_ECX + 8) = 1;
  if (*(int *)(in_ECX + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x34))();
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("button_kick",0xb);
    local_8 = 0;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x38))();
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

