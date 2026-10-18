// FUN_007c6d40 @ 007c6d40 body=[[007c6d40, 007c74a5] [007c74a9, 007c74b2] [007c74b6, 007c74c9]]


/* WARNING: Removing unreachable block (ram,0x007c728f) */
/* WARNING: Removing unreachable block (ram,0x007c72b3) */
/* WARNING: Removing unreachable block (ram,0x007c730e) */

void FUN_007c6d40(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  int *piStack_88;
  int *piStack_84;
  undefined *puStack_80;
  int *piStack_7c;
  int local_68 [2];
  int *local_60;
  int local_5c;
  int local_58;
  undefined4 uStack_54;
  undefined1 *local_50;
  int iStack_4c;
  uint local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_20;
  undefined1 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b4fd6b;
  local_14 = ExceptionList;
  if (*(char *)(param_1 + 0x16c) != '\0') {
    piVar9 = (int *)0x0;
    ExceptionList = &local_14;
    *(undefined1 *)(param_1 + 0x16c) = 0;
    local_44 = (int *)0x0;
    local_40 = (int *)0x0;
    local_3c = (int *)0x0;
    local_c = 0;
    if (DAT_0131bb34 == 0) {
      piStack_7c = (int *)0x188;
      puStack_80 = (undefined *)0x7c6d9f;
      local_48 = FUN_00aae9af();
      local_c._0_1_ = 1;
      if (local_48 == 0) {
        piStack_7c = (int *)0x0;
      }
      else {
        piStack_7c = (int *)0x7c6db6;
        piStack_7c = (int *)FUN_0041a160();
      }
      local_c = (uint)local_c._1_3_ << 8;
      puStack_80 = (undefined *)0x7c6dc8;
      FUN_00423700();
    }
    uVar4 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    iVar2 = 0;
    if (0 < (int)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) & 0xfffffffcU)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar2 * 4) = 0;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2);
    }
    piVar8 = (int *)0x0;
    local_48 = uVar4;
    for (local_60 = *(int **)(param_1 + 0x94); local_60 != (int *)0x0; local_60 = (int *)local_60[2]
        ) {
      local_5c = 0;
      if (0 < (int)uVar4) {
        local_68[1] = 0;
        do {
          puVar1 = (undefined1 *)*(int *)(*(int *)(*local_60 + 0x194) + local_68[1]);
          iVar2 = local_68[0];
          piVar3 = local_40;
          while (local_40 = piVar9, local_68[0] = (int)puVar1, piVar9 = local_40, local_68[0] != 0)
          {
            local_50 = *(undefined1 **)(local_68[0] + 0x27c);
            *(undefined4 *)
             (*(int *)(param_1 + 0x6c) + *(int *)(*(int *)(local_68[0] + 0x68) + 0x28) * 4) = 1;
            puVar1 = (undefined1 *)(int)local_50;
            uVar4 = local_48;
            local_58 = local_68[0];
            if (*(int *)(*(int *)(*(int *)(param_1 + 0xb8) +
                                 *(int *)(*(int *)(local_68[0] + 0x68) + 0x28) * 8) + 0x6c) != 1) {
              if ((local_68 < local_40) && (piVar8 <= local_68)) {
                local_58 = (int)local_68 - (int)piVar8 >> 2;
                if (local_40 == local_3c) {
                  uVar4 = (int)local_40 - (int)piVar8 >> 2;
                  if (0x3ffffffe < uVar4) {
LAB_007c6fe4:
                    piStack_7c = (int *)0xdeda30;
                    /* WARNING: Subroutine does not return */
                    puStack_80 = (undefined *)0x7c6fee;
                    local_40 = piVar3;
                    FUN_00aad3ad();
                  }
                  uVar4 = uVar4 + 1;
                  uVar5 = (int)local_3c - (int)piVar8 >> 2;
                  if (uVar5 < uVar4) {
                    if (0x3fffffff - (uVar5 >> 1) < uVar5) {
                      piStack_7c = (int *)0x0;
                    }
                    else {
                      piStack_7c = (int *)(uVar5 + (uVar5 >> 1));
                    }
                    if (piStack_7c < uVar4) {
                      piStack_7c = (int *)uVar4;
                    }
                    puStack_80 = (undefined *)0x7c6eee;
                    local_40 = piVar3;
                    FUN_004bf300();
                    piVar8 = local_44;
                  }
                }
                if (local_40 != (int *)0x0) {
                  *local_40 = piVar8[local_58];
                }
              }
              else {
                if (local_40 == local_3c) {
                  uVar4 = (int)local_40 - (int)piVar8 >> 2;
                  if (0x3ffffffe < uVar4) goto LAB_007c6fe4;
                  uVar4 = uVar4 + 1;
                  uVar5 = (int)local_3c - (int)piVar8 >> 2;
                  if (uVar5 < uVar4) {
                    if (0x3fffffff - (uVar5 >> 1) < uVar5) {
                      piStack_7c = (int *)0x0;
                    }
                    else {
                      piStack_7c = (int *)(uVar5 + (uVar5 >> 1));
                    }
                    if (piStack_7c < uVar4) {
                      piStack_7c = (int *)uVar4;
                    }
                    puStack_80 = (undefined *)0x7c6f52;
                    local_40 = piVar3;
                    FUN_004bf300();
                    piVar8 = local_44;
                  }
                }
                if (local_40 != (int *)0x0) {
                  *local_40 = local_58;
                }
              }
              piVar3 = local_40 + 1;
              puVar1 = local_50;
              uVar4 = local_48;
              piVar9 = piVar3;
              iVar2 = local_68[0];
            }
          }
          local_68[1] = local_68[1] + 0x10;
          local_5c = local_5c + 1;
          local_68[0] = iVar2;
          local_40 = piVar3;
        } while (local_5c < (int)uVar4);
      }
    }
    local_60 = (int *)0x0;
    if (0 < (int)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) & 0xfffffffcU)) {
      do {
        piStack_7c = *(int **)(*(int *)(param_1 + 0xb8) + (int)local_60 * 8);
        if (piStack_7c != (int *)0x0) {
          if (*(int *)(*(int *)(param_1 + 0x6c) + (int)local_60 * 4) == 1) {
            if (*(char *)((int)piStack_7c + 0x142) != '\0') goto LAB_007c6fff;
            *(undefined1 *)((int)piStack_7c + 0x142) = 1;
          }
          else {
            *(undefined1 *)((int)piStack_7c + 0x142) = 0;
          }
          puStack_80 = (undefined *)0x7c6ffb;
          FUN_009a8550();
        }
LAB_007c6fff:
        local_60 = (int *)((int)local_60 + 1);
      } while ((int)local_60 < *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2);
    }
    switch(*(undefined4 *)(param_1 + 0x1e4)) {
    case 0:
      local_48 = local_48 & 0xffffff00;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c82d0();
      break;
    case 1:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c83b0();
      break;
    case 2:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c8490();
      break;
    case 3:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c8570();
      break;
    case 4:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c8650();
      break;
    case 5:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c8730();
      break;
    case 6:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c8810();
      break;
    case 7:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c88f0();
      break;
    case 8:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c89d0();
      break;
    case 9:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c8ab0();
      break;
    case 10:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c8b90();
      break;
    case 0xb:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c8c70();
      break;
    case 0xc:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c8d50();
      break;
    case 0xd:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c8e30();
      break;
    case 0xe:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c8f10();
      break;
    case 0xf:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c8ff0();
      break;
    case 0x10:
      local_48 = (uint)local_48._1_3_ << 8;
      piStack_7c = (int *)local_48;
      puStack_80 = (undefined *)((int)piVar9 - (int)piVar8 >> 2);
      piStack_88 = piVar8;
      piStack_84 = piVar9;
      FUN_007c90d0();
    }
    if ((*(char *)(param_1 + 0x1e8) == '\0') && (piVar3 = piVar8, piVar6 = piVar9, piVar8 != piVar9)
       ) {
      do {
        piVar6 = piVar6 + -1;
        if (piVar3 == piVar6) break;
        iVar2 = *piVar3;
        *piVar3 = *piVar6;
        piVar3 = piVar3 + 1;
        *piVar6 = iVar2;
      } while (piVar3 != piVar6);
    }
    local_48 = (int)piVar9 - (int)piVar8 >> 2;
    iVar2 = local_48 - *(int *)(param_1 + 400);
    if (iVar2 < 1) {
      piStack_7c = (int *)0x7c7266;
      (**(code **)(**(int **)(param_1 + 0x18c) + 0x38))();
      local_50 = (undefined1 *)&piStack_88;
      piStack_88 = (int *)0x0;
      piStack_84 = (int *)0x0;
      puStack_80 = (undefined *)0x3e8;
      iVar2 = 0;
    }
    else {
      piStack_7c = (int *)0x7c72e1;
      (**(code **)(**(int **)(param_1 + 0x18c) + 0x34))();
      piStack_84 = (int *)(iVar2 * 1000);
      local_50 = (undefined1 *)&piStack_88;
      piStack_88 = (int *)0x0;
      puStack_80 = (undefined *)0x3e8;
      if (((int)piStack_84 < -0x189373) || (0x20c49a < (int)piStack_84)) {
        iStack_4c = (int)piStack_84 >> 0x1f;
        uStack_54 = 0;
        local_58 = 1000;
        puStack_80 = (undefined *)0x3e8;
        piStack_88 = (int *)0x0;
        local_50 = (undefined1 *)piStack_84;
        uVar10 = __allmul(piStack_84,iStack_4c,1000,0);
        iVar2 = __alldiv(uVar10,local_58,uStack_54);
        iStack_4c = iVar2 >> 0x1f;
      }
      else {
        iVar2 = (iVar2 * 1000000) / 1000;
      }
    }
    piStack_7c = (int *)(iVar2 / 1000 + 1);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x18c) + 0x54) + 0x14))();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x18c) + 0x54) + 0x10))();
    iVar2 = FUN_00b31c00();
    iVar7 = *(int *)(param_1 + 400) + iVar2;
    *(int *)(param_1 + 0x198) = iVar2;
    *(int *)(param_1 + 0x194) = iVar7;
    if (local_58 <= iVar7) {
      iVar7 = local_58;
    }
    for (; iVar2 < iVar7; iVar2 = iVar2 + 1) {
      FUN_007ba410(*(undefined4 *)
                    (*(int *)(param_1 + 0x5c) + (iVar2 - *(int *)(param_1 + 0x198)) * 4),
                   piVar8[iVar2]);
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x5c) +
                                    (iVar2 - *(int *)(param_1 + 0x198)) * 4) + 0x1c) + 0x28))();
    }
    uVar4 = iVar7 - *(int *)(param_1 + 0x198);
    uVar4 = ((int)uVar4 < 1) - 1 & uVar4;
    local_58 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 2;
    if ((int)uVar4 < local_58) {
      do {
        (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x5c) + uVar4 * 4) + 0x1c) + 0x30))();
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < local_58);
    }
    uStack_30 = 0xf;
    uStack_34 = 0;
    local_44 = (int *)((uint)local_44 & 0xffffff00);
    FUN_00409350("popview",7);
    uStack_1c = 2;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x4c) + 0x18) + 0x78))(&local_44);
    if (0xf < uStack_20) {
      piStack_7c = (int *)uStack_34;
                    /* WARNING: Subroutine does not return */
      puStack_80 = &UNK_007c74a6;
      FUN_00aae91b();
    }
    if (piVar8 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      puStack_80 = &UNK_007c74b3;
      piStack_7c = piVar8;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return;
}

