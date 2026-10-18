// FUN_005992a0 @ 005992a0 body=[[005992a0, 00599369]]


bool FUN_005992a0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_1c = 0;
  local_14 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) & 0xfffffffcU)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x6c) + local_14 * 4);
      if (param_1 == 0) {
LAB_00599320:
        iVar1 = *(int *)(iVar1 + 0x5c);
        if ((iVar1 != 5) && (local_1c = local_1c + 1, iVar1 == 4)) {
          local_18 = local_18 + 1;
        }
      }
      else {
        iVar2 = FUN_00967f50();
        if (iVar2 != 0) {
          iVar2 = DAT_01258a94;
          if (*(uint *)(iVar1 + 0xc) < 0x1269) {
            iVar2 = DAT_01258a98;
          }
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_009c1d40();
          }
          if (*(int *)(iVar2 + 0x74) == param_1) goto LAB_00599320;
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2);
  }
  return local_18 == local_1c;
}

