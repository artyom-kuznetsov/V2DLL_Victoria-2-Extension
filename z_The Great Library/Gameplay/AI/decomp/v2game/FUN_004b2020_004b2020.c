// FUN_004b2020 @ 004b2020 body=[[004b2020, 004b20be] [004b20c0, 004b20d8] [004b20e0, 004b23b9]]


void FUN_004b2020(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba00fb;
  local_10 = ExceptionList;
  iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 300) * 4) + 0xe64);
  ExceptionList = &local_10;
  if (DAT_0131bb34 == 0) {
    ExceptionList = &local_10;
    iVar6 = FUN_00aae9af(0x188);
    local_8 = 0;
    if (iVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0041a160();
    }
    local_8 = 0xffffffff;
    FUN_00423700(uVar7);
  }
  local_24 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  if (0 < local_24) {
    local_14 = 0;
    do {
      iVar6 = *(int *)(local_14 + *(int *)(param_1 + 0x194));
      while (iVar5 = iVar6, iVar5 != 0) {
        local_18 = *(int *)(iVar5 + 0x27c);
        iVar6 = local_18;
        if (*(int *)(iVar5 + 0x58) != 0) {
          iVar3 = *(int *)(*(int *)(iVar5 + 0x68) + 0x30);
          if ((iVar3 == -1) || (*(int *)(iVar5 + 0x58) < iVar3)) {
            iVar3 = *(int *)(*(int *)(iVar5 + 0x68) + 0x34);
            iVar9 = local_18;
            if (local_18 == 0) break;
            do {
              iVar4 = *(int *)(iVar9 + 0x27c);
              iVar6 = *(int *)(*(int *)(iVar9 + 0x68) + 0x30);
              if (((iVar6 == -1) || (*(int *)(iVar9 + 0x58) < iVar6)) &&
                 ((iVar3 == -1 || (*(int *)(iVar9 + 0x58) + *(int *)(iVar5 + 0x58) < iVar3)))) {
                if ((*(int *)(iVar5 + 0x6c) == *(int *)(iVar9 + 0x6c)) &&
                   (*(int *)(iVar5 + 0x70) == *(int *)(iVar9 + 0x70))) {
                  FUN_00955fd0();
                  *(int *)(iVar5 + 0x158) = *(int *)(iVar5 + 0x158) + *(int *)(iVar9 + 0x158);
                  *(int *)(iVar5 + 0x15c) = *(int *)(iVar5 + 0x15c) + *(int *)(iVar9 + 0x15c);
                  *(int *)(iVar5 + 0x160) = *(int *)(iVar5 + 0x160) + *(int *)(iVar9 + 0x160);
                  *(int *)(iVar5 + 0x164) = *(int *)(iVar5 + 0x164) + *(int *)(iVar9 + 0x164);
                  *(int *)(iVar5 + 0x168) = *(int *)(iVar5 + 0x168) + *(int *)(iVar9 + 0x168);
                  *(int *)(iVar5 + 0x16c) = *(int *)(iVar5 + 0x16c) + *(int *)(iVar9 + 0x16c);
                  *(int *)(iVar5 + 0x170) = *(int *)(iVar5 + 0x170) + *(int *)(iVar9 + 0x170);
                  *(int *)(iVar5 + 0x174) = *(int *)(iVar5 + 0x174) + *(int *)(iVar9 + 0x174);
                  *(int *)(iVar5 + 0x178) = *(int *)(iVar5 + 0x178) + *(int *)(iVar9 + 0x178);
                  if (*(char *)(*(int *)(iVar9 + 0x68) + 0x40) == '\0') {
                    *(undefined4 *)(iVar9 + 0x60) = 0;
                  }
                  else {
                    iVar6 = *(int *)(iVar9 + 0x60);
                    if (0 < iVar6) {
                      iVar8 = *(int *)(*(int *)(iVar9 + 100) + 0x58);
                      local_1c = iVar6;
                      if (DAT_01258728 == (int *)0x0) {
                        DAT_01258728 = (int *)FUN_00aae9af(0x14);
                        if (DAT_01258728 == (int *)0x0) {
LAB_004b230f:
                          DAT_01258728 = (int *)0x0;
                        }
                        else {
                          *DAT_01258728 = 0;
                          DAT_01258728[1] = 0;
                          DAT_01258728[2] = 0;
                          *(undefined1 *)(DAT_01258728 + 4) = 0;
                        }
                      }
LAB_004b2316:
                      FUN_004ee550(iVar8 * 0xb0 + 0x10 + *DAT_01258728,&local_1c);
                      FUN_004d1020(iVar9,&local_1c);
                    }
                  }
                }
                else {
                  if ((*(int *)(iVar5 + 0x6c) != iVar2) || (99 < *(int *)(iVar9 + 0x58)))
                  goto LAB_004b2353;
                  FUN_00955fd0();
                  *(int *)(iVar5 + 0x158) = *(int *)(iVar5 + 0x158) + *(int *)(iVar9 + 0x158);
                  *(int *)(iVar5 + 0x15c) = *(int *)(iVar5 + 0x15c) + *(int *)(iVar9 + 0x15c);
                  *(int *)(iVar5 + 0x160) = *(int *)(iVar5 + 0x160) + *(int *)(iVar9 + 0x160);
                  *(int *)(iVar5 + 0x164) = *(int *)(iVar5 + 0x164) + *(int *)(iVar9 + 0x164);
                  *(int *)(iVar5 + 0x168) = *(int *)(iVar5 + 0x168) + *(int *)(iVar9 + 0x168);
                  *(int *)(iVar5 + 0x16c) = *(int *)(iVar5 + 0x16c) + *(int *)(iVar9 + 0x16c);
                  *(int *)(iVar5 + 0x170) = *(int *)(iVar5 + 0x170) + *(int *)(iVar9 + 0x170);
                  *(int *)(iVar5 + 0x174) = *(int *)(iVar5 + 0x174) + *(int *)(iVar9 + 0x174);
                  *(int *)(iVar5 + 0x178) = *(int *)(iVar5 + 0x178) + *(int *)(iVar9 + 0x178);
                  if (*(char *)(*(int *)(iVar9 + 0x68) + 0x40) == '\0') {
                    *(undefined4 *)(iVar9 + 0x60) = 0;
                  }
                  else {
                    iVar6 = *(int *)(iVar9 + 0x60);
                    if (0 < iVar6) {
                      iVar8 = *(int *)(*(int *)(iVar9 + 100) + 0x58);
                      local_1c = iVar6;
                      if (DAT_01258728 == (int *)0x0) {
                        DAT_01258728 = (int *)FUN_00aae9af(0x14);
                        if (DAT_01258728 == (int *)0x0) goto LAB_004b230f;
                        *DAT_01258728 = 0;
                        DAT_01258728[1] = 0;
                        DAT_01258728[2] = 0;
                        *(undefined1 *)(DAT_01258728 + 4) = 0;
                      }
                      goto LAB_004b2316;
                    }
                  }
                }
                iVar6 = *(int *)(iVar9 + 0x58);
                *(undefined4 *)(iVar9 + 0x58) = 0;
                *(int *)(iVar9 + 0x5c) = iVar6;
                if (iVar6 == 0) {
                  *(undefined4 *)(iVar9 + 0x5c) = 0;
                }
              }
LAB_004b2353:
              iVar9 = iVar4;
              iVar6 = local_18;
            } while (iVar4 != 0);
          }
        }
      }
      iVar6 = *(int *)(local_14 + *(int *)(param_1 + 0x194));
      while (iVar6 != 0) {
        iVar5 = *(int *)(iVar6 + 0x27c);
        piVar1 = (int *)(iVar6 + 0x58);
        iVar6 = iVar5;
        if (*piVar1 == 0) {
          FUN_004b9250(param_1);
        }
      }
      local_14 = local_14 + 0x10;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  ExceptionList = local_10;
  return;
}

