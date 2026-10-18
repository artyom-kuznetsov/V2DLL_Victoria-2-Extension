// FUN_0088df10 @ 0088df10 body=[[0088df10, 0088e132] [0088e136, 0088e141] [0088e145, 0088e2b1] [0088e2b5, 0088e2c8]]


void FUN_0088df10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int local_54;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb8828;
  local_14 = ExceptionList;
  local_54 = param_1;
  ExceptionList = &local_14;
  FUN_0088e620();
  iVar3 = local_34;
  if ((((char)local_38 == 'R') && ((char)(local_38 >> 8) == 'E')) && (local_38._2_1_ == 'B')) {
    local_38 = *(uint *)(param_1 + 0x38);
    local_34 = *(undefined4 *)(param_1 + 0x3c);
    iVar3 = DAT_01258a94;
    if (local_38 < 0x1269) {
      iVar3 = DAT_01258a98;
    }
    if (iVar3 != 0) {
      local_54 = 0x88df86;
      iVar3 = FUN_009c1d40();
      if (iVar3 != 0) {
        local_54 = *(int *)(param_1 + 0xc);
        FUN_004e7290(iVar3,*(undefined4 *)(param_1 + 8));
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_34 * 4);
    if (((int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU) < 1) ||
       ((*(char *)(iVar1 + 0xcf5) == '\0' && (*(char *)(iVar1 + 0xcf4) == '\0')))) {
      local_54 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
      local_30 = *(undefined4 *)(param_1 + 8);
      puVar4 = (uint *)FUN_00519a40();
      for (uVar5 = *puVar4; (uVar5 != puVar4[1] && (*(int *)(uVar5 + 4) != iVar3));
          uVar5 = uVar5 + 8) {
      }
      if ((*puVar4 <= uVar5) && (uVar5 < puVar4[1])) {
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_c = 0;
        for (piVar8 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar3 * 4) + 0x9f8);
            piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
          iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar8 * 4);
          local_30 = *(undefined4 *)(param_1 + 8);
          if (((*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                        *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4)
                                + 0xbe4) * 4) != iVar3) &&
              (*(int *)(iVar3 + 300) == *(int *)(param_1 + 0xc))) &&
             (*(int *)(iVar3 + 0x134) == *(int *)(param_1 + 0xc))) {
            local_40 = *(undefined1 **)(iVar3 + 0x58);
            local_54 = 0x88e0fb;
            FUN_004e9b90();
          }
        }
        local_40 = (undefined1 *)0x2d2d2d;
        local_3c = 0;
        if (DAT_0125d50c == 0) {
          local_54 = 1;
          iVar3 = FUN_00aae9af();
          if (iVar3 == DAT_0125d50c) {
            local_54 = 0;
            DAT_0125d50c = iVar3;
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_54 = DAT_0125d50c;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_004ecb50(&local_28,0,&local_40,local_38);
        local_54 = 0x24;
        piVar6 = (int *)FUN_00aae9af();
        piVar8 = (int *)0x0;
        if (piVar6 != (int *)0x0) {
          local_54 = 0x88e174;
          FUN_0057fb40();
          *piVar6 = (int)CVassal::vftable;
          piVar8 = piVar6;
        }
        iVar2 = DAT_012588e8;
        iVar3 = *(int *)(param_1 + 0xc);
        iVar1 = *(int *)(DAT_012588e8 + 0xb0c);
        piVar8[2] = *(int *)(param_1 + 8);
        piVar8[4] = local_38;
        piVar8[3] = iVar3;
        iVar3 = DAT_012587e4;
        piVar8[5] = local_34;
        piVar8[6] = iVar1;
        local_30 = *(undefined4 *)(param_1 + 8);
        iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + *(int *)(param_1 + 0xc) * 4) +
                                 0xbe8) + local_34 * 4);
        *(undefined1 *)(iVar3 + 0x71) = 1;
        *(int **)(iVar3 + 0x24) = piVar8;
        local_40 = *(undefined1 **)(iVar2 + 0xa88);
        local_54 = 0x10;
        puVar7 = (undefined4 *)FUN_00aae9af();
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = piVar8;
          puVar7[1] = local_40;
          puVar7[2] = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
        }
        iVar3 = *(int *)(iVar2 + 0xa8c);
        *(undefined4 **)(iVar2 + 0xa88) = puVar7;
        *(int *)(iVar2 + 0xa8c) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)(iVar2 + 0xa84) = puVar7;
        }
        else {
          *(undefined4 **)(local_40 + 8) = puVar7;
        }
        local_54 = 0x88e222;
        (**(code **)(*piVar8 + 0x28))();
        iVar3 = DAT_012587e4;
        local_40 = (undefined1 *)&local_54;
        local_54 = 500000;
        local_30 = *(undefined4 *)(param_1 + 8);
        FUN_005179e0();
        local_30 = *(undefined4 *)(param_1 + 8);
        local_54 = 0;
        FUN_00513a90(*(undefined4 *)
                      (*(int *)(*(int *)(iVar3 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xbd0),1,0);
        iVar3 = DAT_012587e4;
        *(undefined1 *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_34 * 4) + 0x1434) = 1;
        local_30 = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(*(int *)(*(int *)(iVar3 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x1434) = 1;
        if (local_28 != 0) {
          local_54 = local_28;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    else {
      local_38 = *(undefined4 *)(iVar1 + 0xcf8);
      piVar8 = *(int **)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(iVar1 + 0xcfc) * 4) + 0x24);
      if (piVar8 != (int *)0x0) {
        local_54 = 0x88e013;
        (**(code **)(*piVar8 + 0x2c))();
        local_54 = 0x88e024;
        FUN_0090e050();
        local_54 = 1;
        (**(code **)*piVar8)();
        ExceptionList = pvStack_18;
        return;
      }
    }
  }
  ExceptionList = local_14;
  return;
}

