// FUN_009bcf60 @ 009bcf60 body=[[009bcf60, 009bcfb0]]


undefined4 FUN_009bcf60(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 unaff_EDI;
  
  iVar2 = FUN_00462500(unaff_EDI);
  if (iVar2 != *(int *)(in_EAX + 0x6b6c8)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 == '\0') {
      return *(undefined4 *)(iVar2 + 0x28);
    }
  }
  return *(undefined4 *)(*(int *)(in_EAX + 0x6b6c8) + 0x28);
}

