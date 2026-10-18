// FUN_009b1680 @ 009b1680 body=[[009b1680, 009b1718] [009b1722, 009b1741]]


void FUN_009b1680(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a6c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e390e0;
  local_8 = 1;
  DAT_013f08f0 = DAT_013f08f0 + -1;
  if ((DAT_013f08ec != (undefined4 *)0x0) && (DAT_013f08f0 == 1)) {
    if (*(char *)(in_ECX + 5) != '\0') {
      DAT_013f08f0 = 0;
    }
    for (piVar1 = (int *)in_ECX[1];
        (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != DAT_013f08ec + 6));
        piVar1 = (int *)piVar1[2]) {
    }
    FUN_005f2ae0(piVar1);
    if (DAT_013f08ec != (undefined4 *)0x0) {
      (**(code **)*DAT_013f08ec)(1);
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

