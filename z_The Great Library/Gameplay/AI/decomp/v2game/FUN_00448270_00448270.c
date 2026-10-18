// FUN_00448270 @ 00448270 body=[[00448270, 004482e7]]


void FUN_00448270(void)

{
  undefined1 *in_EAX;
  char *pcVar1;
  byte *pbVar2;
  uint in_EDX;
  char *unaff_EDI;
  
  *in_EAX = 0x25;
  pcVar1 = in_EAX + 1;
  if ((in_EDX & 0x20) != 0) {
    *pcVar1 = '+';
    pcVar1 = in_EAX + 2;
  }
  if ((in_EDX & 8) != 0) {
    *pcVar1 = '#';
    pcVar1 = pcVar1 + 1;
  }
  if (*unaff_EDI == 'L') {
    pcVar1[0] = 'I';
    pcVar1[1] = '6';
    pcVar1[2] = '4';
    pbVar2 = (byte *)(pcVar1 + 3);
  }
  else {
    *pcVar1 = *unaff_EDI;
    pbVar2 = (byte *)(pcVar1 + 1);
  }
  if ((in_EDX & 0xe00) == 0x400) {
    *pbVar2 = 0x6f;
    pbVar2[1] = 0;
    return;
  }
  if ((in_EDX & 0xe00) != 0x800) {
    *pbVar2 = unaff_EDI[1];
    pbVar2[1] = 0;
    return;
  }
  *pbVar2 = ~((char)in_EDX * '\b') & 0x20U | 0x58;
  pbVar2[1] = 0;
  return;
}

