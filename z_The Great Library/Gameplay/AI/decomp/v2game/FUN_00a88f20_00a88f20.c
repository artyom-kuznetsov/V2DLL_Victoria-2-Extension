// FUN_00a88f20 @ 00a88f20 body=[[00a88f20, 00a88ff9] [00a89000, 00a89223]]


undefined4 FUN_00a88f20(int param_1,int *param_2)

{
  uint *puVar1;
  u_long *puVar2;
  ushort uVar3;
  u_short uVar4;
  u_long uVar5;
  u_long uVar6;
  int iVar7;
  u_long *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint local_10;
  u_long *local_c;
  
  if (*(uint *)(param_1 + 0x17c8) < 0xc) {
    return 0;
  }
  uVar4 = ntohs(*(u_short *)(param_1 + 0x7c8));
  *(u_short *)(param_1 + 0x7c8) = uVar4;
  uVar5 = ntohl(*(u_long *)(param_1 + 0x7cc));
  *(u_long *)(param_1 + 0x7cc) = uVar5;
  uVar3 = *(ushort *)(param_1 + 0x7c8);
  if (uVar3 == 0xffff) {
    iVar9 = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x24) <= (uint)uVar3) {
      return 0;
    }
    iVar9 = (uint)uVar3 * 0xe8 + *(int *)(param_1 + 0x20);
    if (*(int *)(iVar9 + 0x18) == 0) {
      return 0;
    }
    if (*(int *)(iVar9 + 0x18) == 7) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x7c0) != *(int *)(iVar9 + 0xc)) && (*(int *)(iVar9 + 0xc) != -1)) {
      return 0;
    }
    if (*(int *)(param_1 + 2000) != *(int *)(iVar9 + 8)) {
      return 0;
    }
    *(int *)(iVar9 + 0xc) = *(int *)(param_1 + 0x7c0);
    *(undefined2 *)(iVar9 + 0x10) = *(undefined2 *)(param_1 + 0x7c4);
    *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + *(int *)(param_1 + 0x17c8);
  }
  local_10 = (uint)*(byte *)(param_1 + 0x7cb);
  local_c = (u_long *)(param_1 + 0x7d4);
  if (local_10 != 0) {
    while ((puVar2 = (u_long *)(param_1 + 0x7c8 + *(int *)(param_1 + 0x17c8)), local_c < puVar2 &&
           (puVar8 = local_c + 3, puVar8 <= puVar2))) {
      puVar1 = local_c + 1;
      uVar5 = ntohl(local_c[1]);
      *puVar1 = uVar5;
      if ((uVar5 == 0) ||
         ((uint)((param_1 - (int)local_c) + 0x7c8 + *(int *)(param_1 + 0x17c8)) < uVar5)) break;
      local_10 = local_10 - 1;
      if ((iVar9 == 0) && ((char)*local_c != '\x02')) break;
      uVar6 = ntohl(local_c[2]);
      local_c[2] = uVar6;
      switch((char)*local_c) {
      case '\x01':
        FUN_00a88cb0(param_1,param_2,local_c);
        break;
      case '\x02':
        iVar9 = FUN_00a886d0(param_1,param_1 + 0x7c8,local_c);
        break;
      case '\x03':
        FUN_00a88e20(param_1,param_2);
        break;
      case '\x04':
        FUN_00a88c50(param_1);
        break;
      case '\x06':
        if (((0xc < *puVar1) && ((uint)*(byte *)((int)local_c + 1) < *(uint *)(iVar9 + 0x20))) &&
           (*(int *)(iVar9 + 0x18) == 4)) {
          uVar10 = 1;
          iVar7 = *puVar1 - 0xc;
LAB_00a89149:
          uVar10 = FUN_00a89eb0(puVar8,iVar7,uVar10);
          FUN_00a8a680(uVar10,0);
        }
        break;
      case '\a':
        if (((0x10 < *puVar1) && ((uint)*(byte *)((int)local_c + 1) < *(uint *)(iVar9 + 0x20))) &&
           (*(int *)(iVar9 + 0x18) == 4)) {
          uVar10 = 0;
          iVar7 = *puVar1 - 0x10;
          puVar8 = local_c + 4;
          goto LAB_00a89149;
        }
        break;
      case '\b':
        if (0x20 < *puVar1) {
          FUN_00a88a40(iVar9);
        }
        break;
      case '\t':
        FUN_00a88be0(param_1);
        break;
      case '\n':
        if (0x17 < *puVar1) {
          uVar6 = ntohl(*puVar8);
          *(u_long *)(iVar9 + 0x78) = uVar6;
          uVar6 = ntohl(local_c[4]);
          *(u_long *)(iVar9 + 0x70) = uVar6;
          uVar6 = ntohl(local_c[5]);
          *(u_long *)(iVar9 + 0x74) = uVar6;
        }
        break;
      case '\v':
        if (0x10 < *puVar1) {
          FUN_00a88990();
        }
      }
      if (((iVar9 != 0) && ((*local_c & 0x10000) != 0)) &&
         ((*(int *)(iVar9 + 0x18) != 5 &&
          ((*(int *)(iVar9 + 0x18) != 6 || ((char)*local_c == '\x04')))))) {
        FUN_00a8a4d0(iVar9,*(undefined4 *)(param_1 + 0x7cc));
      }
      local_c = (u_long *)((int)local_c + uVar5);
      if (local_10 == 0) break;
    }
  }
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    return 1;
  }
  return 0;
}

