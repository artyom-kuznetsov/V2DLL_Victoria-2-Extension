// FUN_006b53c0 @ 006b53c0 body=[[006b53c0, 006b53dc]]


void FUN_006b53c0(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != in_ECX) {
    do {
      in_ECX = in_ECX + -1;
      if (in_EAX == in_ECX) {
        return;
      }
      uVar1 = *in_EAX;
      *in_EAX = *in_ECX;
      in_EAX = in_EAX + 1;
      *in_ECX = uVar1;
    } while (in_EAX != in_ECX);
  }
  return;
}

