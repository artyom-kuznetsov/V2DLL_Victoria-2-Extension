// FUN_00631420 @ 00631420 body=[[00631420, 0063147c]]


void FUN_00631420(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 *unaff_ESI;
  
  for (uVar1 = in_EAX - (int)unaff_ESI; 4 < (int)(uVar1 & 0xfffffffc); uVar1 = uVar1 - 4) {
    *(undefined4 *)((int)unaff_ESI + (uVar1 - 4)) = *unaff_ESI;
    FUN_00631b70();
  }
  return;
}

