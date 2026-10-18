// FUN_004b81d0 @ 004b81d0 body=[[004b81d0, 004b8335] [004b8340, 004b846e]]


/* WARNING: Removing unreachable block (ram,0x004b8200) */

void FUN_004b81d0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 local_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5fdb6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*in_ECX != in_ECX[1]) {
    ExceptionList = &local_10;
    in_ECX[1] = *in_ECX;
  }
  local_2c = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 300) * 4);
  if (*(char *)(local_2c + 3000) == '\0') {
    if (DAT_0131bb34 == 0) {
      iVar2 = FUN_00aae9af(0x188);
      local_8 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0041a160();
      }
      local_8 = 0xffffffff;
      FUN_00423700(uVar3);
    }
    local_14 = DAT_0131bb34;
    if (DAT_0125fdd8 == 0) {
      iVar2 = FUN_00aae9af(0x1c);
      local_8 = 1;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_008b0060();
      }
      local_8 = 0xffffffff;
      FUN_005c2810(uVar3);
    }
    iVar2 = DAT_0125fdd8;
    iVar6 = *(int *)(local_14 + 0x10) - *(int *)(local_14 + 0xc) >> 2;
    local_28 = 1;
    if (1 < iVar6) {
      local_18 = 0x10;
      do {
        if (*(int *)(local_14 + 0x10) - *(int *)(local_14 + 0xc) >> 2 < local_28) {
          iVar4 = FUN_0096bb70();
        }
        else {
          iVar4 = *(int *)(*(int *)(local_14 + 0xc) + local_28 * 4);
        }
        iVar7 = local_1c;
        if (*(char *)(iVar4 + 0x42) != '\0') {
          iVar4 = *(int *)(local_18 + *(int *)(param_1 + 0x194));
          while (local_1c = iVar4, local_1c != 0) {
            local_24 = *(int *)(local_1c + 0x27c);
            local_20 = 3;
            iVar4 = local_24;
            iVar7 = local_1c;
            if (0xc < (int)(*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) & 0xfffffffcU)) {
              do {
                iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                           *(int *)(param_1 + 300) * 4) + 0xbcc) +
                                         0x310) +
                                *(int *)(*(int *)(*(int *)(iVar2 + 0xc) + local_20 * 4) + 0x24) * 4)
                ;
                if ((*(char *)(iVar4 + 0x39) != '\0') &&
                   (cVar1 = FUN_00514030(local_2c,param_1,local_30), cVar1 != '\0')) {
                  iVar7 = 0;
                  if (0 < (in_ECX[1] - *in_ECX) / 0xc) {
                    piVar5 = (int *)(*in_ECX + 4);
                    do {
                      if (*piVar5 == iVar4) break;
                      iVar7 = iVar7 + 1;
                      piVar5 = piVar5 + 3;
                    } while (iVar7 < (in_ECX[1] - *in_ECX) / 0xc);
                  }
                  FUN_004bec00();
                }
                local_20 = local_20 + 1;
                iVar4 = local_24;
                iVar7 = local_1c;
              } while (local_20 < *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2);
            }
          }
        }
        local_1c = iVar7;
        local_18 = local_18 + 0x10;
        local_28 = local_28 + 1;
      } while (local_28 < iVar6);
    }
  }
  ExceptionList = local_10;
  return;
}

