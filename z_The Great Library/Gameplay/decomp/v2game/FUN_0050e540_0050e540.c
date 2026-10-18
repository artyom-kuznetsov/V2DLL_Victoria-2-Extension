// FUN_0050e540 @ 0050e540  (requested 0050E540, first bytes: 55 8B EC 64 A1 00 00 00)


void FUN_0050e540(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined **local_88 [19];
  undefined1 local_3c [28];
  int *local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5ae13;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((((*(int *)(param_1 + 0xbe4) == 0) &&
       (ExceptionList = &local_10, *(int *)(param_1 + 0x20) != 0)) &&
      ((*(char *)(param_1 + 0x1c) != 'R' ||
       ((*(char *)(param_1 + 0x1d) != 'E' ||
        (ExceptionList = &local_10, *(char *)(param_1 + 0x1e) != 'B')))))) &&
     (ExceptionList = &local_10,
     0 < (int)(*(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) & 0xfffffffcU))) {
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 0;
    FUN_004015b0(local_3c,0x1598,0x10004);
    local_8._0_1_ = 1;
    uVar3 = FUN_00987d20(" has NO capital defined.");
    uVar3 = FUN_00418e30(uVar3);
    FUN_00401280(uVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00987ac0(local_88);
    local_88[0] = std::ios_base::vftable;
    FUN_00aad52d(local_88);
    local_8 = 0xffffffff;
    FUN_00408ad0();
  }
  if (((*(int *)(param_1 + 0xbe4) == 0) ||
      (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0xbe4) * 4) + 300) !=
       *(int *)(param_1 + 0x20))) &&
     (0 < (int)(*(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) & 0xfffffffcU))) {
    local_20 = *(int **)(param_1 + 0x9d8);
    local_18 = 0;
    piVar6 = local_20;
    local_1c = 0;
    while ((local_20 <= piVar6 && (piVar6 < *(int **)(param_1 + 0x9dc)))) {
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar6 * 4);
      iVar2 = *(int *)(iVar1 + 0x14c);
      iVar5 = *(int *)(iVar1 + 0x148);
      piVar6 = piVar6 + 1;
      iVar4 = (*(int *)(iVar1 + 0x198) - *(int *)(iVar1 + 0x194) >> 4) + 1;
      if (iVar5 != iVar2) {
        do {
          if (*(int *)(iVar5 + 4) == *(int *)(param_1 + 0x20)) break;
          iVar5 = iVar5 + 8;
        } while (iVar5 != iVar2);
        if (iVar5 != iVar2) {
          iVar4 = iVar4 * 100;
        }
      }
      if (local_18 < iVar4) {
        local_18 = iVar4;
        local_1c = iVar1;
      }
    }
    if (local_1c != 0) {
      FUN_0050e4c0(*(undefined4 *)(local_1c + 0x58),1);
    }
  }
  ExceptionList = local_10;
  return;
}

