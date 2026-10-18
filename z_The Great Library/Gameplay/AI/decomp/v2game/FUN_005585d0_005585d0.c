// FUN_005585d0 @ 005585d0 body=[[005585d0, 005585e8] [005585f0, 0055862b]]


void FUN_005585d0(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 *unaff_ESI;
  
  for (uVar1 = in_EAX - (int)unaff_ESI; 4 < (int)(uVar1 & 0xfffffffc); uVar1 = uVar1 - 4) {
    *(undefined4 *)((int)unaff_ESI + (uVar1 - 4)) = *unaff_ESI;
    FUN_00559ac0();
  }
  return;
}

