// FUN_009b7910 @ 009b7910 body=[[009b7910, 009b7940]]


int FUN_009b7910(void)

{
  uint uVar1;
  uint uVar2;
  uint *in_EDX;
  
  uVar1 = *in_EDX * 0x343fd + 0x269ec3;
  uVar2 = uVar1 * 0x343fd + 0x269ec3;
  *in_EDX = uVar2;
  return (uVar2 >> 0x10 & 0x7fff) * (uVar1 >> 0x10 & 0x7fff);
}

