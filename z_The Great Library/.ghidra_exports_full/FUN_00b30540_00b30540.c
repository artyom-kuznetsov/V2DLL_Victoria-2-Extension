// FUN_00b30540 @ 00b30540 body=[[00b30540, 00b307fc]]


uint FUN_00b30540(void)

{
  uint in_EAX;
  uint uVar1;
  uint *in_ECX;
  uint *puVar2;
  uint in_EDX;
  uint uVar3;
  
  uVar1 = ~in_EAX;
  for (; (in_EDX != 0 && (((uint)in_ECX & 3) != 0)); in_ECX = (uint *)((int)in_ECX + 1)) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00de64a8 + (((byte)*in_ECX ^ uVar1) & 0xff) * 4);
    in_EDX = in_EDX - 1;
  }
  if (0x1f < in_EDX) {
    uVar3 = in_EDX >> 5;
    puVar2 = in_ECX;
    do {
      uVar1 = uVar1 ^ *puVar2;
      uVar1 = *(uint *)(&DAT_00de68a8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00de6ca8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00de64a8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00de70a8 + (uVar1 & 0xff) * 4) ^ puVar2[1];
      uVar1 = *(uint *)(&DAT_00de68a8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00de6ca8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00de64a8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00de70a8 + (uVar1 & 0xff) * 4) ^ puVar2[2];
      uVar1 = *(uint *)(&DAT_00de68a8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00de6ca8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00de64a8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00de70a8 + (uVar1 & 0xff) * 4) ^ puVar2[3];
      uVar1 = *(uint *)(&DAT_00de68a8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00de6ca8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00de64a8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00de70a8 + (uVar1 & 0xff) * 4) ^ puVar2[4];
      uVar1 = *(uint *)(&DAT_00de68a8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00de6ca8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00de64a8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00de70a8 + (uVar1 & 0xff) * 4) ^ puVar2[5];
      in_ECX = puVar2 + 8;
      uVar1 = *(uint *)(&DAT_00de68a8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00de6ca8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00de64a8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00de70a8 + (uVar1 & 0xff) * 4) ^ puVar2[6];
      in_EDX = in_EDX - 0x20;
      uVar1 = *(uint *)(&DAT_00de68a8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00de6ca8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00de64a8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00de70a8 + (uVar1 & 0xff) * 4) ^ puVar2[7];
      uVar1 = *(uint *)(&DAT_00de68a8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00de6ca8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00de64a8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00de70a8 + (uVar1 & 0xff) * 4);
      uVar3 = uVar3 - 1;
      puVar2 = in_ECX;
    } while (uVar3 != 0);
  }
  if (3 < in_EDX) {
    uVar3 = in_EDX >> 2;
    do {
      uVar1 = uVar1 ^ *in_ECX;
      in_ECX = in_ECX + 1;
      uVar1 = *(uint *)(&DAT_00de68a8 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00de6ca8 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00de64a8 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00de70a8 + (uVar1 & 0xff) * 4);
      in_EDX = in_EDX - 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  for (; in_EDX != 0; in_EDX = in_EDX - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00de64a8 + (((byte)*in_ECX ^ uVar1) & 0xff) * 4);
    in_ECX = (uint *)((int)in_ECX + 1);
  }
  return ~uVar1;
}

