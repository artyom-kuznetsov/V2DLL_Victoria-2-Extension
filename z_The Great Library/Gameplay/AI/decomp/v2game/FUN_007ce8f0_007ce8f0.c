// FUN_007ce8f0 @ 007ce8f0 body=[[007ce8f0, 007ce93c]]


void FUN_007ce8f0(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 *unaff_ESI;
  
  for (uVar1 = in_EAX - (int)unaff_ESI; 4 < (int)(uVar1 & 0xfffffffc); uVar1 = uVar1 - 4) {
    *(undefined4 *)((int)unaff_ESI + (uVar1 - 4)) = *unaff_ESI;
    FUN_007d0d20();
  }
  return;
}

