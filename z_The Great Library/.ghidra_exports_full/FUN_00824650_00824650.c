// FUN_00824650 @ 00824650 body=[[00824650, 00824aad]]


void FUN_00824650(int *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  void **ppvVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iStack_48;
  int *piStack_44;
  int local_28;
  int *local_24;
  float local_20;
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6342b;
  local_10 = ExceptionList;
  if ((0 < param_1[0x21]) &&
     (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4) + 0x67c) != '\0')) {
    iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4);
    local_18 = (int *)(*(int *)(iVar7 + 0xdac) - *(int *)(iVar7 + 0xda8) >> 3);
    local_1c = 0;
    ExceptionList = &local_10;
    ppvVar5 = &local_10;
    if (0 < (int)local_18) {
      do {
        piStack_44 = (int *)0x5;
        iStack_48 = 0x8246e9;
        local_24 = (int *)FUN_005dc0a0();
        piStack_44 = (int *)0x4;
        iStack_48 = 0x8246f9;
        iVar7 = FUN_005dc0a0();
        local_1c = iVar7 + local_1c + (int)local_24;
        local_18 = (int *)((int)local_18 + -1);
        ppvVar5 = ExceptionList;
      } while (local_18 != (int *)0x0);
    }
    ExceptionList = ppvVar5;
    local_18 = (int *)param_1[0x26];
    if (local_18 != (int *)0x0) {
LAB_00824726:
      puVar1 = (undefined4 *)param_1[0x11];
      iVar7 = 0;
      while (puVar1 != (undefined4 *)0x0) {
        piVar10 = (int *)*puVar1;
        puVar1 = (undefined4 *)puVar1[2];
        piStack_44 = (int *)0x82473f;
        iVar8 = (**(code **)(*piVar10 + 0x1e4))();
        if (iVar8 == 0xf) {
          iVar7 = iVar7 + 1;
        }
      }
      if (iVar7 < param_1[0x21]) {
        fVar2 = (float)local_18[1];
        piVar10 = local_18 + 3;
        iVar7 = *local_18;
        piVar9 = local_24;
        local_18 = (int *)*piVar10;
        if (0.0 < fVar2) {
          puVar1 = (undefined4 *)param_1[0x11];
          do {
            do {
              do {
                if (puVar1 == (undefined4 *)0x0) {
                  local_24 = (int *)param_1[0x1a];
                  local_20 = 1e+11;
                  local_14 = 0;
                  if (local_24 != (int *)0x0) goto LAB_00824807;
                  goto LAB_00824a91;
                }
                piVar10 = (int *)*puVar1;
                puVar1 = (undefined4 *)puVar1[2];
                piStack_44 = (int *)0x824791;
                local_24 = piVar9;
                cVar6 = (**(code **)(*piVar10 + 0xf0))();
                piVar9 = local_24;
              } while (cVar6 == '\0');
              piStack_44 = (int *)0x8247a1;
              piVar9 = (int *)(**(code **)(*piVar10 + 0xf4))();
              piStack_44 = (int *)0x8247ad;
              iVar8 = (**(code **)(*piVar9 + 0x1e4))();
              piVar9 = local_24;
            } while (iVar8 != 0xf);
            piStack_44 = (int *)0x8247be;
            piVar10 = (int *)(**(code **)(*piVar10 + 0xf4))();
            piStack_44 = (int *)0x8247ca;
            iVar8 = (**(code **)(*piVar10 + 0x1ec))();
            piVar9 = local_24;
          } while (*(int *)(*(int *)(iVar8 + 0xac) + 0x58) != *(int *)(iVar7 + 0x58));
        }
        goto LAB_00824a91;
      }
    }
  }
  ExceptionList = local_10;
  return;
