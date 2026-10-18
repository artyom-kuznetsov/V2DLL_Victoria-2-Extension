// FUN_00429c70 @ 00429c70 body=[[00429c70, 00429d3d] [00429d55, 00429d87]]


void FUN_00429c70(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined1 *unaff_ESI;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 8) * 4) + 0x188);
  ExceptionList = &local_10;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &local_10;
    cVar2 = (**(code **)(*piVar1 + 0x24))();
    if (cVar2 != '\0') {
      (**(code **)(*piVar1 + 0x20))();
      ExceptionList = local_10;
      return;
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    *unaff_ESI = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    FUN_0055dd70();
    local_8 = 0;
    FUN_0042c180();
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
  }
  ExceptionList = local_10;
  return;
}

