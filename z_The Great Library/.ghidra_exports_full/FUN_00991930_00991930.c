// FUN_00991930 @ 00991930 body=[[00991930, 00991956]]


undefined4 FUN_00991930(void)

{
  char *in_EAX;
  int iVar1;
  
  if (0xf < *(uint *)(in_EAX + 0x14)) {
    in_EAX = *(char **)in_EAX;
  }
  if ((in_EAX != (char *)0x0) && (*in_EAX != '\0')) {
    iVar1 = PHYSFS_exists(in_EAX);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

