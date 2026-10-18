// FUN_009b3500 @ 009b3500 body=[[009b3500, 009b3598] [009b35a2, 009b35c1]]


void FUN_009b3500(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a6c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e397b0;
  local_8 = 1;
  DAT_013f08f8 = DAT_013f08f8 + -1;
  if ((DAT_013f08f4 != (undefined4 *)0x0) && (DAT_013f08f8 == 1)) {
    if (*(char *)(in_ECX + 5) != '\0') {
      DAT_013f08f8 = 0;
    }
    for (piVar1 = (int *)in_ECX[1];
        (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != DAT_013f08f4 + 6));
        piVar1 = (int *)piVar1[2]) {
    }
    FUN_005f2ae0(piVar1);
    if (DAT_013f08f4 != (undefined4 *)0x0) {
      (**(code **)*DAT_013f08f4)(1);
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

