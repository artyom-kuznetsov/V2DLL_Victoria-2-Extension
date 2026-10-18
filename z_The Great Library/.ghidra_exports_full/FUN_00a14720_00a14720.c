// FUN_00a14720 @ 00a14720 body=[[00a14720, 00a1476e]]


void FUN_00a14720(void)

{
  undefined4 in_EAX;
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x7c) = in_EAX;
  iVar2 = DAT_01258a94;
  if (DAT_00f0d848 < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_009c1d40(DAT_00f0d848,DAT_00f0d84c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))();
    }
  }
  return;
}

