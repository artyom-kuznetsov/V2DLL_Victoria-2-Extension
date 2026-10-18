// FUN_009e0800 @ 009e0800 body=[[009e0800, 009e0898] [009e08a2, 009e08c1]]


void FUN_009e0800(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a6c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e3bcec;
  local_8 = 1;
  DAT_013f090c = DAT_013f090c + -1;
  if ((DAT_013f0908 != (undefined4 *)0x0) && (DAT_013f090c == 1)) {
    if (*(char *)(in_ECX + 5) != '\0') {
      DAT_013f090c = 0;
    }
    for (piVar1 = (int *)in_ECX[1];
        (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != DAT_013f0908)); piVar1 = (int *)piVar1[2]
        ) {
    }
    FUN_005f2ae0(piVar1);
    if (DAT_013f0908 != (undefined4 *)0x0) {
      (**(code **)*DAT_013f0908)(1);
    }
  }
  if (in_ECX[1] == 0) {
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    *in_ECX = &PTR_FUN_00e38728;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[1]);
}

