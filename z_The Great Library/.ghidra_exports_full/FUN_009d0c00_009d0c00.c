// FUN_009d0c00 @ 009d0c00 body=[[009d0c00, 009d0c77]]


int FUN_009d0c00(void)

{
  int in_EAX;
  int in_ECX;
  
  if (in_EAX < 0x9f) {
    if (in_EAX == 0x9e) {
      return in_ECX + 0xb0;
    }
    switch(in_EAX) {
    case 0x2e:
      return in_ECX + 0xa8;
    case 0x4b:
      return in_ECX + 0xa0;
    case 0x84:
      return in_ECX + 0x68;
    case 0x8a:
      return in_ECX + 0x124;
    case 0x99:
switchD_009d0c18_caseD_99:
      return in_ECX + 0x84;
    }
  }
  else {
    switch(in_EAX) {
    case 0x9f:
      return in_ECX + 0xcc;
    case 0xa3:
      return in_ECX + 0xe8;
    case 0xa4:
      return in_ECX + 0x104;
    case 0x167:
      goto switchD_009d0c18_caseD_99;
    }
  }
  return 0;
}

