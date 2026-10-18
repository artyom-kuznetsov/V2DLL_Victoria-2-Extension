// FUN_009bc440 @ 009bc440 body=[[009bc440, 009bc481]]


int FUN_009bc440(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  
  if (DAT_013f08fc == 10000) {
    DAT_013f08fc = 0;
  }
  iVar2 = 0;
  iVar1 = DAT_013f08fc;
  do {
    DAT_013f08fc = iVar1 + 1;
    if (*(int *)((iVar1 + 1) * 0x2c + in_EDX) == 0) {
      return iVar1;
    }
    if (DAT_013f08fc == 10000) {
      DAT_013f08fc = 0;
    }
    iVar2 = iVar2 + 1;
    iVar1 = DAT_013f08fc;
  } while (iVar2 < 10000);
  return -1;
}

