// FUN_005e3b50 @ 005e3b50  (requested 005E3B50, first bytes: 55 8B EC 83 E4 F8 64 A1)


void FUN_005e3b50(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  int in_ECX;
  int *piVar7;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined1 *local_50;
  int *local_4c;
  int aiStack_38 [2];
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00bbb829;
  local_14 = ExceptionList;
  local_4c = (int *)0x5e3b7b;
  ExceptionList = &local_14;
  cVar1 = FUN_005e5800();
  if (cVar1 != '\0') {
    local_4c = (int *)0x5e3b8b;
    cVar1 = FUN_005e5800();
    if (cVar1 != '\0') {
      local_4c = (int *)0x5e3b9a;
      iVar2 = FUN_0079dee0();
      local_4c = (int *)0x5e3ba3;
      iVar3 = FUN_0079dee0();
      if (*(int *)(iVar3 + 0xcc) == *(int *)(iVar2 + 0xcc)) {
        local_50 = *(undefined1 **)(in_ECX + 0x40);
        local_4c = *(int **)(in_ECX + 0x44);
        puStack_54 = (undefined1 *)0x5e3bca;
        iVar2 = FUN_009c16d0();
        if (iVar2 == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)(iVar2 + -8);
        }
        local_4c = (int *)0x5e3be1;
        puVar4 = (undefined1 *)(**(code **)(*piVar5 + 0x2c))();
        piVar5 = (int *)0x0;
        piStack_28 = (int *)0x0;
        piStack_24 = (int *)0x0;
        piStack_20 = (int *)0x0;
        iStack_c = 0;
        if (puVar4 == (undefined1 *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)(puVar4 + 0x38);
        }
        piVar7 = (int *)*piVar7;
        puStack_30 = puVar4;
        if (piVar7 != (int *)0x0) {
          aiStack_38[1] = 1;
          do {
            aiStack_38[0] = *piVar7;
            piVar7 = (int *)piVar7[2];
            if (aiStack_38[1] <= *(int *)(in_ECX + 0x8c)) {
              if ((aiStack_38 < piVar5) && (piStack_28 <= aiStack_38)) {
                iVar2 = (int)aiStack_38 - (int)piStack_28;
                if (piVar5 == piStack_20) {
                  local_4c = (int *)0x5e3c53;
                  FUN_00a513f0();
                  piVar5 = piStack_24;
                }
                puVar4 = puStack_30;
                if (piVar5 != (int *)0x0) {
                  *piVar5 = piStack_28[iVar2 >> 2];
                }
              }
              else {
                if (piVar5 == piStack_20) {
                  local_4c = (int *)0x5e3c79;
                  FUN_00a513f0();
                  piVar5 = piStack_24;
                }
                if (piVar5 != (int *)0x0) {
                  *piVar5 = aiStack_38[0];
                }
              }
              piVar5 = piVar5 + 1;
              aiStack_38[1] = aiStack_38[1] + 1;
              piStack_24 = piVar5;
            }
          } while (piVar7 != (int *)0x0);
        }
        iVar2 = (int)piVar5 - (int)piStack_28 >> 2;
        aiStack_38[1] = iVar2;
        if (iVar2 == 0) goto LAB_005e3ca7;
        local_4c = (int *)0x5e3cca;
        piVar5 = (int *)FUN_0079dee0();
        local_4c = (int *)0x5e3cd3;
        aiStack_38[0] = (**(code **)(*piVar5 + 0x30))();
        if (puVar4 == (undefined1 *)0x0) {
          puVar6 = (undefined1 *)0x0;
        }
        else {
          puVar6 = puVar4 + 0x38;
        }
        if (iVar2 < *(int *)(puVar6 + 8)) {
          local_4c = (int *)0x60;
          local_50 = (undefined1 *)0x5e3cf2;
          puStack_30 = (undefined1 *)FUN_00aae9af();
          iStack_c._0_1_ = 1;
          if (puStack_30 == (undefined1 *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            puStack_54 = *(undefined1 **)(*(int *)(puVar4 + 0xdc) + 0x58);
            uStack_5c = *(undefined4 *)(in_ECX + 0x90);
            local_4c = (int *)0x0;
            local_50 = (undefined1 *)0x0;
            puStack_58 = *(undefined1 **)(in_ECX + 0x94);
            uStack_64 = *(undefined4 *)(in_ECX + 0x90);
            puStack_2c = (undefined1 *)&uStack_64;
            uStack_60 = *(undefined4 *)(in_ECX + 0x94);
            piVar5 = (int *)FUN_0057db30(puStack_30,*(undefined4 *)(puVar4 + 0xc0),
                                         *(undefined4 *)(puVar4 + 0xc4));
          }
          iStack_c = (uint)iStack_c._1_3_ << 8;
          local_4c = (int *)0x5e3d6c;
          cVar1 = (**(code **)(*piVar5 + 0x38))();
          if (cVar1 != '\0') {
            local_4c = (int *)0x5e3d79;
            (**(code **)(*piVar5 + 0x18))();
          }
          local_4c = (int *)0x1;
          local_50 = (undefined1 *)0x5e3d83;
          (**(code **)*piVar5)();
          local_50 = *(undefined1 **)(in_ECX + 0x90);
          puStack_2c = (undefined1 *)&local_50;
          local_4c = *(int **)(in_ECX + 0x94);
          puStack_54 = (undefined1 *)0x5e3da2;
          iVar2 = FUN_009c16d0();
          if ((iVar2 == 0) || (piVar5 = (int *)(iVar2 + -8), piVar5 == (int *)0x0)) {
LAB_005e3ca7:
            local_4c = (int *)0x5e3cb0;
            FUN_00461f90();
            ExceptionList = local_14;
            return;
          }
          local_4c = (int *)0x5e3dc1;
          cVar1 = (**(code **)(*piVar5 + 0x38))();
          if (cVar1 == '\0') goto LAB_005e3ca7;
          local_4c = (int *)0x5e3dd2;
          puVar4 = (undefined1 *)(**(code **)(*piVar5 + 0x2c))();
          if (puVar4 == (undefined1 *)0x0) goto LAB_005e3ca7;
          iVar2 = 0;
          if (0 < aiStack_38[1]) {
            do {
              local_4c = (int *)0x6c;
              local_50 = (undefined1 *)0x5e3deb;
              puStack_2c = (undefined1 *)FUN_00aae9af();
              iStack_c._0_1_ = 2;
              if (puStack_2c == (undefined1 *)0x0) {
                piVar5 = (int *)0x0;
              }
              else {
                local_4c = (int *)piStack_28[iVar2];
                puStack_54 = *(undefined1 **)(puVar4 + 0x10);
                puStack_30 = (undefined1 *)&puStack_54;
                local_50 = *(undefined1 **)(puVar4 + 0x14);
                uStack_5c = 0x5e3e1d;
                puStack_58 = puStack_2c;
                piVar5 = (int *)FUN_005e1ee0();
              }
              iStack_c = (uint)iStack_c._1_3_ << 8;
              local_4c = (int *)0x5e3e31;
              cVar1 = (**(code **)(*piVar5 + 0x38))();
              if (cVar1 != '\0') {
                local_4c = (int *)0x5e3e3e;
                (**(code **)(*piVar5 + 0x18))();
              }
              local_4c = (int *)0x1;
              local_50 = (undefined1 *)0x5e3e48;
              (**(code **)*piVar5)();
              iVar2 = iVar2 + 1;
            } while (iVar2 < aiStack_38[1]);
          }
        }
        local_4c = (int *)0x5e3e5e;
        cVar1 = FUN_005d77a0();
        if (cVar1 != '\0') {
          local_4c = (int *)0x8c;
          local_50 = (undefined1 *)0x5e3e6c;
          puStack_2c = (undefined1 *)FUN_00aae9af();
          iStack_c._0_1_ = 3;
          if (puStack_2c == (undefined1 *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            local_4c = (int *)aiStack_38[0];
            puStack_58 = (undefined1 *)0x5e3e88;
            puStack_54 = puStack_2c;
            local_50 = puVar4;
            piVar5 = (int *)FUN_005e4480();
          }
          iStack_c = (uint)iStack_c._1_3_ << 8;
          local_4c = (int *)0x5e3e9c;
          cVar1 = (**(code **)(*piVar5 + 0x38))();
          if (cVar1 != '\0') {
            local_4c = (int *)0x5e3ea9;
            (**(code **)(*piVar5 + 0x18))();
          }
          local_4c = (int *)0x1;
          local_50 = (undefined1 *)0x5e3eb3;
          (**(code **)*piVar5)();
        }
        if (*(int *)(puVar4 + 0xcc) == *(int *)(DAT_012588e8 + 0xb60)) {
          local_4c = (int *)0x1;
          local_50 = (undefined1 *)0x0;
          puStack_54 = (undefined1 *)0x5e3ed5;
          FUN_00654120();
        }
        if (piStack_28 != (int *)0x0) {
          local_4c = piStack_28;
                    /* WARNING: Subroutine does not return */
          local_50 = &UNK_005e3ee3;
          FUN_00aae91b();
        }
      }
    }
  }
  ExceptionList = local_14;
  return;
}

