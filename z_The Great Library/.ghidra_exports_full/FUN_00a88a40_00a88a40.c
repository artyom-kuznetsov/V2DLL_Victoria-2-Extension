// FUN_00a88a40 @ 00a88a40 body=[[00a88a40, 00a88bd2]]


void FUN_00a88a40(int param_1)

{
  uint *puVar1;
  int iVar2;
  int in_EAX;
  u_long uVar3;
  u_long uVar4;
  u_long uVar5;
  u_long uVar6;
  u_long uVar7;
  size_t _Size;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  
  if (((uint)*(byte *)(in_EAX + 1) < *(uint *)(param_1 + 0x20)) && (*(int *)(param_1 + 0x18) == 4))
  {
    uVar3 = ntohl(*(u_long *)(in_EAX + 0xc));
    uVar4 = ntohl(*(u_long *)(in_EAX + 0x14));
    uVar5 = ntohl(*(u_long *)(in_EAX + 0x10));
    uVar6 = ntohl(*(u_long *)(in_EAX + 0x1c));
    uVar7 = ntohl(*(u_long *)(in_EAX + 0x18));
    _Size = *(int *)(in_EAX + 4) - 0x20;
    if ((uVar6 < uVar7) &&
       (((_Size + uVar6 <= uVar7 && (uVar4 < uVar5)) &&
        (iVar8 = (uint)*(byte *)(in_EAX + 1) * 0x20 + *(int *)(param_1 + 0x1c),
        *(uint *)(iVar8 + 8) < uVar3)))) {
      for (iVar2 = *(int *)(iVar8 + 0x14);
          (iVar2 != iVar8 + 0x10 &&
          ((param_1 = iVar2, *(char *)(iVar2 + 0x10) != '\b' || (*(u_long *)(iVar2 + 0x1c) != uVar3)
           ))); iVar2 = *(int *)(iVar2 + 4)) {
      }
      if (iVar2 == iVar8 + 0x10) {
        uVar9 = FUN_00a89eb0(0,uVar7,1,uVar5);
        param_1 = FUN_00a8a680(uVar9);
      }
      else {
        if (uVar7 != *(u_long *)(*(int *)(param_1 + 0x48) + 0xc)) {
          return;
        }
        if (uVar5 != *(u_long *)(param_1 + 0x3c)) {
          return;
        }
      }
      puVar1 = (uint *)(*(int *)(param_1 + 0x44) + (uVar4 >> 5) * 4);
      uVar10 = 1 << ((byte)uVar4 & 0x1f);
      if ((*puVar1 & uVar10) == 0) {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        *puVar1 = *puVar1 | uVar10;
        uVar10 = *(uint *)(*(int *)(param_1 + 0x48) + 0xc);
        if (uVar10 < _Size + uVar6) {
          _Size = uVar10 - uVar6;
        }
        FID_conflict__memcpy
                  ((void *)(*(int *)(*(int *)(param_1 + 0x48) + 8) + uVar6),(void *)(in_EAX + 0x20),
                   _Size);
      }
    }
  }
  return;
}

