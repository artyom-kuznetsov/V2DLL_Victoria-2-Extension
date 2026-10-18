// FUN_009a1c40 @ 009a1c40 body=[[009a1c40, 009a1c67]]


void FUN_009a1c40(void)

{
  int in_EAX;
  int iVar1;
  char *unaff_EDI;
  
  iVar1 = FID_conflict__sscanf((char *)(in_EAX + 0x22c),"%c");
  if (iVar1 != 0) {
    *unaff_EDI = *unaff_EDI + -0x30;
    return;
  }
  FUN_009a1140();
  return;
}

