// FUN_00618410 @ 00618410 body=[[00618410, 006184e2] [006184e6, 0061852a] [00618530, 006185a5] [006185a9, 006186c0] [006186c4, 006186e9]]


undefined1 * FUN_00618410(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  char local_6c [32];
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_30;
  int local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00bb61e1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_20 = 1;
  pbVar3 = (byte *)(**(code **)(*param_2 + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar7 = "AgreeButton";
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_006184a4:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_006184a9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_006184a4;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_006184a9:
  if (iVar4 == 0) {
    uVar5 = FUN_00911be0(*(undefined4 *)(local_14 + 0x6c),local_4c);
    local_8 = 1;
    FUN_00408ed0(uVar5,0,0xffffffff);
    if (local_38 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_24 = (int *)(DAT_012588e8 + 0xbe0);
  local_28 = *(int *)(DAT_012588e8 + 0xbe4) - *(int *)(DAT_012588e8 + 0xbe0) >> 2;
  local_18 = 0;
  if (0 < local_28) {
    do {
      local_1c = *(undefined4 *)(*local_24 + local_18 * 4);
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      local_8 = 2;
      pcVar6 = __itoa(local_18,local_6c,10);
      pcVar7 = pcVar6;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      FUN_00409350(pcVar6,(int)pcVar7 - (int)(pcVar6 + 1));
      local_8 = 3;
      iVar4 = (**(code **)(**(int **)(local_14 + 4) + 0x6c))(local_4c);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      cVar2 = (**(code **)(*(int *)(iVar4 + 0x18) + 0x94))(param_2);
      if (cVar2 != '\0') {
        pbVar3 = (byte *)(**(code **)(*param_2 + 0x44))();
        if (0xf < *(uint *)(pbVar3 + 0x14)) {
          pbVar3 = *(byte **)pbVar3;
        }
        pcVar7 = "country_discredited";
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_00618605:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0061860a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_00618605;
          pbVar3 = pbVar3 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0061860a:
        if (iVar4 == 0) {
          local_30 = *(undefined4 *)(*(int *)(local_14 + 0x6c) + 0x10);
          uVar5 = FUN_00931270();
          local_8 = 4;
        }
        else {
          pbVar3 = (byte *)(**(code **)(*param_2 + 0x44))();
          if (0xf < *(uint *)(pbVar3 + 0x14)) {
            pbVar3 = *(byte **)pbVar3;
          }
          pcVar7 = "country_banned_embassy";
          do {
            bVar1 = *pbVar3;
            bVar8 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_00618670:
              iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_00618675;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar8 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_00618670;
            pbVar3 = pbVar3 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00618675:
          if (iVar4 != 0) goto LAB_006186c4;
          local_30 = *(undefined4 *)(*(int *)(local_14 + 0x6c) + 0x10);
          uVar5 = FUN_00931400();
          local_8 = 5;
        }
        FUN_00408ed0(uVar5,0,0xffffffff);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_4c[0]);
        }
      }
LAB_006186c4:
      local_18 = local_18 + 1;
    } while (local_18 < local_28);
  }
  ExceptionList = local_10;
  return param_1;
}

