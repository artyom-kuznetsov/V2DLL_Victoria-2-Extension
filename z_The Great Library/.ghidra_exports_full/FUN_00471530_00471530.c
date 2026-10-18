// FUN_00471530 @ 00471530 body=[[00471530, 0047157f]]


undefined4 FUN_00471530(char param_1)

{
  char cVar1;
  int in_EAX;
  int unaff_ESI;
  
  cVar1 = FUN_0051b040(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4));
  if ((cVar1 != '\0') &&
     ((param_1 == '\0' || ((*(int *)(unaff_ESI + 300) != 0 && (*(int *)(unaff_ESI + 0x158) != 0)))))
     ) {
    return 1;
  }
  return 0;
}

