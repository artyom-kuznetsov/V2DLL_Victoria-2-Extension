// FUN_004dbb10 @ 004dbb10 body=[[004dbb10, 004dbb42]]


void FUN_004dbb10(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = *(int *)(*(int *)(in_EAX + 0x18) + 0xdc);
  if (0 < iVar1) {
    iVar1 = __alldiv((longlong)*(int *)(in_EAX + 0x24) * (longlong)iVar1,1000,0);
    *unaff_ESI = iVar1 + 100000;
    return;
  }
  *unaff_ESI = 0;
  return;
}

