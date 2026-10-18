// FUN_00969bd0 @ 00969bd0 body=[[00969bd0, 00969ece]]


void FUN_00969bd0(uint param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  int in_EDX;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int local_18;
  uint local_14;
  int *local_c;
  uint *local_8;
  
  uVar9 = DAT_01258a1c;
  uVar5 = 0;
  if (DAT_01258a1c != 0) {
    do {
      piVar8 = (int *)(*(int *)(in_ECX + 0x44) + uVar5 * 4);
      *piVar8 = *piVar8 + *(int *)(*(int *)(in_EDX + 0x44) + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar9);
  }
  uVar9 = DAT_01258a20;
  uVar5 = 0;
  if (DAT_01258a20 != 0) {
    do {
      piVar8 = (int *)(*(int *)(in_ECX + 0x48) + uVar5 * 4);
      *piVar8 = *piVar8 + *(int *)(*(int *)(in_EDX + 0x48) + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar9);
  }
  uVar9 = DAT_01258a24;
  uVar5 = 0;
  if (DAT_01258a24 != 0) {
    do {
      piVar8 = (int *)(*(int *)(in_ECX + 0x4c) + uVar5 * 4);
      *piVar8 = *piVar8 + *(int *)(*(int *)(in_EDX + 0x4c) + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar9);
  }
  local_c = (int *)(in_EDX + 0xdc);
  local_8 = (uint *)(in_EDX + 0x80);
  iVar6 = in_EDX - in_ECX;
  puVar7 = (uint *)(in_ECX + 0x68);
  piVar8 = (int *)(in_ECX + 0x2c);
  local_18 = 3;
  do {
    local_14 = 0;
    if (DAT_01258a14 != 0) {
      do {
        piVar2 = (int *)(*piVar8 + local_14 * 4);
        *piVar2 = *piVar2 + *(int *)(*(int *)(iVar6 + (int)piVar8) + local_14 * 4);
        local_14 = local_14 + 1;
      } while (local_14 < DAT_01258a14);
    }
    local_14 = 0;
    if (DAT_01258a18 != 0) {
      do {
        piVar2 = (int *)(piVar8[3] + local_14 * 4);
        *piVar2 = *piVar2 + *(int *)(local_c[-0x29] + local_14 * 4);
        local_14 = local_14 + 1;
      } while (local_14 < DAT_01258a18);
    }
    uVar5 = *(uint *)(iVar6 + (int)puVar7);
    uVar9 = *puVar7;
    *puVar7 = *puVar7 + uVar5;
    puVar7[1] = puVar7[1] + *(int *)(iVar6 + 4 + (int)puVar7) + (uint)CARRY4(uVar9,uVar5);
    uVar5 = *local_8;
    puVar1 = puVar7 + 6;
    uVar9 = *puVar1;
    *puVar1 = *puVar1 + uVar5;
    puVar7[7] = puVar7[7] + local_8[1] + (uint)CARRY4(uVar9,uVar5);
    piVar8[0x2c] = piVar8[0x2c] + *local_c;
    local_8 = local_8 + 2;
    local_c = local_c + 1;
    puVar7 = puVar7 + 2;
    piVar8 = piVar8 + 1;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  uVar9 = 0;
  if (param_1 != 0) {
    iVar6 = 0;
    do {
      piVar8 = (int *)(*(int *)(in_ECX + 0x54) + uVar9 * 4);
      *piVar8 = *piVar8 + *(int *)(*(int *)(in_EDX + 0x54) + uVar9 * 4);
      piVar8 = (int *)(*(int *)(in_ECX + 0x50) + uVar9 * 4);
      *piVar8 = *piVar8 + *(int *)(*(int *)(in_EDX + 0x50) + uVar9 * 4);
      piVar8 = (int *)(*(int *)(in_ECX + 0x58) + uVar9 * 4);
      *piVar8 = *piVar8 + *(int *)(*(int *)(in_EDX + 0x58) + uVar9 * 4);
      puVar7 = (uint *)(*(int *)(in_ECX + 0xcc) + uVar9 * 8);
      iVar3 = *(int *)(in_EDX + 0xcc);
      uVar4 = *(uint *)(iVar3 + uVar9 * 8);
      uVar5 = *puVar7;
      *puVar7 = *puVar7 + uVar4;
      puVar7[1] = puVar7[1] + *(int *)(iVar3 + 4 + uVar9 * 8) + (uint)CARRY4(uVar5,uVar4);
      piVar8 = (int *)(*(int *)(in_ECX + 0xe8) + uVar9 * 4);
      *piVar8 = *piVar8 + *(int *)(*(int *)(in_EDX + 0xe8) + uVar9 * 4);
      piVar8 = (int *)(*(int *)(in_ECX + 0x5c) + uVar9 * 4);
      *piVar8 = *piVar8 + *(int *)(*(int *)(in_EDX + 0x5c) + uVar9 * 4);
      piVar8 = *(int **)(iVar6 + *(int *)(in_ECX + 0xbc));
      *piVar8 = *piVar8 + **(int **)(iVar6 + *(int *)(in_EDX + 0xbc));
      piVar8 = (int *)(*(int *)(iVar6 + *(int *)(in_ECX + 0xbc)) + 4);
      *piVar8 = *piVar8 + *(int *)(*(int *)(iVar6 + *(int *)(in_EDX + 0xbc)) + 4);
      piVar8 = (int *)(*(int *)(iVar6 + *(int *)(in_ECX + 0xbc)) + 8);
      *piVar8 = *piVar8 + *(int *)(*(int *)(iVar6 + *(int *)(in_EDX + 0xbc)) + 8);
      piVar8 = (int *)(*(int *)(iVar6 + *(int *)(in_ECX + 0xbc)) + 0xc);
      *piVar8 = *piVar8 + *(int *)(*(int *)(iVar6 + *(int *)(in_EDX + 0xbc)) + 0xc);
      piVar8 = (int *)(*(int *)(iVar6 + *(int *)(in_ECX + 0xbc)) + 0x10);
      *piVar8 = *piVar8 + *(int *)(*(int *)(iVar6 + *(int *)(in_EDX + 0xbc)) + 0x10);
      piVar8 = (int *)(*(int *)(iVar6 + *(int *)(in_ECX + 0xbc)) + 0x14);
      *piVar8 = *piVar8 + *(int *)(*(int *)(iVar6 + *(int *)(in_EDX + 0xbc)) + 0x14);
      piVar8 = (int *)(*(int *)(iVar6 + *(int *)(in_ECX + 0xbc)) + 0x18);
      *piVar8 = *piVar8 + *(int *)(*(int *)(iVar6 + *(int *)(in_EDX + 0xbc)) + 0x18);
      uVar9 = uVar9 + 1;
      iVar6 = iVar6 + 0x10;
    } while (uVar9 < param_1);
  }
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + *(int *)(in_EDX + 0xc);
  *(int *)(in_ECX + 0x98) = *(int *)(in_ECX + 0x98) + *(int *)(in_EDX + 0x98);
  *(int *)(in_ECX + 0x9c) = *(int *)(in_ECX + 0x9c) + *(int *)(in_EDX + 0x9c);
  *(int *)(in_ECX + 0xa0) = *(int *)(in_ECX + 0xa0) + *(int *)(in_EDX + 0xa0);
  *(int *)(in_ECX + 0xa4) = *(int *)(in_ECX + 0xa4) + *(int *)(in_EDX + 0xa4);
  *(int *)(in_ECX + 0xa8) = *(int *)(in_ECX + 0xa8) + *(int *)(in_EDX + 0xa8);
  *(int *)(in_ECX + 0xac) = *(int *)(in_ECX + 0xac) + *(int *)(in_EDX + 0xac);
  *(int *)(in_ECX + 0xb0) = *(int *)(in_ECX + 0xb0) + *(int *)(in_EDX + 0xb0);
  *(int *)(in_ECX + 0xb4) = *(int *)(in_ECX + 0xb4) + *(int *)(in_EDX + 0xb4);
  *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + *(int *)(in_EDX + 0xb8);
  return;
}

