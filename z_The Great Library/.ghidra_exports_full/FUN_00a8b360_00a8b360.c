// FUN_00a8b360 @ 00a8b360 body=[[00a8b360, 00a8b3f2]]


undefined4 FUN_00a8b360(undefined4 param_1,undefined4 param_2)

{
  u_short uVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  undefined1 local_20 [2];
  u_short local_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_c = 0x10;
  local_8 = 0;
  iVar2 = WSARecvFrom(param_1,param_2,1,&local_10,&local_8,
                      -(uint)(unaff_ESI != (undefined4 *)0x0) & (uint)local_20,
                      -(uint)(unaff_ESI != (undefined4 *)0x0) & (uint)&local_c,0,0);
  if (iVar2 == -1) {
    iVar2 = WSAGetLastError();
    if ((iVar2 == 0x2733) || (iVar2 == 0x2746)) {
      return 0;
    }
  }
  else if ((local_8 & 0x8000) == 0) {
    if (unaff_ESI != (undefined4 *)0x0) {
      *unaff_ESI = CONCAT22(uStack_1a,uStack_1c);
      uVar1 = ntohs(local_1e);
      *(u_short *)(unaff_ESI + 1) = uVar1;
    }
    return local_10;
  }
  return 0xffffffff;
}

