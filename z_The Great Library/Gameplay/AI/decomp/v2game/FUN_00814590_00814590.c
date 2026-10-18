// FUN_00814590 @ 00814590 body=[[00814590, 00815103]]


void FUN_00814590(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  char local_a;
  char local_9;
  
  local_10 = DAT_0125870c;
  uVar9 = 0;
  local_14 = 4;
  FUN_0099e240(0);
  piVar2 = (int *)FUN_00868600(uVar9);
  iVar6 = 0;
  if ((int *)*piVar2 != (int *)0x0) {
    iVar6 = *(int *)*piVar2;
  }
  uVar3 = piVar2[2];
  if (*(uint *)(iVar6 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar6 + 8);
  }
  piVar2 = *(int **)(*(int *)(iVar6 + 4) + uVar3 * 4);
  local_38 = *piVar2;
  local_34 = piVar2[1];
  local_20 = local_38 + -1;
  local_1c = local_34 + -1;
  local_18 = local_34 + 1;
  local_24 = local_38 + 1;
  local_9 = '\0';
  iVar6 = 4;
  do {
    iVar4 = local_34;
    iVar7 = *(int *)(local_10 + 0x2134);
    bVar1 = *(byte *)(*(int *)(iVar7 + 0xc) * local_24 + *(int *)(iVar7 + 0x18) * local_34 +
                     *(int *)(iVar7 + 0x20));
    if ((iVar6 == 1) || (0x14 < (byte)(bVar1 - 2))) {
      local_2c = local_20;
      bVar1 = *(byte *)(*(int *)(iVar7 + 0xc) * local_20 + *(int *)(iVar7 + 0x18) * local_34 +
                       *(int *)(iVar7 + 0x20));
      if ((iVar6 != 0) && ((byte)(bVar1 - 2) < 0x15)) {
        iVar6 = *(int *)(local_10 + 0x2130);
        if (local_20 < *(int *)(iVar6 + 4)) {
          if (local_34 < *(int *)(iVar6 + 8)) {
            uVar3 = (uint)*(byte *)(*(int *)(iVar6 + 0xc) * local_20 +
                                    *(int *)(iVar6 + 0x18) * local_34 + *(int *)(iVar6 + 0x20));
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
        if (*(int *)(local_10 + 0x2268 + uVar3 * 4) == 0) {
LAB_008147ee:
          local_a = '\0';
        }
        else {
          if (local_20 < *(int *)(iVar6 + 4)) {
            if (local_34 < *(int *)(iVar6 + 8)) {
              uVar3 = (uint)*(byte *)(*(int *)(iVar6 + 0xc) * local_20 +
                                      *(int *)(iVar6 + 0x18) * local_34 + *(int *)(iVar6 + 0x20));
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
          if (*(char *)(*(int *)(*(int *)(local_10 + 0x2268 + uVar3 * 4) + 0xc) + 0x90) == '\0')
          goto LAB_008147ee;
          local_a = '\x01';
        }
        local_14 = 1;
        local_80 = local_20;
        if ((byte)(bVar1 - 0xc) < 0xee) {
          *param_3 = bVar1 - 0xc;
        }
        local_38 = local_38 + -1;
        local_24 = local_24 + -1;
        local_78 = bVar1 - 2;
        local_20 = local_20 + -1;
        local_74 = 0;
        piVar2 = &local_80;
        local_7c = local_34;
        goto LAB_00814702;
      }
      local_28 = local_18;
      bVar1 = *(byte *)(*(int *)(iVar7 + 0x18) * local_18 + *(int *)(iVar7 + 0xc) * local_38 +
                       *(int *)(iVar7 + 0x20));
      local_2c = local_38;
      if ((iVar6 == 3) || (0x14 < (byte)(bVar1 - 2))) {
        bVar1 = *(byte *)(*(int *)(iVar7 + 0xc) * local_38 + *(int *)(iVar7 + 0x18) * local_1c +
                         *(int *)(iVar7 + 0x20));
        local_28 = local_1c;
        if ((local_14 == 2) || (0x14 < (byte)(bVar1 - 2))) {
          iVar6 = *(int *)(local_10 + 0x2134);
          local_2c = local_38 + 1;
          if (*(char *)(*(int *)(iVar6 + 0x18) * local_34 + *(int *)(iVar6 + 0xc) * local_2c +
                       *(int *)(iVar6 + 0x20)) != '\x01') goto LAB_00814c31;
          piVar2 = (int *)*param_2;
          piVar5 = (int *)*piVar2;
          if (piVar5 != piVar2) goto LAB_00814b40;
          goto LAB_00814b58;
        }
        iVar6 = *(int *)(local_10 + 0x2130);
        if (local_38 < *(int *)(iVar6 + 4)) {
          if (local_1c < *(int *)(iVar6 + 8)) {
            uVar3 = (uint)*(byte *)(*(int *)(iVar6 + 0xc) * local_38 +
                                    *(int *)(iVar6 + 0x18) * local_1c + *(int *)(iVar6 + 0x20));
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
        if (*(int *)(local_10 + 0x2268 + uVar3 * 4) == 0) {
LAB_00814a41:
          local_a = '\0';
        }
        else {
          if (local_38 < *(int *)(iVar6 + 4)) {
            if (local_1c < *(int *)(iVar6 + 8)) {
              uVar3 = (uint)*(byte *)(*(int *)(iVar6 + 0xc) * local_38 +
                                      *(int *)(iVar6 + 0x18) * local_1c + *(int *)(iVar6 + 0x20));
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
          if (*(char *)(*(int *)(*(int *)(local_10 + 0x2268 + uVar3 * 4) + 0xc) + 0x90) == '\0')
          goto LAB_00814a41;
          local_a = '\x01';
        }
        local_60 = local_38;
        local_5c = local_1c;
        local_58 = bVar1 - 2;
        local_14 = 3;
        local_54 = 0;
        if ((byte)(bVar1 - 0xc) < 0xee) {
          *param_3 = bVar1 - 0xc;
        }
        local_18 = local_18 + -1;
        local_1c = local_1c + -1;
        local_34 = local_34 + -1;
        if ((((local_9 != '\0') && (local_a == '\0')) && (*(int *)(param_1 + 0x10) != 0)) &&
           (iVar6 = *(int *)(param_1 + 0x10) + -1, *(int *)(param_1 + 0x10) = iVar6, iVar6 == 0)) {
          *(undefined4 *)(param_1 + 0xc) = 0;
        }
        FUN_008159a0(&local_60);
        iVar6 = *param_2;
        uVar9 = *(undefined4 *)(iVar6 + 4);
      }
      else {
        iVar6 = *(int *)(local_10 + 0x2130);
        if (local_38 < *(int *)(iVar6 + 4)) {
          if (local_18 < *(int *)(iVar6 + 8)) {
            uVar3 = (uint)*(byte *)(*(int *)(iVar6 + 0x18) * local_18 +
                                    *(int *)(iVar6 + 0xc) * local_38 + *(int *)(iVar6 + 0x20));
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
        if (*(int *)(local_10 + 0x2268 + uVar3 * 4) == 0) {
LAB_008148fa:
          local_a = '\0';
        }
        else {
          if (local_38 < *(int *)(iVar6 + 4)) {
            if (local_18 < *(int *)(iVar6 + 8)) {
              uVar3 = (uint)*(byte *)(*(int *)(iVar6 + 0x18) * local_18 +
                                      *(int *)(iVar6 + 0xc) * local_38 + *(int *)(iVar6 + 0x20));
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
          if (*(char *)(*(int *)(*(int *)(local_10 + 0x2268 + uVar3 * 4) + 0xc) + 0x90) == '\0')
          goto LAB_008148fa;
          local_a = '\x01';
        }
        local_70 = local_38;
        local_14 = 2;
        local_6c = local_18;
        if ((byte)(bVar1 - 0xc) < 0xee) {
          *param_3 = bVar1 - 0xc;
        }
        local_1c = local_1c + 1;
        local_68 = bVar1 - 2;
        local_34 = local_34 + 1;
        local_18 = local_18 + 1;
        local_64 = 0;
        if ((local_9 == '\0') || (local_a != '\0')) {
          FUN_008159a0(&local_70);
          iVar6 = *param_2;
          uVar9 = *(undefined4 *)(iVar6 + 4);
        }
        else {
          if ((*(int *)(param_1 + 0x10) != 0) &&
             (iVar6 = *(int *)(param_1 + 0x10) + -1, *(int *)(param_1 + 0x10) = iVar6, iVar6 == 0))
          {
            *(undefined4 *)(param_1 + 0xc) = 0;
          }
          FUN_008159a0(&local_70);
          iVar6 = *param_2;
          uVar9 = *(undefined4 *)(iVar6 + 4);
        }
      }
      iVar4 = FUN_00815e40(iVar6,uVar9);
      iVar7 = param_2[1];
      if (iVar7 == 0x1ffffffe) goto LAB_00815006;
      local_9 = '\0';
    }
    else {
      iVar6 = *(int *)(local_10 + 0x2130);
      if (local_24 < *(int *)(iVar6 + 4)) {
        if (local_34 < *(int *)(iVar6 + 8)) {
          uVar3 = (uint)*(byte *)(*(int *)(iVar6 + 0xc) * local_24 +
                                  *(int *)(iVar6 + 0x18) * local_34 + *(int *)(iVar6 + 0x20));
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
      if (*(int *)(local_10 + 0x2268 + uVar3 * 4) == 0) {
LAB_008146bd:
        local_a = '\0';
      }
      else {
        if (local_24 < *(int *)(iVar6 + 4)) {
          if (local_34 < *(int *)(iVar6 + 8)) {
            uVar3 = (uint)*(byte *)(*(int *)(iVar6 + 0xc) * local_24 +
                                    *(int *)(iVar6 + 0x18) * local_34 + *(int *)(iVar6 + 0x20));
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
        if (*(char *)(*(int *)(*(int *)(local_10 + 0x2268 + uVar3 * 4) + 0xc) + 0x90) == '\0')
        goto LAB_008146bd;
        local_a = '\x01';
      }
      local_14 = 0;
      local_50 = local_24;
      if ((byte)(bVar1 - 0xc) < 0xee) {
        *param_3 = bVar1 - 0xc;
      }
      local_38 = local_38 + 1;
      local_48 = bVar1 - 2;
      local_20 = local_20 + 1;
      local_44 = 0;
      piVar2 = &local_50;
      local_4c = local_34;
      local_2c = local_24;
      local_24 = local_24 + 1;
LAB_00814702:
      local_28 = local_34;
      FUN_008159a0(piVar2);
      iVar6 = *param_2;
      iVar4 = FUN_00815e40(iVar6,*(undefined4 *)(iVar6 + 4));
      iVar7 = param_2[1];
      if (iVar7 == 0x1ffffffe) goto LAB_00815006;
      local_9 = '\x01';
    }
    param_2[1] = iVar7 + 1;
    *(int *)(iVar6 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
    iVar6 = local_14;
  } while (local_a == '\0');
  goto LAB_00814fa3;
  while (piVar5 = (int *)*piVar5, piVar5 != piVar2) {
LAB_00814b40:
    if ((piVar5[2] == local_2c) && (piVar5[3] == local_34)) break;
  }
  if (piVar5 == piVar2) {
LAB_00814b58:
    iVar7 = *(int *)(param_1 + 0x10) + -1;
    local_14 = 4;
    iVar6 = iVar7;
    local_70 = local_2c;
    local_6c = local_34;
    local_28 = local_34;
    FUN_0099e240(iVar7);
    piVar2 = (int *)FUN_00868600(iVar6);
    iVar6 = 0;
    if ((int *)*piVar2 != (int *)0x0) {
      iVar6 = *(int *)*piVar2;
    }
    uVar3 = piVar2[2];
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar6 + 8);
    }
    local_68 = *(int *)(*(int *)(*(int *)(iVar6 + 4) + uVar3 * 4) + 8);
    FUN_0099e240(iVar7);
    piVar2 = (int *)FUN_00868600(iVar7);
    iVar6 = 0;
    if ((int *)*piVar2 != (int *)0x0) {
      iVar6 = *(int *)*piVar2;
    }
    uVar3 = piVar2[2];
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar6 + 8);
    }
    local_64 = *(undefined4 *)(*(int *)(*(int *)(iVar6 + 4) + uVar3 * 4) + 0xc);
    FUN_008159a0(&local_70);
    iVar6 = *param_2;
    iVar7 = FUN_00815e40(iVar6,*(undefined4 *)(iVar6 + 4));
    if (param_2[1] == 0x1ffffffe) goto LAB_00815006;
    param_2[1] = param_2[1] + 1;
    *(int *)(iVar6 + 4) = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
    local_70 = local_2c + 1;
    FUN_008159a0(&local_70);
  }
LAB_00814c31:
  iVar6 = *(int *)(local_10 + 0x2134);
  local_2c = local_38 + -1;
  local_24 = local_2c;
  if (*(char *)(*(int *)(iVar6 + 0x18) * iVar4 + *(int *)(iVar6 + 0xc) * local_2c +
               *(int *)(iVar6 + 0x20)) == '\x01') {
    piVar2 = (int *)*param_2;
    piVar5 = (int *)*piVar2;
    if (piVar5 != piVar2) {
      do {
        if ((piVar5[2] == local_2c) && (piVar5[3] == iVar4)) break;
        piVar5 = (int *)*piVar5;
      } while (piVar5 != piVar2);
      if (piVar5 != piVar2) goto LAB_00814d5c;
    }
    iVar7 = *(int *)(param_1 + 0x10) + -1;
    local_14 = 4;
    iVar6 = iVar7;
    local_70 = local_2c;
    local_6c = iVar4;
    local_28 = iVar4;
    FUN_0099e240(iVar7);
    piVar2 = (int *)FUN_00868600(iVar6);
    iVar6 = 0;
    if ((int *)*piVar2 != (int *)0x0) {
      iVar6 = *(int *)*piVar2;
    }
    uVar3 = piVar2[2];
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar6 + 8);
    }
    local_68 = *(int *)(*(int *)(*(int *)(iVar6 + 4) + uVar3 * 4) + 8);
    FUN_0099e240(iVar7);
    piVar2 = (int *)FUN_00868600(iVar7);
    iVar6 = 0;
    if ((int *)*piVar2 != (int *)0x0) {
      iVar6 = *(int *)*piVar2;
    }
    uVar3 = piVar2[2];
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar6 + 8);
    }
    local_64 = *(undefined4 *)(*(int *)(*(int *)(iVar6 + 4) + uVar3 * 4) + 0xc);
    local_38 = local_24;
    FUN_008159a0(&local_70);
    local_70 = local_2c + -1;
    FUN_008159a0(&local_70);
    iVar6 = *param_2;
    iVar7 = FUN_00815e40(iVar6,*(undefined4 *)(iVar6 + 4));
    if (param_2[1] == 0x1ffffffe) goto LAB_00815006;
    param_2[1] = param_2[1] + 1;
    *(int *)(iVar6 + 4) = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
  }
LAB_00814d5c:
  iVar7 = local_34;
  iVar6 = *(int *)(local_10 + 0x2134);
  iVar4 = local_34 + 1;
  local_2c = local_38;
  if (*(char *)(*(int *)(iVar6 + 0xc) * local_38 + *(int *)(iVar6 + 0x18) * iVar4 +
               *(int *)(iVar6 + 0x20)) == '\x01') {
    piVar2 = (int *)*param_2;
    piVar5 = (int *)*piVar2;
    if (piVar5 != piVar2) {
      do {
        if ((piVar5[2] == local_38) && (piVar5[3] == iVar4)) break;
        piVar5 = (int *)*piVar5;
      } while (piVar5 != piVar2);
      if (piVar5 != piVar2) goto LAB_00814e86;
    }
    local_70 = local_38;
    iVar8 = *(int *)(param_1 + 0x10) + -1;
    local_14 = 4;
    iVar6 = iVar8;
    local_6c = iVar4;
    local_28 = iVar4;
    FUN_0099e240(iVar8);
    piVar2 = (int *)FUN_00868600(iVar6);
    iVar6 = 0;
    if ((int *)*piVar2 != (int *)0x0) {
      iVar6 = *(int *)*piVar2;
    }
    uVar3 = piVar2[2];
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar6 + 8);
    }
    local_68 = *(int *)(*(int *)(*(int *)(iVar6 + 4) + uVar3 * 4) + 8);
    FUN_0099e240(iVar8);
    piVar2 = (int *)FUN_00868600(iVar8);
    iVar6 = 0;
    if ((int *)*piVar2 != (int *)0x0) {
      iVar6 = *(int *)*piVar2;
    }
    uVar3 = piVar2[2];
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar6 + 8);
    }
    local_64 = *(undefined4 *)(*(int *)(*(int *)(iVar6 + 4) + uVar3 * 4) + 0xc);
    local_34 = iVar4;
    FUN_008159a0(&local_70);
    local_6c = iVar7 + 2;
    FUN_008159a0(&local_70);
    iVar6 = *param_2;
    iVar7 = FUN_00815e40(iVar6,*(undefined4 *)(iVar6 + 4));
    if (param_2[1] == 0x1ffffffe) goto LAB_00815006;
    param_2[1] = param_2[1] + 1;
    *(int *)(iVar6 + 4) = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
  }
LAB_00814e86:
  iVar6 = *(int *)(local_10 + 0x2134);
  local_28 = local_34 + -1;
  local_2c = local_38;
  if (*(char *)(*(int *)(iVar6 + 0xc) * local_38 + *(int *)(iVar6 + 0x18) * local_28 +
               *(int *)(iVar6 + 0x20)) == '\x01') {
    piVar2 = (int *)*param_2;
    piVar5 = (int *)*piVar2;
    if (piVar5 != piVar2) {
      do {
        if ((piVar5[2] == local_38) && (piVar5[3] == local_28)) break;
        piVar5 = (int *)*piVar5;
      } while (piVar5 != piVar2);
      if (piVar5 != piVar2) goto LAB_00814fa3;
    }
    local_70 = local_38;
    iVar7 = *(int *)(param_1 + 0x10) + -1;
    local_14 = 4;
    iVar6 = iVar7;
    local_6c = local_28;
    FUN_0099e240(iVar7);
    piVar2 = (int *)FUN_00868600(iVar6);
    iVar6 = 0;
    if ((int *)*piVar2 != (int *)0x0) {
      iVar6 = *(int *)*piVar2;
    }
    uVar3 = piVar2[2];
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar6 + 8);
    }
    local_68 = *(int *)(*(int *)(*(int *)(iVar6 + 4) + uVar3 * 4) + 8);
    FUN_0099e240(iVar7);
    piVar2 = (int *)FUN_00868600(iVar7);
    iVar6 = 0;
    if ((int *)*piVar2 != (int *)0x0) {
      iVar6 = *(int *)*piVar2;
    }
    uVar3 = piVar2[2];
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar6 + 8);
    }
    local_64 = *(undefined4 *)(*(int *)(*(int *)(iVar6 + 4) + uVar3 * 4) + 0xc);
    FUN_008159a0(&local_70);
    local_6c = local_28 + -1;
    FUN_008159a0(&local_70);
    iVar6 = *param_2;
    iVar7 = FUN_00815e40(iVar6,*(undefined4 *)(iVar6 + 4));
    if (param_2[1] == 0x1ffffffe) {
LAB_00815006:
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("list<T> too long");
    }
    param_2[1] = param_2[1] + 1;
    *(int *)(iVar6 + 4) = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
  }
LAB_00814fa3:
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((2 < uVar3) && (*param_3 != -1)) {
    if ((uVar3 != 0) && (*(uint *)(param_1 + 0x10) = uVar3 - 1, uVar3 - 1 == 0)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar6 = *(int *)(param_1 + 0x10) + -1, *(int *)(param_1 + 0x10) = iVar6, iVar6 == 0)) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  if (local_14 != 4) {
    iVar7 = *(int *)(param_1 + 0x10) + -1;
    iVar6 = iVar7;
    FUN_0099e240(iVar7);
    piVar2 = (int *)FUN_00868600(iVar6);
    if ((int *)*piVar2 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)*piVar2;
    }
    uVar3 = piVar2[2];
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar6 + 8);
    }
    piVar2 = *(int **)(*(int *)(iVar6 + 4) + uVar3 * 4);
    local_40 = *piVar2;
    local_3c = piVar2[1];
    iVar6 = iVar7;
    FUN_0099e240(iVar7);
    piVar2 = (int *)FUN_00868600(iVar6);
    iVar6 = 0;
    if ((int *)*piVar2 != (int *)0x0) {
      iVar6 = *(int *)*piVar2;
    }
    uVar3 = piVar2[2];
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar6 + 8);
    }
    local_38 = *(undefined4 *)(*(int *)(*(int *)(iVar6 + 4) + uVar3 * 4) + 8);
    FUN_0099e240(iVar7);
    piVar2 = (int *)FUN_00868600(iVar7);
    iVar6 = 0;
    if ((int *)*piVar2 != (int *)0x0) {
      iVar6 = *(int *)*piVar2;
    }
    uVar3 = piVar2[2];
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar6 + 8);
    }
    local_34 = *(undefined4 *)(*(int *)(*(int *)(iVar6 + 4) + uVar3 * 4) + 0xc);
    switch(local_14) {
    case 0:
      local_40 = local_40 + 1;
      FUN_008159a0(&local_40);
      return;
    case 1:
      local_40 = local_40 + -1;
      FUN_008159a0(&local_40);
      return;
    case 2:
      local_3c = local_3c + 1;
      FUN_008159a0(&local_40);
      return;
    case 3:
      local_3c = local_3c + -1;
    }
    FUN_008159a0(&local_40);
  }
  return;
}

