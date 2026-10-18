// FUN_009b7610 @ 009b7610 body=[[009b7610, 009b7664]]


uint FUN_009b7610(void)

{
  int in_EAX;
  uint uVar1;
  
  if (*(int *)(in_EAX + 0x9c0) == 0) {
    FUN_009b7700();
  }
  uVar1 = *(uint *)(in_EAX + *(int *)(in_EAX + 0x9c0) * 4);
  uVar1 = uVar1 ^ (int)uVar1 >> 0xb;
  uVar1 = uVar1 ^ (uVar1 & 0xff3a58ad) << 7;
  uVar1 = uVar1 ^ (uVar1 & 0xffffdf8c) << 0xf;
  *(int *)(in_EAX + 0x9c0) = (*(int *)(in_EAX + 0x9c0) + 1) % 0x270;
  return (int)uVar1 >> 0x12 ^ uVar1;
}

