// FUN_00a7b490 @ 00a7b490 body=[[00a7b490, 00a7b4cb] [00a7b4cf, 00a7b4d5]]


void FUN_00a7b490(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e43a88;
  for (piVar1 = DAT_013f0758; (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != in_ECX));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_00a7b8a0(piVar1);
  *in_ECX = &PTR_FUN_00e388a8;
  if ((param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

