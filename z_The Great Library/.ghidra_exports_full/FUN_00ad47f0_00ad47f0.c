// FUN_00ad47f0 @ 00ad47f0 body=[[00ad47f0, 00ad4817]]


void FUN_00ad47f0(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = *(uint *)(in_ECX + 0x84);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_00aea1d0();
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}

