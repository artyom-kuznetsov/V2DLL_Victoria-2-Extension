// FUN_00b2b720 @ 00b2b720 body=[[00b2b720, 00b2b74f]]


undefined4 FUN_00b2b720(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(param_1 + uVar1) != (&DAT_00f05eb0)[uVar1]) {
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 6);
  return 1;
}

