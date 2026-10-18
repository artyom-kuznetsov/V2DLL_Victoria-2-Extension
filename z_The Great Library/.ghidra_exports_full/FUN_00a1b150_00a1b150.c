// FUN_00a1b150 @ 00a1b150 body=[[00a1b150, 00a1b24e]]


uint FUN_00a1b150(uint param_1)

{
  uint uVar1;
  byte *in_ECX;
  uint in_EDX;
  uint uVar2;
  
  if (in_ECX == (byte *)0x0) {
    return 0;
  }
  param_1 = ~param_1;
  if (7 < in_EDX) {
    uVar2 = in_EDX >> 3;
    do {
      uVar1 = param_1 >> 8 ^ *(uint *)(&DAT_00def7e0 + ((*in_ECX ^ param_1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00def7e0 + ((in_ECX[1] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00def7e0 + ((in_ECX[2] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00def7e0 + ((in_ECX[3] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00def7e0 + ((in_ECX[4] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00def7e0 + ((in_ECX[5] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00def7e0 + ((in_ECX[6] ^ uVar1) & 0xff) * 4);
      param_1 = uVar1 >> 8 ^ *(uint *)(&DAT_00def7e0 + ((in_ECX[7] ^ uVar1) & 0xff) * 4);
      in_ECX = in_ECX + 8;
      in_EDX = in_EDX - 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  for (; in_EDX != 0; in_EDX = in_EDX - 1) {
    param_1 = param_1 >> 8 ^ *(uint *)(&DAT_00def7e0 + ((*in_ECX ^ param_1) & 0xff) * 4);
    in_ECX = in_ECX + 1;
  }
  return ~param_1;
}

