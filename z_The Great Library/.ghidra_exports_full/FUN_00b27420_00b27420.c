// FUN_00b27420 @ 00b27420 body=[[00b27420, 00b27454]]


undefined4 FUN_00b27420(void)

{
  uint in_EAX;
  int in_EDX;
  
  switch(*(undefined1 *)(in_EDX + 0x11)) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 6:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x12:
    break;
  default:
    if ((*(int *)(in_EDX + 0x20) != 0) && ((in_EAX >> 0x10 & 0xf000) == 0xa000)) {
      return 1;
    }
  }
  return 0;
}

