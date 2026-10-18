// FUN_00a1d420 @ 00a1d420 body=[[00a1d420, 00a1d4f9]]


void FUN_00a1d420(int param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  uint local_8;
  
  if (*(char *)(in_ECX + 0x68) == '\0') {
    uVar2 = *(uint *)(in_ECX + 0x10) + in_EAX * 8;
    uVar3 = *(uint *)(in_ECX + 0x10) >> 3 & 0x3f;
    *(uint *)(in_ECX + 0x10) = uVar2;
    if (uVar2 < in_EAX * 8) {
      *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    }
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + (in_EAX >> 0x1d);
    local_8 = -uVar3 + 0x40;
    if (in_EAX < local_8) {
      local_8 = 0;
    }
    else {
      uVar2 = 0;
      if (local_8 != 0) {
        do {
          *(undefined1 *)(uVar3 + 0x18 + in_ECX + uVar2) = *(undefined1 *)(uVar2 + param_1);
          uVar2 = uVar2 + 1;
        } while (uVar2 < local_8);
      }
      FUN_00a1d850(in_ECX,in_ECX + 0x18);
      for (uVar2 = -uVar3 + 0x7f; uVar2 < in_EAX; uVar2 = uVar2 + 0x40) {
        FUN_00a1d850(in_ECX,param_1 + -0x3f + uVar2);
        local_8 = local_8 + 0x40;
      }
      uVar3 = 0;
    }
    uVar2 = 0;
    if (in_EAX != local_8) {
      do {
        *(undefined1 *)(uVar3 + 0x18 + in_ECX + uVar2) = *(undefined1 *)(local_8 + param_1 + uVar2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < in_EAX - local_8);
    }
    return;
  }
  uVar1 = FUN_00418e30(&DAT_00f1fb68,"MD5::update:  Can\'t update a finalized digest!");
  FUN_00401280(uVar1);
  return;
}

