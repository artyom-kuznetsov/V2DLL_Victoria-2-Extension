// FUN_00707f30 @ 00707f30 body=[[00707f30, 00707f48] [00707f50, 00707f8b]]


void FUN_00707f30(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 *unaff_ESI;
  
  for (uVar1 = in_EAX - (int)unaff_ESI; 4 < (int)(uVar1 & 0xfffffffc); uVar1 = uVar1 - 4) {
    *(undefined4 *)((int)unaff_ESI + (uVar1 - 4)) = *unaff_ESI;
    FUN_00708d30();
  }
  return;
}

