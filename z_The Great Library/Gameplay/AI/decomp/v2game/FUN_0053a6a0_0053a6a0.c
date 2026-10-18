// FUN_0053a6a0 @ 0053a6a0 body=[[0053a6a0, 0053a6c8]]


bool FUN_0053a6a0(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = *(int *)(in_EAX + 0x188);
  iVar2 = FUN_0045c080(iVar1,unaff_EDI + 8);
  return (iVar2 != iVar1) == (bool)*(char *)(unaff_EDI + 0x7c);
}

