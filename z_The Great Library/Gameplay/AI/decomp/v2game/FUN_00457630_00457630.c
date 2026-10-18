// FUN_00457630 @ 00457630 body=[[00457630, 00457680]]


int FUN_00457630(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  
  iVar1 = (*in_EAX + -43800000) / 0x18;
  iVar2 = (int)((double)iVar1 / 365.0);
  return (iVar2 * 0x16d - (int)((float)iVar2 * 365.0)) + iVar1;
}

