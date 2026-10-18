// FUN_00a13e20 @ 00a13e20 body=[[00a13e20, 00a13e97]]


void FUN_00a13e20(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = DAT_01258a94;
  if (DAT_00f0d848 < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_009c1d40();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))
                (*(undefined4 *)(in_ECX + 0x3c),(float)*(int *)(in_ECX + 0x40) / 1000.0,
                 *(undefined1 *)(in_ECX + 0x44));
    }
  }
  return;
}

