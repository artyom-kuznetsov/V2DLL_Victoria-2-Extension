// FUN_00b1f900 @ 00b1f900 body=[[00b1f900, 00b1f92e]]


void FUN_00b1f900(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00f20a7c;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x5c);
    (*DAT_013f3ab0)(iVar2);
    iVar2 = iVar1;
  }
  DAT_00f20a7c = 0;
  return;
}

