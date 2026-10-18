// FUN_0040b360 @ 0040b360 body=[[0040b360, 0040b39a]]


undefined4 FUN_0040b360(void)

{
  byte bVar1;
  byte *in_EAX;
  int iVar2;
  byte *in_ECX;
  bool bVar3;
  
  if (0xf < *(uint *)(in_EAX + 0x14)) {
    in_EAX = *(byte **)in_EAX;
  }
  while( true ) {
    bVar1 = *in_EAX;
    bVar3 = bVar1 < *in_ECX;
    if (bVar1 != *in_ECX) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = in_EAX[1];
    bVar3 = bVar1 < in_ECX[1];
    if (bVar1 != in_ECX[1]) break;
    in_EAX = in_EAX + 2;
    in_ECX = in_ECX + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  iVar2 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == 0);
}

