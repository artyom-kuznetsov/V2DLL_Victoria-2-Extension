// FUN_006727d0 @ 006727d0 body=[[006727d0, 0067284a] [0067284e, 006728ac] [006728b0, 0067291d] [00672921, 00672984] [00672988, 006729eb] [006729ef, 00672a52] [00672a56, 00672ab9] [00672abd, 00672b20] [00672b24, 00672b70] [00672b74, 00672be1] [00672be5, 00672c48] [00672c4c, 00672caf] [00672cb3, 00672d16] [00672d1a, 00672d7d] [00672d81, 00672de4] [00672de8, 00672e3d] [00672e41, 00672eae] [00672eb2, 00672f15] [00672f19, 00672f7c] [00672f80, 00672fe3] [00672fe7, 0067304a] [0067304e, 006736ed]]


void FUN_006727d0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint in_ECX;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  void *pvStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7f360;
  pvStack_14 = ExceptionList;
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  ExceptionList = &pvStack_14;
  local_70 = in_ECX;
  FUN_00409350("menu_message_settings",0x15);
  local_c = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x1d24) + 0x6c))();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70);
  }
  local_5c = 0xf;
  uStack_60 = 0;
  local_70 = local_70 & 0xffffff00;
  uStack_40 = 0xf;
  uStack_44 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  FUN_00409350("messagecat_combat",0x11);
  puStack_10 = (undefined1 *)0x1;
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58);
  }
  uStack_44 = 0xf;
  uStack_48 = 0;
  local_58 = local_58 & 0xffffff00;
  FUN_00409350("messagecat_diplomacy",0x14);
  if (param_1 == iVar2) {
    pvStack_14 = (void *)0x2;
    iVar2 = (**(code **)(*piVar1 + 0x48))(&local_58);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    uStack_18 = 0xffffffff;
    if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c);
    }
    uStack_48 = 0xf;
    uStack_4c = 0;
    local_5c = local_5c & 0xffffff00;
    FUN_00409350("messagecat_units",0x10);
    uStack_18 = 3;
    puVar7 = &local_5c;
    iVar2 = (**(code **)(*piVar1 + 0x48))();
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    uStack_1c = 0xffffffff;
    if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_60);
    }
    uStack_4c = 0xf;
    uStack_50 = 0;
    uStack_60 = uStack_60 & 0xffffff00;
    FUN_00409350("messagecat_provinces",0x14);
    uStack_1c = 4;
    iVar2 = (**(code **)(*piVar1 + 0x48))(&uStack_60);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    uStack_20 = 0xffffffff;
    if (0xf < uStack_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_64);
    }
    uStack_50 = 0xf;
    uStack_54 = 0;
    uStack_64 = uStack_64 & 0xffffff00;
    FUN_00409350("messagecat_events",0x11);
    uStack_20 = 5;
    iVar2 = (**(code **)(*piVar1 + 0x48))(&uStack_64);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    uStack_24 = 0xffffffff;
    if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_68);
    }
    uStack_54 = 0xf;
    local_58 = 0;
    uStack_68 = uStack_68 & 0xffffff00;
    FUN_00409350("messagecat_others",0x11);
    uStack_24 = 6;
    iVar2 = (**(code **)(*piVar1 + 0x48))(&uStack_68);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    uStack_28 = 0xffffffff;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c);
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    FUN_00409350("messagecat_all",0xe);
    uStack_28 = 7;
    iVar2 = (**(code **)(*piVar1 + 0x48))(&local_6c);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    uStack_2c = 0xffffffff;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70);
    }
    uVar5 = puVar7[0x15];
    puVar6 = puVar7 + 0x5fb;
    uVar4 = 0;
  }
  else {
    pvStack_14 = (void *)0x8;
    iVar2 = (**(code **)(*piVar1 + 0x48))();
    uStack_18 = 0xffffffff;
    if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c);
    }
    uStack_48 = 0xf;
    uStack_4c = 0;
    local_5c = local_5c & 0xffffff00;
    if (param_1 == iVar2) {
      FUN_00409350("messagecat_combat",0x11);
      uStack_18 = 9;
      puVar7 = &local_5c;
      iVar2 = (**(code **)(*piVar1 + 0x48))();
      if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
        *(undefined4 *)(iVar2 + 0x6c) = 0;
        *(undefined4 *)(iVar2 + 0x10c) = 0;
      }
      uStack_1c = 0xffffffff;
      if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_60);
      }
      uStack_4c = 0xf;
      uStack_50 = 0;
      uStack_60 = uStack_60 & 0xffffff00;
      FUN_00409350("messagecat_units",0x10);
      uStack_1c = 10;
      iVar2 = (**(code **)(*piVar1 + 0x48))(&uStack_60);
      if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
        *(undefined4 *)(iVar2 + 0x6c) = 0;
        *(undefined4 *)(iVar2 + 0x10c) = 0;
      }
      uStack_20 = 0xffffffff;
      if (0xf < uStack_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_64);
      }
      uStack_50 = 0xf;
      uStack_54 = 0;
      uStack_64 = uStack_64 & 0xffffff00;
      FUN_00409350("messagecat_provinces",0x14);
      uStack_20 = 0xb;
      iVar2 = (**(code **)(*piVar1 + 0x48))(&uStack_64);
      if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
        *(undefined4 *)(iVar2 + 0x6c) = 0;
        *(undefined4 *)(iVar2 + 0x10c) = 0;
      }
      uStack_24 = 0xffffffff;
      if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_68);
      }
      uStack_54 = 0xf;
      local_58 = 0;
      uStack_68 = uStack_68 & 0xffffff00;
      FUN_00409350("messagecat_events",0x11);
      uStack_24 = 0xc;
      iVar2 = (**(code **)(*piVar1 + 0x48))(&uStack_68);
      if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
        *(undefined4 *)(iVar2 + 0x6c) = 0;
        *(undefined4 *)(iVar2 + 0x10c) = 0;
      }
      uStack_28 = 0xffffffff;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c);
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      FUN_00409350("messagecat_others",0x11);
      uStack_28 = 0xd;
      iVar2 = (**(code **)(*piVar1 + 0x48))(&local_6c);
      if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
        *(undefined4 *)(iVar2 + 0x6c) = 0;
        *(undefined4 *)(iVar2 + 0x10c) = 0;
      }
      uStack_2c = 0xffffffff;
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_70);
      }
      local_5c = 0xf;
      uStack_60 = 0;
      local_70 = local_70 & 0xffffff00;
      FUN_00409350("messagecat_all",0xe);
      uStack_2c = 0xe;
      iVar2 = (**(code **)(*piVar1 + 0x48))(&local_70);
      if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
        *(undefined4 *)(iVar2 + 0x6c) = 0;
        *(undefined4 *)(iVar2 + 0x10c) = 0;
      }
      uStack_2c = 0xffffffff;
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_70);
      }
      uVar5 = puVar7[0x15];
      puVar6 = puVar7 + 0x5fb;
      uVar4 = 1;
    }
    else {
      FUN_00409350("messagecat_units",0x10);
      uStack_18 = 0xf;
      puVar7 = &local_5c;
      iVar2 = (**(code **)(*piVar1 + 0x48))();
      uStack_1c = 0xffffffff;
      if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_60);
      }
      if (param_1 == iVar2) {
        uStack_4c = 0xf;
        uStack_50 = 0;
        uStack_60 = uStack_60 & 0xffffff00;
        FUN_00409350("messagecat_combat",0x11);
        uStack_1c = 0x10;
        iVar2 = (**(code **)(*piVar1 + 0x48))(&uStack_60);
        if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
          *(undefined4 *)(iVar2 + 0x6c) = 0;
          *(undefined4 *)(iVar2 + 0x10c) = 0;
        }
        uStack_20 = 0xffffffff;
        if (0xf < uStack_50) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_64);
        }
        uStack_50 = 0xf;
        uStack_54 = 0;
        uStack_64 = uStack_64 & 0xffffff00;
        FUN_00409350("messagecat_diplomacy",0x14);
        uStack_20 = 0x11;
        iVar2 = (**(code **)(*piVar1 + 0x48))(&uStack_64);
        if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
          *(undefined4 *)(iVar2 + 0x6c) = 0;
          *(undefined4 *)(iVar2 + 0x10c) = 0;
        }
        uStack_24 = 0xffffffff;
        if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_68);
        }
        uStack_54 = 0xf;
        local_58 = 0;
        uStack_68 = uStack_68 & 0xffffff00;
        FUN_00409350("messagecat_provinces",0x14);
        uStack_24 = 0x12;
        iVar2 = (**(code **)(*piVar1 + 0x48))(&uStack_68);
        if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
          *(undefined4 *)(iVar2 + 0x6c) = 0;
          *(undefined4 *)(iVar2 + 0x10c) = 0;
        }
        uStack_28 = 0xffffffff;
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_6c);
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c = local_6c & 0xffffff00;
        FUN_00409350("messagecat_events",0x11);
        uStack_28 = 0x13;
        iVar2 = (**(code **)(*piVar1 + 0x48))(&local_6c);
        if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
          *(undefined4 *)(iVar2 + 0x6c) = 0;
          *(undefined4 *)(iVar2 + 0x10c) = 0;
        }
        uStack_2c = 0xffffffff;
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_70);
        }
        local_5c = 0xf;
        uStack_60 = 0;
        local_70 = local_70 & 0xffffff00;
        FUN_00409350("messagecat_others",0x11);
        uStack_2c = 0x14;
        iVar2 = (**(code **)(*piVar1 + 0x48))(&local_70);
        if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
          *(undefined4 *)(iVar2 + 0x6c) = 0;
          *(undefined4 *)(iVar2 + 0x10c) = 0;
        }
        uStack_30 = 0xffffffff;
        if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_74);
        }
        uStack_60 = 0xf;
        uStack_64 = 0;
        uStack_74 = uStack_74 & 0xffffff00;
        FUN_00409350("messagecat_all",0xe);
        uStack_30 = 0x15;
        (**(code **)(*piVar1 + 0x48))(&uStack_74);
        FUN_009a8ba0();
        uStack_2c = 0xffffffff;
        FUN_00408ad0();
        uVar5 = puVar7[0x15];
        puVar6 = puVar7 + 0x5fb;
        uVar4 = 2;
      }
      else {
        FUN_009885d0();
        uStack_1c = 0x16;
        iVar2 = (**(code **)(*piVar1 + 0x48))();
        cVar3 = param_1 == iVar2;
        uStack_20 = 0xffffffff;
        FUN_00408ad0();
        if (cVar3 == '\0') {
          FUN_009885d0();
          uStack_20 = 0x1d;
          iVar2 = (**(code **)(*piVar1 + 0x48))(&uStack_64);
          cVar3 = param_1 == iVar2;
          uStack_24 = 0xffffffff;
          FUN_00408ad0();
          if (cVar3 == '\0') {
            FUN_009885d0();
            uStack_24 = 0x24;
            iVar2 = (**(code **)(*piVar1 + 0x48))(&uStack_68);
            puVar7 = (uint *)CONCAT13(param_1 == iVar2,(int3)puVar7);
            uStack_28 = 0xffffffff;
            FUN_00408ad0();
            if ((char)((uint)puVar7 >> 0x18) == '\0') {
              FUN_009885d0();
              uStack_28 = 0x2b;
              iVar2 = (**(code **)(*piVar1 + 0x48))(&local_6c);
              cVar3 = param_1 == iVar2;
              uStack_2c = 0xffffffff;
              FUN_00408ad0();
              if (cVar3 == '\0') {
                ExceptionList = pvStack_34;
                return;
              }
              FUN_009885d0();
              uStack_2c = 0x2c;
              (**(code **)(*piVar1 + 0x48))(&local_70);
              FUN_009a8ba0();
              uStack_30 = 0xffffffff;
              FUN_00408ad0();
              FUN_009885d0();
              uStack_30 = 0x2d;
              (**(code **)(*piVar1 + 0x48))(&uStack_74);
              FUN_009a8ba0();
              pvStack_34 = (void *)0xffffffff;
              FUN_00408ad0();
              FUN_009885d0();
              pvStack_34 = (void *)0x2e;
              (**(code **)(*piVar1 + 0x48))(&stack0xffffff88);
              FUN_009a8ba0();
              uStack_38 = 0xffffffff;
              FUN_00408ad0();
              FUN_009885d0();
              uStack_38 = 0x2f;
              (**(code **)(*piVar1 + 0x48))(&stack0xffffff84);
              FUN_009a8ba0();
              uStack_3c = 0xffffffff;
              FUN_00408ad0();
              FUN_009885d0();
              uStack_3c = 0x30;
              (**(code **)(*piVar1 + 0x48))(&stack0xffffff80);
              FUN_009a8ba0();
              uStack_40 = 0xffffffff;
              FUN_00408ad0();
              FUN_009885d0();
              uStack_40 = 0x31;
              (**(code **)(*piVar1 + 0x48))(&uStack_68);
              FUN_009a8ba0();
              uStack_2c = 0xffffffff;
              FUN_00408ad0();
              uVar5 = puVar7[0x15];
              puVar6 = puVar7 + 0x5fb;
              uVar4 = 6;
            }
            else {
              FUN_009885d0();
              uStack_28 = 0x25;
              (**(code **)(*piVar1 + 0x48))(&local_6c);
              FUN_009a8ba0();
              uStack_2c = 0xffffffff;
              FUN_00408ad0();
              FUN_009885d0();
              uStack_2c = 0x26;
              (**(code **)(*piVar1 + 0x48))(&local_70);
              FUN_009a8ba0();
              uStack_30 = 0xffffffff;
              FUN_00408ad0();
              FUN_009885d0();
              uStack_30 = 0x27;
              (**(code **)(*piVar1 + 0x48))(&uStack_74);
              FUN_009a8ba0();
              pvStack_34 = (void *)0xffffffff;
              FUN_00408ad0();
              FUN_009885d0();
              pvStack_34 = (void *)0x28;
              (**(code **)(*piVar1 + 0x48))(&stack0xffffff88);
              FUN_009a8ba0();
              uStack_38 = 0xffffffff;
              FUN_00408ad0();
              FUN_009885d0();
              uStack_38 = 0x29;
              (**(code **)(*piVar1 + 0x48))(&stack0xffffff84);
              FUN_009a8ba0();
              uStack_3c = 0xffffffff;
              FUN_00408ad0();
              FUN_009885d0();
              uStack_3c = 0x2a;
              (**(code **)(*piVar1 + 0x48))(&stack0xffffff80);
              FUN_009a8ba0();
              uStack_2c = 0xffffffff;
              FUN_00408ad0();
              uVar5 = puVar7[0x15];
              puVar6 = puVar7 + 0x5fb;
              uVar4 = 5;
            }
          }
          else {
            FUN_009885d0();
            uStack_24 = 0x1e;
            (**(code **)(*piVar1 + 0x48))(&uStack_68);
            FUN_009a8ba0();
            uStack_28 = 0xffffffff;
            FUN_00408ad0();
            FUN_009885d0();
            uStack_28 = 0x1f;
            (**(code **)(*piVar1 + 0x48))(&local_6c);
            FUN_009a8ba0();
            uStack_2c = 0xffffffff;
            FUN_00408ad0();
            FUN_009885d0();
            uStack_2c = 0x20;
            (**(code **)(*piVar1 + 0x48))(&local_70);
            FUN_009a8ba0();
            uStack_30 = 0xffffffff;
            FUN_00408ad0();
            FUN_009885d0();
            uStack_30 = 0x21;
            (**(code **)(*piVar1 + 0x48))(&uStack_74);
            FUN_009a8ba0();
            pvStack_34 = (void *)0xffffffff;
            FUN_00408ad0();
            FUN_009885d0();
            pvStack_34 = (void *)0x22;
            (**(code **)(*piVar1 + 0x48))(&stack0xffffff88);
            FUN_009a8ba0();
            uStack_38 = 0xffffffff;
            FUN_00408ad0();
            FUN_009885d0();
            uStack_38 = 0x23;
            (**(code **)(*piVar1 + 0x48))(&stack0xffffff84);
            FUN_009a8ba0();
            uStack_2c = 0xffffffff;
            FUN_00408ad0();
            uVar5 = puVar7[0x15];
            puVar6 = puVar7 + 0x5fb;
            uVar4 = 4;
          }
        }
        else {
          FUN_009885d0();
          uStack_20 = 0x17;
          (**(code **)(*piVar1 + 0x48))(&uStack_64);
          FUN_009a8ba0();
          uStack_24 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          uStack_24 = 0x18;
          (**(code **)(*piVar1 + 0x48))(&uStack_68);
          FUN_009a8ba0();
          uStack_28 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          uStack_28 = 0x19;
          (**(code **)(*piVar1 + 0x48))(&local_6c);
          FUN_009a8ba0();
          uStack_2c = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          uStack_2c = 0x1a;
          (**(code **)(*piVar1 + 0x48))(&local_70);
          FUN_009a8ba0();
          uStack_30 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          uStack_30 = 0x1b;
          (**(code **)(*piVar1 + 0x48))(&uStack_74);
          FUN_009a8ba0();
          pvStack_34 = (void *)0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          pvStack_34 = (void *)0x1c;
          (**(code **)(*piVar1 + 0x48))(&stack0xffffff88);
          FUN_009a8ba0();
          uStack_2c = 0xffffffff;
          FUN_00408ad0();
          uVar5 = puVar7[0x15];
          puVar6 = puVar7 + 0x5fb;
          uVar4 = 3;
        }
      }
    }
  }
  FUN_00672320(uVar4,uVar5,puVar6,puVar7);
  ExceptionList = pvStack_34;
  return;
}

