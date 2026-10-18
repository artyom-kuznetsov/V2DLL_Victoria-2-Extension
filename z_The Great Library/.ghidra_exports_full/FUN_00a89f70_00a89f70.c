// FUN_00a89f70 @ 00a89f70 body=[[00a89f70, 00a8a0ca]]


undefined4 FUN_00a89f70(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_ESI;
  int *piVar4;
  u_long netlong;
  undefined1 local_3c;
  byte local_3b;
  undefined1 local_3a;
  undefined4 local_38;
  u_long local_30;
  u_long local_2c;
  u_long local_28;
  u_long local_24;
  u_long local_20;
  u_long local_10;
  u_long local_c;
  u_long local_8;
  
  piVar4 = (int *)((uint)param_2 * 0x20 + *(int *)(param_1 + 0x1c));
  if ((*(int *)(param_1 + 0x18) == 4) && ((uint)param_2 < *(uint *)(param_1 + 0x20))) {
    uVar3 = *(ushort *)(param_1 + 0x94) - 0x2c;
    if (uVar3 < *(uint *)(unaff_ESI + 0xc)) {
      local_10 = htonl(((*(uint *)(unaff_ESI + 0xc) - 1) + uVar3) / uVar3);
      local_c = htonl(*piVar4 + 1);
      netlong = 0;
      *(undefined4 *)(unaff_ESI + 4) = 1;
      local_8 = 0;
      if (*(int *)(unaff_ESI + 0xc) != 0) {
        do {
          local_3b = param_2;
          local_3c = 8;
          local_3a = 1;
          local_38 = 0x20;
          local_30 = local_c;
          local_2c = local_10;
          local_28 = htonl(local_8);
          local_24 = htonl(*(u_long *)(unaff_ESI + 0xc));
          local_20 = ntohl(netlong);
          uVar2 = *(int *)(unaff_ESI + 0xc) - netlong;
          if (uVar2 < uVar3) {
            uVar3 = uVar2;
          }
          FUN_00a8a550(param_1,&local_3c);
          local_8 = local_8 + 1;
          netlong = netlong + uVar3;
        } while (netlong < *(uint *)(unaff_ESI + 0xc));
      }
      return 0;
    }
    local_3b = param_2;
    if ((*(uint *)(unaff_ESI + 4) & 1) == 0) {
      local_38 = 0x10;
      if ((*(uint *)(unaff_ESI + 4) & 2) == 0) {
        iVar1 = piVar4[1];
        local_3c = 7;
        local_3a = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0xd0);
        local_3c = 0xb;
        local_3a = 2;
      }
      local_30 = htonl(iVar1 + 1);
    }
    else {
      local_3c = 6;
      local_3a = 1;
      local_38 = 0xc;
    }
    FUN_00a8a550(param_1,&local_3c);
    return 0;
  }
  return 0xffffffff;
}

