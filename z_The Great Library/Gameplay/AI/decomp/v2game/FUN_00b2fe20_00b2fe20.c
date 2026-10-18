// FUN_00b2fe20 @ 00b2fe20 body=[[00b2fe20, 00b2fe85] [00b2fe90, 00b300f7] [00b30100, 00b30249] [00b30250, 00b3028c] [00b30290, 00b302cf]]


void FUN_00b2fe20(int param_1,int param_2,uint param_3,int *param_4,uint *param_5,ushort *param_6)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  ushort *puVar13;
  uint local_80;
  uint local_7c;
  uint local_78;
  ushort *local_74;
  ushort *local_70;
  ushort *local_6c;
  int local_68;
  uint local_64;
  int local_60;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  ushort auStack_48 [16];
  ushort local_28 [16];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  local_28[10] = 0;
  local_28[0xb] = 0;
  local_28[0xc] = 0;
  local_28[0xd] = 0;
  local_28[0xe] = 0;
  local_28[0xf] = 0;
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      local_28[*(ushort *)(param_2 + uVar3 * 2)] = local_28[*(ushort *)(param_2 + uVar3 * 2)] + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  uVar3 = 0xf;
  do {
    if (local_28[uVar3] != 0) break;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  local_54 = *param_5;
  if (uVar3 < *param_5) {
    local_54 = uVar3;
  }
  if (uVar3 == 0) {
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *param_5 = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_50 = 1;
  do {
    if (local_28[local_50] != 0) break;
    if (local_28[local_50 + 1] != 0) {
      local_50 = local_50 + 1;
      break;
    }
    if (local_28[local_50 + 2] != 0) {
      local_50 = local_50 + 2;
      break;
    }
    if (local_28[local_50 + 3] != 0) {
      local_50 = local_50 + 3;
      break;
    }
    if (local_28[local_50 + 4] != 0) {
      local_50 = local_50 + 4;
      break;
    }
    local_50 = local_50 + 5;
  } while (local_50 < 0x10);
  if (local_54 < local_50) {
    local_54 = local_50;
  }
  iVar12 = 1;
  uVar4 = 1;
  do {
    iVar12 = iVar12 * 2 - (uint)local_28[uVar4];
    if (iVar12 < 0) goto LAB_00b2fff9;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  if ((0 < iVar12) && ((param_1 == 0 || (uVar3 != 1)))) {
LAB_00b2fff9:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  auStack_48[1] = 0;
  uVar4 = 2;
  do {
    uVar5 = uVar4 + 2;
    *(short *)((int)auStack_48 + uVar4 + 2) =
         *(short *)((int)auStack_48 + uVar4) + *(short *)((int)local_28 + uVar4);
    uVar4 = uVar5;
  } while (uVar5 < 0x1e);
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      if (*(short *)(param_2 + uVar4 * 2) != 0) {
        param_6[auStack_48[*(ushort *)(param_2 + uVar4 * 2)]] = (ushort)uVar4;
        auStack_48[*(ushort *)(param_2 + uVar4 * 2)] =
             auStack_48[*(ushort *)(param_2 + uVar4 * 2)] + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  if (param_1 == 0) {
    local_70 = param_6;
    local_74 = param_6;
    local_68 = 0x13;
  }
  else if (param_1 == 1) {
    local_74 = (ushort *)&DAT_00de61a6;
    local_70 = (ushort *)&DAT_00de61e6;
    local_68 = 0x100;
  }
  else {
    local_74 = (ushort *)&DAT_00de6428;
    local_70 = (ushort *)&DAT_00de6468;
    local_68 = -1;
  }
  local_60 = *param_4;
  bVar7 = (byte)local_54;
  local_7c = 1 << (bVar7 & 0x1f);
  local_80 = 0;
  uVar5 = 0;
  uVar4 = local_7c - 1;
  local_78 = 0xffffffff;
  if ((param_1 == 1) && (0x5af < local_7c)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_6c = param_6;
  local_64 = local_7c;
LAB_00b30095:
  do {
    bVar11 = (byte)uVar5;
    bVar1 = (char)local_50 - bVar11;
    uVar2 = *local_6c;
    if ((int)(uint)uVar2 < local_68) {
      local_4c._0_2_ = (ushort)bVar1 << 8;
LAB_00b300d0:
      local_4c = CONCAT22(uVar2,(ushort)local_4c);
    }
    else {
      if ((int)(uint)uVar2 <= local_68) {
        local_4c = CONCAT31((uint3)bVar1,0x60);
        uVar2 = 0;
        goto LAB_00b300d0;
      }
      local_4c = CONCAT22(local_74[*local_6c],CONCAT11(bVar1,(char)local_70[*local_6c]));
    }
    iVar12 = 1 << ((char)local_50 - bVar11 & 0x1f);
    puVar8 = (undefined4 *)(local_60 + ((local_80 >> (bVar11 & 0x1f)) + local_7c) * 4);
    uVar6 = local_7c;
    do {
      puVar8 = puVar8 + -iVar12;
      uVar6 = uVar6 - iVar12;
      *puVar8 = local_4c;
    } while (uVar6 != 0);
    for (uVar6 = 1 << ((char)local_50 - 1U & 0x1f); (local_80 & uVar6) != 0; uVar6 = uVar6 >> 1) {
    }
    if (uVar6 == 0) {
      local_80 = 0;
    }
    else {
      local_80 = (uVar6 - 1 & local_80) + uVar6;
    }
    local_6c = local_6c + 1;
    puVar13 = local_28 + local_50;
    *puVar13 = *puVar13 - 1;
    if (*puVar13 == 0) {
      if (local_50 == uVar3) {
        local_4c._0_2_ = CONCAT11((char)local_50 - bVar11,0x40);
        local_4c = (uint)(ushort)local_4c;
        goto joined_r0x00b30243;
      }
      local_50 = (uint)*(ushort *)(param_2 + (uint)*local_6c * 2);
    }
  } while ((local_50 <= local_54) || (uVar6 = uVar4 & local_80, uVar6 == local_78));
  if (uVar5 == 0) {
    uVar5 = local_54;
  }
  local_60 = local_60 + local_7c * 4;
  iVar9 = local_50 - uVar5;
  uVar10 = uVar5 + iVar9;
  iVar12 = 1 << ((byte)iVar9 & 0x1f);
  if (uVar10 < uVar3) {
    puVar13 = local_28 + uVar10;
    do {
      uVar2 = *puVar13;
      if ((int)(iVar12 - (uint)uVar2) < 1) break;
      uVar10 = uVar10 + 1;
      iVar9 = iVar9 + 1;
      puVar13 = puVar13 + 1;
      iVar12 = (iVar12 - (uint)uVar2) * 2;
    } while (uVar10 < uVar3);
  }
  local_7c = 1 << ((byte)iVar9 & 0x1f);
  local_64 = local_64 + local_7c;
  if ((param_1 != 1) || (local_64 < 0x5b0)) {
    *(byte *)(*param_4 + uVar6 * 4) = (byte)iVar9;
    *(byte *)(*param_4 + 1 + uVar6 * 4) = bVar7;
    *(short *)(*param_4 + 2 + uVar6 * 4) = (short)(local_60 - *param_4 >> 2);
    local_78 = uVar6;
    goto LAB_00b30095;
  }
LAB_00b302bf:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
joined_r0x00b30243:
  if (local_80 == 0) goto LAB_00b302a3;
  if ((uVar5 != 0) && ((uVar4 & local_80) != local_78)) {
    local_60 = *param_4;
    uVar5 = 0;
    local_50 = local_54;
    local_4c._0_2_ = CONCAT11(bVar7,(undefined1)local_4c);
    local_4c = (uint)(ushort)local_4c;
  }
  *(uint *)(local_60 + (local_80 >> ((byte)uVar5 & 0x1f)) * 4) = local_4c;
  for (uVar3 = 1 << ((char)local_50 - 1U & 0x1f); (local_80 & uVar3) != 0; uVar3 = uVar3 >> 1) {
  }
  if (uVar3 == 0) goto LAB_00b302a3;
  local_80 = (local_80 & uVar3 - 1) + uVar3;
  goto joined_r0x00b30243;
LAB_00b302a3:
  *param_4 = *param_4 + local_64 * 4;
  *param_5 = local_54;
  goto LAB_00b302bf;
}

