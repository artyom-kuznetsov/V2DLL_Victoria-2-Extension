// FUN_00a16a40 @ 00a16a40 body=[[00a16a40, 00a16a8a]]


char FUN_00a16a40(void)

{
  byte bVar1;
  byte *in_EAX;
  char *pcVar2;
  bool bVar3;
  
  if (0xf < *(uint *)(in_EAX + 0x14)) {
    in_EAX = *(byte **)in_EAX;
  }
  pcVar2 = "DIPLOMACY_TOURNY";
  while( true ) {
    bVar1 = *in_EAX;
    bVar3 = bVar1 < (byte)*pcVar2;
    if (bVar1 != *pcVar2) break;
    if (bVar1 == 0) {
      return '\x03';
    }
    bVar1 = in_EAX[1];
    bVar3 = bVar1 < (byte)pcVar2[1];
    if (bVar1 != pcVar2[1]) break;
    in_EAX = in_EAX + 2;
    pcVar2 = pcVar2 + 2;
    if (bVar1 == 0) {
      return '\x03';
    }
  }
  return (1 - bVar3 == (uint)(bVar3 != 0)) * '\x02' + '\x01';
}