LAB_00824807:
  do {
    iVar8 = *local_24;
    local_24 = (int *)local_24[2];
    if (*(int *)(iVar8 + 0x74) == 0) {
      piVar10 = *(int **)(iVar8 + 0x90);
      iVar11 = 0;
      if (piVar10 != (int *)0x0) {
        do {
          iVar3 = *piVar10;
          piVar10 = (int *)piVar10[2];
          iVar11 = iVar11 + *(int *)(*(int *)(iVar3 + 0x38) + 600) / 1000;
        } while (piVar10 != (int *)0x0);
        if (0 < iVar11) goto LAB_0082491d;
      }
      if ((*(char *)(iVar8 + 0x104) == '\0') && (1 < *(int *)(iVar8 + 0x98))) {
        if (0 < *(int *)(iVar8 + 0xa0)) {
          piVar10 = (int *)param_1[0x22];
          do {
            if ((piVar10 < (int *)param_1[0x22]) || ((int *)param_1[0x23] <= piVar10))
            goto LAB_0082491d;
            iVar11 = *piVar10;
            piVar10 = piVar10 + 1;
          } while (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar8 + 0xa0) * 4) +
                           0x58) != iVar11);
        }
        piStack_44 = (int *)0x8248b7;
        iVar11 = FUN_005cd540();
        if (local_1c < iVar11) {
          piStack_44 = (int *)0x8248c3;
          cVar6 = FUN_00825140();
          if (cVar6 != '\0') {
            iStack_48 = *(int *)(*(int *)(iVar8 + 0xdc) + 0x58);
            piStack_44 = (int *)0x0;
            FUN_0049b7f0(&local_28);
            if ((float)local_28 / 1000.0 < local_20) {
              local_20 = (float)local_28 / 1000.0;
              local_14 = iVar8;
            }
          }
        }
      }
    }
LAB_0082491d:
  } while (local_24 != (int *)0x0);
  piVar9 = local_24;
  if (local_14 != 0) {
    if (4 < *(int *)(local_14 + 0x98)) {
      piStack_44 = (int *)0x824949;
      DAT_0131ca68 = FUN_009c12d0();
      uVar12 = (uint)DAT_01258a90;
      iVar11 = DAT_01258a9c + 1;
      local_24 = &iStack_48;
      uVar13 = *(undefined4 *)(local_14 + 0xdc);
      DAT_01258a9c = iVar11;
      iStack_48 = uVar12 + 0x1268;
      piStack_44 = (int *)iVar11;
      (**(code **)(*param_1 + 0xe8))(uVar13);
      FUN_0084fbb0(uVar13);
      iVar8 = *(int *)(local_14 + 0x98);
      while (4 < iVar8) {
        piStack_44 = (int *)0x8249a9;
        iVar8 = FUN_00825210();
        if (iVar8 == 0) break;
        local_24 = &iStack_48;
        iStack_48 = uVar12 + 0x1268;
        piStack_44 = (int *)iVar11;
        (**(code **)(*param_1 + 0xe8))();
        FUN_0084fd10(iVar8);
        iVar8 = *(int *)(local_14 + 0x98);
      }
    }
    piStack_44 = (int *)0xc0;
    iStack_48 = 0x8249e8;
    piVar10 = (int *)FUN_00aae9af();
    local_8 = 0;
    local_24 = piVar10;
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piStack_44 = (int *)0x824a07;
      (**(code **)(*param_1 + 0xe8))();
      piStack_44 = (int *)0x824a0e;
      FUN_00860d30();
      piVar10[0x2b] = 0;
      *piVar10 = (int)CAINavalBlockadePlan::vftable;
      piVar10[0x2c] = 0;
      piVar10[0x2d] = 0;
      piVar10[0x2e] = 0;
      *(undefined1 *)(piVar10 + 0x2f) = 0;
    }
    local_8 = 0xffffffff;
    piStack_44 = param_1;
    iStack_48 = 0x824a4c;
    (**(code **)(*piVar10 + 0xbc))();
    iStack_48 = 0;
    (**(code **)(*piVar10 + 0x204))(iVar7);
    (**(code **)(*piVar10 + 0xcc))();
    (**(code **)(*param_1 + 0x114))(piVar10);
    pcVar4 = *(code **)(*piVar10 + 0x1b8);
    piVar10[0x1b] = (int)fVar2;
    (*pcVar4)(local_14);
    piVar9 = local_24;
  }
LAB_00824a91:
  local_24 = piVar9;
  if (local_18 == (int *)0x0) {
    ExceptionList = local_10;
    return;
  }
  goto LAB_00824726;
}

