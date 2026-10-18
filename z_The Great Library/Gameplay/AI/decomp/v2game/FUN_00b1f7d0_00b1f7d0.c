// FUN_00b1f7d0 @ 00b1f7d0 body=[[00b1f7d0, 00b1f7fc] [00b1f800, 00b1f83b]]


int * FUN_00b1f7d0(void)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (DAT_00f20a9c != 0) {
    FUN_00b2a660(DAT_00f20a9c);
  }
  if (DAT_00f20a7c != (int *)0x0) {
    uVar2 = FUN_00b29590();
    for (piVar1 = DAT_00f20a7c; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x17]) {
      if ((*piVar1 == (int)uVar2) && (piVar1[1] == (int)((ulonglong)uVar2 >> 0x20))) {
        if (DAT_00f20a9c != 0) {
          FUN_00b2a680(DAT_00f20a9c);
        }
        return piVar1;
      }
    }
  }
  if (DAT_00f20a9c != 0) {
    FUN_00b2a680(DAT_00f20a9c);
  }
  return (int *)0x0;
}

