// FUN_0052dcd0 @ 0052dcd0 body=[[0052dcd0, 0052dd63]]


uint FUN_0052dcd0(int param_1)

{
  uint uVar1;
  uint in_EAX;
  int in_ECX;
  uint local_10;
  int local_c;
  
  if ((-1 < (int)in_EAX) && (uVar1 = in_EAX, (int)in_EAX < *(int *)(in_ECX + 0x68))) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      in_EAX = 0;
    }
    if ((*(char *)(param_1 + 0xad8) != '\0') &&
       ((*(int *)(in_ECX + 0x5c) == *(int *)(param_1 + 0x20) ||
        ((in_EAX = FUN_0047e560(), (char)in_EAX == '\0' && (*(char *)(param_1 + 0xb30) != '\0'))))))
    {
      FUN_004dab20();
      if ((local_c <= *(int *)(param_1 + 0xe7c)) &&
         ((local_c < *(int *)(param_1 + 0xe7c) || (local_10 < *(uint *)(param_1 + 0xe78))))) {
        return 1;
      }
      return 0;
    }
  }
  return in_EAX & 0xffffff00;
}

