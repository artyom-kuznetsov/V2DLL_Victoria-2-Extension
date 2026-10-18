// FUN_00817fc0 @ 00817fc0 body=[[00817fc0, 00818039] [0081803d, 0081804c] [00818050, 00818079]]


void FUN_00817fc0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b58e06;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CUnitArrow::vftable;
  local_8 = 1;
  piVar1 = (int *)param_1[0x53];
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = (int *)piVar1[1];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = (int *)piVar1[2];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar1[2] = 0;
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[7] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1);
  }
  if (param_1[0x54] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x54]);
  }
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  FUN_007d9930();
  ExceptionList = local_10;
  return;
}

