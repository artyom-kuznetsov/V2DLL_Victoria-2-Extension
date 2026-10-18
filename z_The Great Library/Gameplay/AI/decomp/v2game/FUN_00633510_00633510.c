// FUN_00633510 @ 00633510 body=[[00633510, 0063358b] [0063358f, 006335a6] [006335aa, 006335af] [006335be, 006335d6]]


void FUN_00633510(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f711;
  local_10 = ExceptionList;
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  puVar2 = (undefined4 *)*piVar1;
  if (puVar2 != (undefined4 *)0x0) {
    local_8 = 2;
    ExceptionList = &local_10;
    (**(code **)(*(int *)*puVar2 + 0x50))();
    if ((undefined4 *)puVar2[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar2[1])(1);
    }
    puVar2[0x1b] = CButtonObserver::vftable;
    puVar2[0x10] = CButtonObserver::vftable;
    local_8 = 0xffffffff;
    if (0xf < (uint)puVar2[10]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puVar2[5]);
    }
    puVar2[10] = 0xf;
    puVar2[9] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puVar2);
  }
  ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar1);
}

