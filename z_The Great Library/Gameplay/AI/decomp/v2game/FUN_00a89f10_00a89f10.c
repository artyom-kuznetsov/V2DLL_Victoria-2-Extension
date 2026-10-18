// FUN_00a89f10 @ 00a89f10 body=[[00a89f10, 00a89f65]]


undefined4 FUN_00a89f10(void)

{
  uint uVar1;
  int in_EAX;
  uint unaff_ESI;
  
  uVar1 = *(uint *)(in_EAX + 0x7c);
  if (*(uint *)(in_EAX + 0x84) < uVar1) {
    if (unaff_ESI < uVar1) {
      *(int *)(in_EAX + 0x60) = *(int *)(in_EAX + 0x60) + *(int *)(in_EAX + 0x70);
      if (*(uint *)(in_EAX + 100) < *(uint *)(in_EAX + 0x60)) {
        *(uint *)(in_EAX + 0x60) = *(uint *)(in_EAX + 100);
      }
      return 1;
    }
    if (uVar1 + *(uint *)(in_EAX + 0x84) * 2 < unaff_ESI) {
      if (*(uint *)(in_EAX + 0x74) < *(uint *)(in_EAX + 0x60)) {
        *(uint *)(in_EAX + 0x60) = *(uint *)(in_EAX + 0x60) - *(uint *)(in_EAX + 0x74);
        return 0xffffffff;
      }
      *(undefined4 *)(in_EAX + 0x60) = 0;
      return 0xffffffff;
    }
  }
  else {
    *(undefined4 *)(in_EAX + 0x60) = *(undefined4 *)(in_EAX + 100);
  }
  return 0;
}

