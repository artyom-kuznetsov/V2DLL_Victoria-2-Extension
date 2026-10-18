// FUN_00a8b2e0 @ 00a8b2e0 body=[[00a8b2e0, 00a8b35a]]


int FUN_00a8b2e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined2 local_1c;
  u_short local_1a;
  undefined4 local_18;
  int local_c [2];
  
  if (in_EAX != (undefined4 *)0x0) {
    local_1c = 2;
    local_1a = htons(*(u_short *)(in_EAX + 1));
    local_18 = *in_EAX;
  }
  iVar1 = WSASendTo(param_1,param_2,param_3,local_c,0,
                    -(uint)(in_EAX != (undefined4 *)0x0) & (uint)&local_1c,
                    -(in_EAX != (undefined4 *)0x0) & 0x10,0,0);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    return -(uint)(iVar1 != 0x2733);
  }
  return local_c[0];
}

