// FUN_007a4b80 @ 007a4b80 body=[[007a4b80, 007a4c18] [007a4c22, 007a4c41]]


void FUN_007a4b80(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a363;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CObservable<CLoginObserver,CLoginClassObservable>::vftable;
  local_8 = 1;
  DAT_013f08b0 = DAT_013f08b0 + -1;
  if ((DAT_013f08ac != (undefined4 *)0x0) && (DAT_013f08b0 == 1)) {
    if (*(char *)(in_ECX + 5) != '\0') {
      DAT_013f08b0 = 0;
    }
    for (piVar1 = (int *)in_ECX[1];
        (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != DAT_013f08ac + 6));
        piVar1 = (int *)piVar1[2]) {
    }
    FUN_005f2ae0(piVar1);
    if (DAT_013f08ac != (undefined4 *)0x0) {
      (**(code **)*DAT_013f08ac)(1);
    }
  }
  if (in_ECX[1] == 0) {
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    *in_ECX = TObservable<CLoginObserver,CLoginClassObservable>::vftable;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[1]);
}

