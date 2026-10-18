// FUN_004c8a70 @ 004c8a70 body=[[004c8a70, 004c8ab9]]


uint FUN_004c8a70(void)

{
  uint in_EAX;
  int unaff_ESI;
  int unaff_EDI;
  
  if (-1 < unaff_EDI) {
    in_EAX = (*(int *)(unaff_ESI + 0xcc) - *(int *)(unaff_ESI + 200)) / 0x24;
    if (unaff_EDI < (int)in_EAX) {
      if (unaff_EDI < *(int *)(unaff_ESI + 0x98) - *(int *)(unaff_ESI + 0x94)) {
        return (uint)(*(char *)(unaff_EDI + *(int *)(unaff_ESI + 0x94)) != '\0');
      }
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

