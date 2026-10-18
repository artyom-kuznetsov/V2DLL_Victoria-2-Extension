// FUN_007dbc40 @ 007dbc40 body=[[007dbc40, 007dbcab] [007dbcaf, 007dbcc9] [007dbccd, 007dbcef]]


void FUN_007dbc40(void)

{
  int *piVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c895;
  local_10 = ExceptionList;
  local_8 = 0;
  uVar4 = 0;
  ExceptionList = &local_10;
  ppvVar3 = &local_10;
  if ((int)DAT_01267a38 - (int)DAT_01267a34 >> 4 != 0) {
    do {
      FUN_007dbcf0();
      uVar4 = uVar4 + 1;
      ppvVar3 = ExceptionList;
    } while (uVar4 < (uint)((int)DAT_01267a38 - (int)DAT_01267a34 >> 4));
  }
  ExceptionList = ppvVar3;
  piVar2 = DAT_01267a38;
  piVar1 = DAT_01267a34;
  if (DAT_01267a34 == (int *)0x0) {
    DAT_01267a34 = (int *)0x0;
    DAT_01267a38 = (int *)0x0;
    DAT_01267a3c = 0;
    ExceptionList = local_10;
    return;
  }
  while( true ) {
    if (piVar1 == piVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(DAT_01267a34);
    }
    if (*piVar1 != 0) break;
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1 = piVar1 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*piVar1);
}

