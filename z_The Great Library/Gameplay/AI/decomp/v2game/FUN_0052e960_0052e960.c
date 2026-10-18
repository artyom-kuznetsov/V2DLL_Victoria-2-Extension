// FUN_0052e960 @ 0052e960 body=[[0052e960, 0052e9de]]


undefined1 FUN_0052e960(void)

{
  char cVar1;
  int in_EAX;
  int unaff_EDI;
  
  if (((*(char *)(unaff_EDI + 0x12d0) != '\0') && (*(int *)(in_EAX + 0x84) < 1)) &&
     (*(int *)(in_EAX + 0x68) < 8)) {
    if (*(int *)(in_EAX + 0x5c) == *(int *)(unaff_EDI + 0x20)) {
      return *(undefined1 *)(unaff_EDI + 0xac8);
    }
    cVar1 = FUN_0052fb40();
    if (cVar1 != '\0') {
      if ((*(char *)(unaff_EDI + 0xb20) != '\0') &&
         (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0x5c) * 4) + 0xb60) !=
          '\0')) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

