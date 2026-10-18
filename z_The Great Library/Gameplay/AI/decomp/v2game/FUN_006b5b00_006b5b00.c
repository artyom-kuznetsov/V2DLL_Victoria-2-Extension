// FUN_006b5b00 @ 006b5b00 body=[[006b5b00, 006b5b4c]]


void FUN_006b5b00(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 *unaff_ESI;
  
  for (uVar1 = in_EAX - (int)unaff_ESI; 4 < (int)(uVar1 & 0xfffffffc); uVar1 = uVar1 - 4) {
    *(undefined4 *)((int)unaff_ESI + (uVar1 - 4)) = *unaff_ESI;
    FUN_006b5eb0();
  }
  return;
}

