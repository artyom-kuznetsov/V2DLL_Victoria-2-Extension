// FUN_00558e40 @ 00558e40 body=[[00558e40, 00558e6c] [00558e70, 00558f39]]


void FUN_00558e40(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = in_ECX - in_EAX >> 3;
  iVar2 = local_c - (in_ECX - in_EAX >> 0x1f) >> 1;
  if (0 < iVar2) {
    local_18 = iVar2 * 2 + 2;
    local_14 = in_EAX + iVar2 * 8;
    do {
      local_2c = *(undefined4 *)(local_14 + -8);
      iVar1 = local_14 + -8;
      local_28 = *(undefined4 *)(local_14 + -4);
      iVar3 = iVar2 + -1;
      iVar2 = local_18 + -2;
      bVar4 = iVar2 == local_c;
      local_24 = iVar3;
      local_18 = iVar2;
      local_14 = iVar1;
      local_10 = iVar3;
      if (iVar2 < local_c) {
        do {
          local_20 = *(undefined4 *)(in_EAX + iVar2 * 8);
          local_1c = FUN_00445060(param_1);
          iVar1 = FUN_00445060(param_1);
          iVar3 = iVar2;
          if (local_1c < iVar1) {
            iVar3 = iVar2 + -1;
          }
          *(undefined4 *)(in_EAX + local_10 * 8) = *(undefined4 *)(in_EAX + iVar3 * 8);
          *(undefined4 *)(in_EAX + 4 + local_10 * 8) = *(undefined4 *)(in_EAX + 4 + iVar3 * 8);
          iVar2 = iVar3 * 2 + 2;
          local_10 = iVar3;
        } while (iVar2 < local_c);
        bVar4 = iVar2 == local_c;
      }
      iVar2 = local_24;
      iVar1 = iVar3;
      if (bVar4) {
        *(undefined4 *)(in_EAX + iVar3 * 8) = *(undefined4 *)(in_EAX + -8 + local_c * 8);
        *(undefined4 *)(in_EAX + 4 + iVar3 * 8) = *(undefined4 *)(in_EAX + -4 + local_c * 8);
        iVar1 = local_c + -1;
      }
      local_10 = iVar3;
      FUN_0055a640(iVar1,local_24,&local_2c,param_1);
    } while (0 < iVar2);
  }
  return;
}

