// FUN_00707130 @ 00707130 body=[[00707130, 0070718c]]


void FUN_00707130(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 *unaff_ESI;
  
  for (uVar1 = in_EAX - (int)unaff_ESI; 4 < (int)(uVar1 & 0xfffffffc); uVar1 = uVar1 - 4) {
    *(undefined4 *)((int)unaff_ESI + (uVar1 - 4)) = *unaff_ESI;
    FUN_00708480();
  }
  return;
}

