// FUN_00598930 @ 00598930 body=[[00598930, 0059896d] [00598971, 00598984] [00598988, 005989a2] [005989a6, 005989ba]]


void FUN_00598930(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  int local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b3fa3b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CNavalCombatant::vftable;
  piVar1 = in_ECX + 0x1b;
  if (piVar1 != local_20) {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar1);
    }
    *piVar1 = 0;
    in_ECX[0x1c] = 0;
    in_ECX[0x1d] = 0;
  }
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  FUN_00593ad0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

