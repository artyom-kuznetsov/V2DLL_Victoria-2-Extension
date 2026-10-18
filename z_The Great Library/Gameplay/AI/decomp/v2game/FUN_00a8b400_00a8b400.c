// FUN_00a8b400 @ 00a8b400 body=[[00a8b400, 00a8b4bd]]


undefined4 FUN_00a8b400(void)

{
  int iVar1;
  uint in_ECX;
  uint *unaff_ESI;
  SOCKET unaff_EDI;
  uint local_21c;
  uint local_114;
  timeval local_c;
  
  local_c.tv_sec = in_ECX / 1000;
  local_c.tv_usec = (in_ECX % 1000) * 1000;
  local_114 = (uint)((*unaff_ESI & 1) != 0);
  local_21c = (uint)((*unaff_ESI & 2) != 0);
  iVar1 = select(unaff_EDI + 1,(fd_set *)&local_21c,(fd_set *)&local_114,(fd_set *)0x0,&local_c);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  *unaff_ESI = 0;
  if (iVar1 != 0) {
    iVar1 = __WSAFDIsSet(unaff_EDI,(fd_set *)&local_114);
    if (iVar1 != 0) {
      *unaff_ESI = *unaff_ESI | 1;
    }
    iVar1 = __WSAFDIsSet(unaff_EDI,(fd_set *)&local_21c);
    if (iVar1 != 0) {
      *unaff_ESI = *unaff_ESI | 2;
    }
  }
  return 0;
}

