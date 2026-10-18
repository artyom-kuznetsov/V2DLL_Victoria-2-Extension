// FUN_0098fd90 @ 0098fd90 body=[[0098fd90, 0098fdc8]]


undefined4 FUN_0098fd90(void)

{
  int in_EAX;
  int iVar1;
  undefined1 *unaff_EDI;
  
  iVar1 = __stricmp("yes",(char *)(in_EAX + 4));
  if (iVar1 == 0) {
    *unaff_EDI = 1;
    return 1;
  }
  iVar1 = __stricmp("no",(char *)(in_EAX + 4));
  if (iVar1 == 0) {
    *unaff_EDI = 0;
    return 1;
  }
  return 0;
}

