// FUN_00b2be00 @ 00b2be00 body=[[00b2be00, 00b2c3ab]]


void FUN_00b2be00(int *param_1,uint *param_2,code *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint local_74;
  int local_70;
  uint local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint *local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  code *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  byte local_19;
  byte abStack_18 [16];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_20 = param_2;
  local_30 = param_3;
  local_3c = 0;
  local_40 = 0;
  iVar3 = FUN_00b2b7e0(param_1,&local_48);
  puVar9 = local_48;
  if (iVar3 == 0) {
    if (((local_44 != 0) || ((uint *)0x7fffffff < local_48)) || ((uint *)0x3ffffff < local_48)) {
LAB_00b2be5d:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    *param_2 = (uint)local_48;
    if (local_48 == (uint *)0x0) {
      param_2[1] = 0;
    }
    else {
      uVar4 = (*local_30)((int)local_48 * 0x18);
      param_2[1] = uVar4;
      if (uVar4 == 0) goto LAB_00b2bffc;
    }
    if (puVar9 != (uint *)0x0) {
      iVar3 = 0;
      local_28 = local_48;
      do {
        FUN_00b2f6a0(param_2[1] + iVar3);
        iVar3 = iVar3 + 0x18;
        local_28 = (uint *)((int)local_28 - 1);
      } while (local_28 != (uint *)0x0);
    }
    local_24 = (uint *)0x0;
    if (local_48 != (uint *)0x0) {
      local_28 = (uint *)0x0;
      do {
        local_2c = (uint *)(param_2[1] + (int)local_28);
        if (param_1[1] == 0) {
LAB_00b2c1bf:
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        iVar3 = param_1[1] + -1;
        param_1[1] = iVar3;
        local_19 = *(byte *)*param_1;
        pbVar6 = (byte *)*param_1 + 1;
        uVar4 = local_19 & 0xf;
        *param_1 = (int)pbVar6;
        uVar7 = 0;
        if ((local_19 & 0xf) != 0) {
          do {
            if (iVar3 == 0) goto LAB_00b2c1bf;
            iVar3 = iVar3 + -1;
            param_1[1] = iVar3;
            abStack_18[uVar7] = *pbVar6;
            pbVar6 = pbVar6 + 1;
            uVar7 = uVar7 + 1;
            *param_1 = (int)pbVar6;
          } while (uVar7 < uVar4);
        }
        if (8 < uVar4) goto LAB_00b2be5d;
        local_2c[2] = 0;
        local_2c[3] = 0;
        if ((local_19 & 0xf) != 0) {
          do {
            local_54 = uVar4;
            uVar10 = __allshl();
            local_2c[2] = local_2c[2] | (uint)uVar10;
            local_2c[3] = local_2c[3] | (uint)((ulonglong)uVar10 >> 0x20);
            uVar4 = local_54 - 1;
          } while (local_54 - 1 != 0);
          local_54 = 0;
        }
        bVar1 = local_19;
        if ((local_19 & 0x10) == 0) {
          *local_2c = 1;
          local_2c[1] = 1;
          puVar9 = local_2c;
        }
        else {
          iVar3 = FUN_00b2b7e0(param_1,&local_6c);
          puVar9 = local_2c;
          if (iVar3 != 0) goto LAB_00b2c32c;
          if (((local_68 != 0) || (0x7fffffff < local_6c)) || (0x3ffffff < local_6c))
          goto LAB_00b2be5d;
          *local_2c = local_6c;
          iVar3 = FUN_00b2b7e0(param_1,&local_74);
          if (iVar3 != 0) goto LAB_00b2c32c;
          if (((local_70 != 0) || (0x7fffffff < local_74)) || (0x3ffffff < local_74))
          goto LAB_00b2be5d;
          puVar9[1] = local_74;
        }
        param_2 = local_20;
        if ((bVar1 & 0x20) != 0) {
          local_64 = 0;
          local_60 = 0;
          iVar3 = FUN_00b2b7e0(param_1,&local_64);
          uVar2 = local_64;
          if (iVar3 != 0) goto LAB_00b2c32c;
          iVar3 = FUN_00b2f980(puVar9 + 4,local_64,local_30);
          if (iVar3 == 0) goto LAB_00b2bffc;
          iVar3 = FUN_00b2b750(param_1,puVar9[5],uVar2);
          param_2 = local_20;
          bVar1 = local_19;
          if (iVar3 != 0) goto LAB_00b2c32c;
        }
        while (local_20 = param_2, (char)bVar1 < '\0') {
          if (param_1[1] == 0) goto LAB_00b2c1bf;
          uVar7 = param_1[1] - 1;
          param_1[1] = uVar7;
          bVar1 = *(byte *)*param_1;
          pbVar6 = (byte *)*param_1 + 1;
          uVar4 = (uint)(bVar1 & 0xf);
          *param_1 = (int)pbVar6;
          if (uVar7 < uVar4) goto LAB_00b2c1bf;
          param_1[1] = uVar7 - uVar4;
          *param_1 = (int)(pbVar6 + uVar4);
          if ((bVar1 & 0x10) != 0) {
            iVar3 = FUN_00b2b7e0(param_1,&local_50);
            if (iVar3 != 0) goto LAB_00b2c32c;
            if (((local_4c != 0) || (0x7fffffff < local_50)) || (0x3ffffff < local_50))
            goto LAB_00b2be5d;
            iVar3 = FUN_00b2b7e0(param_1,&local_38);
            if (iVar3 != 0) goto LAB_00b2c32c;
            if (((local_34 != 0) || (0x7fffffff < local_38)) || (0x3ffffff < local_38))
            goto LAB_00b2be5d;
          }
          param_2 = local_20;
          if ((bVar1 & 0x20) != 0) {
            local_5c = 0;
            local_58 = 0;
            iVar3 = FUN_00b2b7e0(param_1,&local_5c);
            if (iVar3 != 0) goto LAB_00b2c32c;
            if ((local_58 != 0) || ((uint)param_1[1] < local_5c)) goto LAB_00b2c1bf;
            *param_1 = *param_1 + local_5c;
            param_1[1] = param_1[1] - local_5c;
            param_2 = local_20;
          }
        }
        local_3c = local_3c + *local_2c;
        local_40 = local_40 + local_2c[1];
        local_28 = local_28 + 6;
        local_24 = (uint *)((int)local_24 + 1);
      } while (local_24 < local_48);
    }
    puVar9 = local_20;
    puVar8 = (uint *)(local_40 - 1);
    local_20[2] = (uint)puVar8;
    local_24 = puVar8;
    if (puVar8 == (uint *)0x0) {
      local_20[3] = 0;
    }
    else {
      uVar4 = (*local_30)((int)puVar8 * 8);
      puVar9[3] = uVar4;
      if (uVar4 == 0) goto LAB_00b2bffc;
    }
    puVar9 = (uint *)0x0;
    if (puVar8 != (uint *)0x0) {
      do {
        puVar8 = (uint *)(local_20[3] + (int)puVar9 * 8);
        iVar3 = FUN_00b2b7e0(param_1,&local_38);
        if (iVar3 != 0) goto LAB_00b2c32c;
        if (((local_34 != 0) || (0x7fffffff < local_38)) || (0x3ffffff < local_38))
        goto LAB_00b2be5d;
        *puVar8 = local_38;
        iVar3 = FUN_00b2b7e0(param_1,&local_50);
        if (iVar3 != 0) goto LAB_00b2c32c;
        if (((local_4c != 0) || (0x7fffffff < local_50)) || (0x3ffffff < local_50))
        goto LAB_00b2be5d;
        puVar9 = (uint *)((int)puVar9 + 1);
        puVar8[1] = local_50;
      } while (puVar9 < local_24);
    }
    uVar4 = local_3c;
    uVar7 = local_3c - (int)local_24;
    local_20[4] = uVar7;
    if (uVar7 == 0) {
      local_20[5] = 0;
    }
    else {
      uVar5 = (*local_30)(uVar7 * 4);
      local_20[5] = uVar5;
      if (uVar5 == 0) {
LAB_00b2bffc:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (uVar7 == 1) {
        uVar7 = 0;
        if (uVar4 != 0) {
          do {
            iVar3 = FUN_00b2f7d0(local_20,uVar7);
            if (iVar3 < 0) {
              *(uint *)local_20[5] = uVar7;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar4);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        goto LAB_00b2c32c;
      }
    }
    uVar4 = 0;
    if (uVar7 != 0) {
      do {
        local_24 = (uint *)(local_20[5] + uVar4 * 4);
        iVar3 = FUN_00b2b7e0(param_1,&local_38);
        if (iVar3 != 0) break;
        if (((local_34 != 0) || (0x7fffffff < local_38)) || (0x3ffffff < local_38))
        goto LAB_00b2be5d;
        uVar4 = uVar4 + 1;
        *local_24 = local_38;
      } while (uVar4 < uVar7);
    }
  }
LAB_00b2c32c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

