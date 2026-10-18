// FUN_00614e90 @ 00614e90 body=[[00614e90, 00614f0c] [00614f10, 00614f1f]]


void FUN_00614e90(void)

{
  int iVar1;
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
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  if (*(int *)(in_ECX + 0x234) != 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("back_button",0xb);
    local_8 = 0;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x234) + 0x34))(local_2c);
    (**(code **)(*(int *)(iVar1 + 0x54) + 8))(in_ECX + 0x14);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

