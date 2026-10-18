// thunk_FUN_009cd410 @ 009cad60 body=[[009cad60, 009cad64]]


void thunk_FUN_009cd410(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_00b3a6c3;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *in_ECX = &PTR_FUN_00e3b0d0;
  uStack_8 = 1;
  DAT_013f0904 = DAT_013f0904 + -1;
  if ((DAT_013f0900 != (undefined4 *)0x0) && (DAT_013f0904 == 1)) {
    if (*(char *)(in_ECX + 5) != '\0') {
      DAT_013f0904 = 0;
    }
    for (piVar1 = (int *)in_ECX[1];
        (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != DAT_013f0900 + 6));
        piVar1 = (int *)piVar1[2]) {
    }
    FUN_005f2ae0(piVar1);
    if (DAT_013f0900 != (undefined4 *)0x0) {
      (**(code **)*DAT_013f0900)(1);
    }
  }
  if (in_ECX[1] == 0) {
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    *in_ECX = &PTR_FUN_00e38728;
    ExceptionList = pvStack_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[1]);
}

