// FUN_00718de0 @ 00718de0 body=[[00718de0, 00718e65] [00718e79, 00718ecc] [00718ed0, 00718f01]]


void FUN_00718de0(void)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
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
  puStack_c = &LAB_00b44610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_006c9d30();
  if (cVar1 == '\0') {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("topbar_outlinerbutton",0x15);
    local_8 = 1;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_2c);
    (**(code **)(*piVar2 + 0x48))(2);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_006c9cd0();
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x2c))();
  }
  else {
    FUN_006c9d00();
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("topbar_outlinerbutton",0x15);
    local_8 = 0;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_48);
    (**(code **)(*piVar2 + 0x48))(1);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

