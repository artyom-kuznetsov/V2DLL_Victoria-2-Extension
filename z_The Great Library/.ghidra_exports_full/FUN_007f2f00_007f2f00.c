// FUN_007f2f00 @ 007f2f00 body=[[007f2f00, 007f2f69]]


void FUN_007f2f00(void)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(int *)(in_EAX + 0x3ac) + 4;
  uVar3 = 1;
  uVar2 = *(int *)(in_EAX + 0x3a8) + 4;
  if (1 < uVar1) {
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 * 2;
    } while (uVar3 < uVar1);
  }
  uVar3 = 1;
  if (1 < uVar2) {
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 * 2;
    } while (uVar3 < uVar2);
  }
  *(int *)(in_EAX + 0x3b4) = *(int *)(in_EAX + 0x3a4) + -2;
  *(int *)(in_EAX + 0x3b0) = *(int *)(in_EAX + 0x3a0) + -2;
  *(uint *)(in_EAX + 0x3b8) = uVar2;
  *(uint *)(in_EAX + 0x3bc) = uVar1;
  return;
}

