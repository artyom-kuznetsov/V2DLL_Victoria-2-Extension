// FUN_00a88c50 @ 00a88c50 body=[[00a88c50, 00a88ca7]]


void FUN_00a88c50(int param_1)

{
  int in_EAX;
  int unaff_EDI;
  
  if (0xf < *(uint *)(unaff_EDI + 4)) {
    FUN_00a8a2a0();
    if (*(int *)(in_EAX + 0x18) != 4) {
      if (*(int *)(in_EAX + 0x18) == 3) {
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
      FUN_00a8a360();
      *(undefined4 *)(in_EAX + 0xe4) = *(undefined4 *)(unaff_EDI + 0xc);
      return;
    }
    *(uint *)(in_EAX + 0x18) = (byte)~*(byte *)(unaff_EDI + 2) & 1 | 6;
    *(undefined4 *)(in_EAX + 0xe4) = *(undefined4 *)(unaff_EDI + 0xc);
  }
  return;
}

