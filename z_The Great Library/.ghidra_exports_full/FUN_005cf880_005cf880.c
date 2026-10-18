// FUN_005cf880 @ 005cf880 body=[[005cf880, 005cf8a3]]


void FUN_005cf880(void)

{
  int in_EAX;
  undefined1 in_CL;
  
  if (((*(char *)(in_EAX + 0xc0) == 'R') && (*(char *)(in_EAX + 0xc1) == 'E')) &&
     (*(char *)(in_EAX + 0xc2) == 'B')) {
    in_CL = 0;
  }
  *(undefined1 *)(in_EAX + 0x164) = in_CL;
  return;
}

