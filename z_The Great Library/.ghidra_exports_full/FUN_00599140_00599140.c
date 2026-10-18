// FUN_00599140 @ 00599140 body=[[00599140, 005991e5]]


void FUN_00599140(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_14;
  
  local_14 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) & 0xfffffffcU)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x6c) + local_14 * 4);
      if (param_1 == 0) {
LAB_005991b4:
        if ((*(int *)(iVar1 + 0x5c) != 5) && (*(int *)(iVar1 + 0x5c) != 6)) {
          FUN_00596290(iVar1);
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
          if (*(int *)(iVar2 + 0x74) == param_1) goto LAB_005991b4;
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2);
  }
  return;
}

