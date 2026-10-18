// FUN_005991f0 @ 005991f0 body=[[005991f0, 0059929c]]


uint FUN_005991f0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 local_14;
  
  iVar2 = 0;
  local_14 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) & 0xfffffffcU)) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x6c) + local_14 * 4);
      if (param_1 == 0) {
LAB_00599264:
        uVar1 = *(uint *)(iVar2 + 0x5c);
        if ((uVar1 != 6) && (uVar1 != 5)) {
          return uVar1 & 0xffffff00;
        }
      }
      else {
        iVar3 = FUN_00967f50();
        if (iVar3 != 0) {
          iVar3 = DAT_01258a94;
          if (*(uint *)(iVar2 + 0xc) < 0x1269) {
            iVar3 = DAT_01258a98;
          }
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_009c1d40();
          }
          if (*(int *)(iVar3 + 0x74) == param_1) goto LAB_00599264;
        }
      }
      iVar2 = local_14 + 1;
      local_14 = iVar2;
    } while (iVar2 < *(int *)(in_ECX + 0x70) - *(int *)(in_ECX + 0x6c) >> 2);
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

