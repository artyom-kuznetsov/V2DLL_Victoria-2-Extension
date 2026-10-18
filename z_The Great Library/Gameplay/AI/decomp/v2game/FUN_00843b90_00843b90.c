// FUN_00843b90 @ 00843b90  (requested 00843B90, first bytes: 55 8B EC 6A FF 68 B0 AC)


byte FUN_00843b90(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int unaff_EDI;
  undefined1 local_e8 [28];
  undefined1 local_cc [28];
  undefined1 local_b0 [28];
  undefined1 local_94 [28];
  undefined1 local_78 [28];
  undefined4 local_5c;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined4 local_44;
  int local_3c;
  int local_38;
  int *local_34;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  char local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4acb0;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  cVar3 = FUN_00911760(0);
  if (cVar3 == '\0') {
    ExceptionList = local_10;
    return 0;
  }
  local_20 = *(undefined4 *)(unaff_EDI + 8);
  local_1c = *(undefined4 *)(unaff_EDI + 0xc);
  piVar4 = (int *)FUN_00425f80(local_4c);
  iVar7 = DAT_012588e8;
  local_24 = *piVar4 / 1000;
  if (local_24 < 0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_2 * 4);
  local_1c = 0;
  local_28 = 0;
  local_2c = 0x2d2d2d;
  local_20 = 0x2d2d2d;
  if (*(int *)(DAT_012588e8 + 0xb0c) < *(int *)(iVar1 + 0x80)) {
    ExceptionList = local_10;
    return 0;
  }
  iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if (iVar2 != 0) {
    local_34 = *(int **)(unaff_EDI + 8);
    if (*(int *)(iVar2 + 0x18) == *(int *)(unaff_EDI + 0xc)) {
      local_2c = *(undefined4 *)(iVar2 + 0x1c);
      local_28 = *(int *)(iVar2 + 0x20);
      puVar5 = (undefined4 *)FUN_00425ac0();
    }
    else {
      local_44 = local_34;
      if (*(int *)(iVar2 + 0x20) != *(int *)(unaff_EDI + 0xc)) goto LAB_00843cb3;
      local_28 = *(int *)(iVar2 + 0x18);
      local_2c = *(undefined4 *)(iVar2 + 0x14);
      puVar5 = (undefined4 *)FUN_00425a40();
    }
    local_1c = puVar5[1];
    local_20 = *puVar5;
  }
LAB_00843cb3:
  local_34 = *(int **)(unaff_EDI + 8);
  iVar2 = *(int *)(*(int *)(iVar7 + 0xacc) + *(int *)(iVar1 + 0xbe4) * 4);
  if (*(int *)(iVar2 + 0x16c) !=
      *(int *)(*(int *)(*(int *)(iVar7 + 0xacc) +
                       *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xc) * 4)
                               + 0xbe4) * 4) + 0x16c)) {
    (**(code **)(**(int **)(iVar2 + 0x16c) + 0x2c))(local_e8);
    local_8 = 0;
    local_14 = 1;
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') {
      (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar1 + 0xbe4) * 4)
                             + 0x16c) + 0x2c))(local_b0);
      local_8 = 1;
      local_14 = 3;
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        local_34 = *(int **)(unaff_EDI + 8);
        (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                        *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                         *(int *)(unaff_EDI + 0xc) * 4) + 0xbe4) * 4
                                        ) + 0x16c) + 0x2c))(local_94);
        local_8 = 2;
        local_14 = 7;
        cVar3 = FUN_0040b360();
        if (cVar3 != '\0') goto LAB_00843e58;
      }
      (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar1 + 0xbe4) * 4)
                             + 0x16c) + 0x2c))(local_cc);
      local_8 = 3;
      local_14 = local_14 | 8;
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        local_34 = *(int **)(unaff_EDI + 8);
        (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                        *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                         *(int *)(unaff_EDI + 0xc) * 4) + 0xbe4) * 4
                                        ) + 0x16c) + 0x2c))(local_78);
        local_14 = local_14 | 0x10;
        cVar3 = FUN_0040b360();
        if (cVar3 != '\0') goto LAB_00843e58;
      }
      local_15 = '\0';
      goto LAB_00843e5c;
    }
  }
LAB_00843e58:
  local_15 = '\x01';
LAB_00843e5c:
  if ((local_14 & 0x10) != 0) {
    local_14 = local_14 & 0xffffffef;
    FUN_00408ad0();
  }
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    FUN_00408ad0();
  }
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    FUN_00408ad0();
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    FUN_00408ad0();
  }
  if ((local_14 & 1) != 0) {
    FUN_00408ad0();
  }
  local_34 = *(int **)(unaff_EDI + 8);
  if ((*(char *)(*(int *)(unaff_EDI + 0xc) + *(int *)(iVar1 + 0xd08)) == '\0') && (local_15 == '\0')
     ) {
    FUN_00539230();
    piVar4 = *(int **)(iVar1 + 0x9d8);
    do {
      do {
        if ((piVar4 < *(int **)(iVar1 + 0x9d8)) || (*(int **)(iVar1 + 0x9dc) <= piVar4)) {
          local_24 = local_24 + -100;
          goto LAB_00844013;
        }
        local_34 = piVar4 + 1;
        iVar7 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar4 * 4);
        piVar4 = local_34;
      } while (*(int *)(*(int *)(*(int *)(iVar7 + 0x118) + DAT_01258720 * 4) + 0x20) < 1);
      local_5c = *(undefined4 *)(unaff_EDI + 8);
      FUN_004fb7d0(iVar1,&local_38,iVar7,
                   *(undefined4 *)
                    (*(int *)(DAT_012588e8 + 0xacc) +
                    *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xc) * 4) +
                            0xbe4) * 4));
      if (local_28 == 0) {
        local_14 = 100000000;
        puVar6 = &local_14;
      }
      else {
        puVar6 = (uint *)FUN_004fb7d0(iVar1,local_48,iVar7,
                                      *(undefined4 *)
                                       (*(int *)(DAT_012588e8 + 0xacc) +
                                       *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_28 * 4)
                                               + 0xbe4) * 4));
      }
    } while ((local_3c <= local_38) && (piVar4 = local_34, local_3c <= (int)*puVar6));
  }
  if ((local_28 != 0) &&
     (*(char *)(local_28 + *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2 * 4) + 0xd08)) !=
      '\0')) {
    local_24 = local_24 + 0x28;
  }
  if ((local_1c != 0) &&
     (*(char *)(local_1c + *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2 * 4) + 0xd08)) !=
      '\0')) {
    local_24 = local_24 + 0x14;
  }
LAB_00844013:
  iVar7 = FUN_009b7610();
  ExceptionList = local_10;
  return (local_24 <= iVar7 % 100) - 1U & 100;
}

