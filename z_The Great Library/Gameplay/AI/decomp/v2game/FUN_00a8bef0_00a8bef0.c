// FUN_00a8bef0 @ 00a8bef0 body=[[00a8bef0, 00a8bfd9]]


void FUN_00a8bef0(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int local_8;
  
  bVar1 = *(byte *)(in_EAX + 0x34);
  local_8 = 0;
  if (0 < *(int *)(in_EAX + 0x38)) {
    uVar3 = *(uint *)(in_EAX + 0x260);
    do {
      uVar3 = uVar3 << 8 ^ *(uint *)(&DAT_00f065f8 + (uVar3 >> 0x18 ^ (uint)bVar1) * 4);
      local_8 = local_8 + 1;
      *(uint *)(in_EAX + 0x260) = uVar3;
    } while (local_8 < *(int *)(in_EAX + 0x38));
  }
  *(undefined1 *)(in_EAX + 0x58 + *(int *)(in_EAX + 0x34)) = 1;
  iVar2 = *(int *)(in_EAX + 0x38);
  if (iVar2 == 1) {
    *(byte *)(*(int *)(in_EAX + 0x24) + *(int *)(in_EAX + 0x44)) = bVar1;
    *(int *)(in_EAX + 0x44) = *(int *)(in_EAX + 0x44) + 1;
    return;
  }
  if (iVar2 != 2) {
    if (iVar2 != 3) {
      *(undefined1 *)(iVar2 + 0x54 + in_EAX) = 1;
      *(byte *)(*(int *)(in_EAX + 0x44) + *(int *)(in_EAX + 0x24)) = bVar1;
      *(int *)(in_EAX + 0x44) = *(int *)(in_EAX + 0x44) + 1;
      *(byte *)(*(int *)(in_EAX + 0x44) + *(int *)(in_EAX + 0x24)) = bVar1;
      *(int *)(in_EAX + 0x44) = *(int *)(in_EAX + 0x44) + 1;
      *(byte *)(*(int *)(in_EAX + 0x44) + *(int *)(in_EAX + 0x24)) = bVar1;
      *(int *)(in_EAX + 0x44) = *(int *)(in_EAX + 0x44) + 1;
      *(byte *)(*(int *)(in_EAX + 0x44) + *(int *)(in_EAX + 0x24)) = bVar1;
      *(int *)(in_EAX + 0x44) = *(int *)(in_EAX + 0x44) + 1;
      *(char *)(*(int *)(in_EAX + 0x44) + *(int *)(in_EAX + 0x24)) = *(char *)(in_EAX + 0x38) + -4;
      *(int *)(in_EAX + 0x44) = *(int *)(in_EAX + 0x44) + 1;
      return;
    }
    *(byte *)(*(int *)(in_EAX + 0x44) + *(int *)(in_EAX + 0x24)) = bVar1;
    *(int *)(in_EAX + 0x44) = *(int *)(in_EAX + 0x44) + 1;
  }
  *(byte *)(*(int *)(in_EAX + 0x44) + *(int *)(in_EAX + 0x24)) = bVar1;
  *(int *)(in_EAX + 0x44) = *(int *)(in_EAX + 0x44) + 1;
  *(byte *)(*(int *)(in_EAX + 0x44) + *(int *)(in_EAX + 0x24)) = bVar1;
  *(int *)(in_EAX + 0x44) = *(int *)(in_EAX + 0x44) + 1;
  return;
}

