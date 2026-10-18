// FUN_008053d0 @ 008053d0 body=[[008053d0, 00805416]]


void FUN_008053d0(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 *unaff_ESI;
  undefined4 local_8;
  
  for (uVar1 = in_EAX - (int)unaff_ESI; 4 < (int)(uVar1 & 0xfffffffc); uVar1 = uVar1 - 4) {
    local_8 = *(undefined4 *)((int)unaff_ESI + (uVar1 - 4));
    *(undefined4 *)((int)unaff_ESI + (uVar1 - 4)) = *unaff_ESI;
    FUN_008054a0(0,&local_8);
  }
  return;
}

