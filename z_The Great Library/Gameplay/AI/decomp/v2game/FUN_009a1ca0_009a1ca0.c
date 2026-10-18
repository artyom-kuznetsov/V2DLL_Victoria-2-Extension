// FUN_009a1ca0 @ 009a1ca0 body=[[009a1ca0, 009a1cdd]]


void FUN_009a1ca0(void)

{
  int in_EAX;
  int iVar1;
  undefined2 *unaff_EDI;
  undefined2 local_8 [2];
  
  iVar1 = FID_conflict__sscanf((char *)(in_EAX + 0x22c),"%u",local_8);
  if (iVar1 == 0) {
    *unaff_EDI = 0;
    FUN_009a1140();
    return;
  }
  *unaff_EDI = local_8[0];
  return;
}

