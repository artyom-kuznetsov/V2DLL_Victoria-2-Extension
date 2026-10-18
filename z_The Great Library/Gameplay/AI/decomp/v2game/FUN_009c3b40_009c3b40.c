// FUN_009c3b40 @ 009c3b40 body=[[009c3b40, 009c3bd8] [009c3be2, 009c3c01]]


void FUN_009c3b40(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a6c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e3a5a8;
  local_8 = 1;
  DAT_013f091c = DAT_013f091c + -1;
  if ((DAT_013f0918 != (undefined4 *)0x0) && (DAT_013f091c == 1)) {
    if (*(char *)(in_ECX + 5) != '\0') {
      DAT_013f091c = 0;
    }
    for (piVar1 = (int *)in_ECX[1];
        (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != DAT_013f0918 + 6));
        piVar1 = (int *)piVar1[2]) {
    }
    FUN_005f2ae0(piVar1);
    if (DAT_013f0918 != (undefined4 *)0x0) {
      (**(code **)*DAT_013f0918)(1);
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

