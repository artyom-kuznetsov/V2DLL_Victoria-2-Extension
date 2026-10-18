// FUN_00a2d020 @ 00a2d020 body=[[00a2d020, 00a2d04c] [00a2d050, 00a2d056]]


void FUN_00a2d020(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[1];
  *in_ECX = &PTR_FUN_00e3fb28;
  in_ECX[1] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

