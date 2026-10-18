// FUN_0076a140 @ 0076a140 body=[[0076a140, 0076a1ac] [0076a1b0, 0076a1fb] [0076a1ff, 0076a20d]]


void FUN_0076a140(void)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
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
  puStack_c = &LAB_00b456d0;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("save_game",9);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x48))(local_2c);
  *(undefined1 *)(iVar1 + 0x142) = 0;
  FUN_009a8550(iVar1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("shield",6);
  local_8 = 1;
  piVar2 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x20) + 0x34))(local_48);
  (**(code **)(*piVar2 + 0xbc))();
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

