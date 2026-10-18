// FUN_0098fad0 @ 0098fad0 body=[[0098fad0, 0098fb49]]


void FUN_0098fad0(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = 0xd;
  iVar1 = *in_EAX / 1000;
  iVar2 = *in_EAX % 1000;
  if (-1 < iVar2) {
    __snprintf((char *)(unaff_ESI + 1),0xff,"%d.%03d",iVar1,iVar2);
    return;
  }
  if (-1 < iVar1) {
    __snprintf((char *)(unaff_ESI + 1),0xff,"-%d.%03d",iVar1,-iVar2);
    return;
  }
  __snprintf((char *)(unaff_ESI + 1),0xff,"%d.%03d",iVar1,-iVar2);
  return;
}

