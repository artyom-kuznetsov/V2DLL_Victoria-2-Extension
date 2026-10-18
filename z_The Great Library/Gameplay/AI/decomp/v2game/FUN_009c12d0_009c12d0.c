// FUN_009c12d0 @ 009c12d0 body=[[009c12d0, 009c1335]]


undefined4 FUN_009c12d0(void)

{
  char cVar1;
  char *in_EAX;
  int iVar2;
  undefined4 local_c;
  
  LOCK();
  cVar1 = *in_EAX;
  if (cVar1 == '\0') {
    *in_EAX = '\x01';
    cVar1 = '\0';
  }
  UNLOCK();
  if (cVar1 != '\0') {
    iVar2 = 1;
    local_c = 1;
    do {
      if (iVar2 < 0x11) {
        do {
          local_c = local_c + -1;
        } while (local_c != 0);
        iVar2 = iVar2 * 2;
        local_c = iVar2;
      }
      else {
        SwitchToThread();
      }
      LOCK();
      cVar1 = *in_EAX;
      if (cVar1 == '\0') {
        *in_EAX = '\x01';
        cVar1 = '\0';
      }
      UNLOCK();
    } while (cVar1 != '\0');
  }
  return 0;
}

