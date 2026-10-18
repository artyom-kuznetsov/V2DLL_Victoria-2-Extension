// FUN_00592910 @ 00592910 body=[[00592910, 00592a25]]


undefined4 * FUN_00592910(undefined4 *param_1)

{
  undefined3 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3fafc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CBattleSide::vftable;
  param_1[2] = 0x2d2d2d;
  param_1[3] = 0;
  param_1[9] = 0xf;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uStack_7 = 0;
  uVar1 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  param_1[0xf] = 0;
  if (DAT_0125fdd8 == 0) {
    iVar2 = FUN_00aae9af(0x1c);
    local_8 = 2;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_008b0060();
    }
    local_8 = 1;
    FUN_005c2810(uVar3);
    uVar1 = uStack_7;
  }
  uStack_7 = uVar1;
  FUN_0068ea30(*(int *)(DAT_0125fdd8 + 0x10) - *(int *)(DAT_0125fdd8 + 0xc) >> 2);
  if (DAT_0125fdd8 == 0) {
    iVar2 = FUN_00aae9af(0x1c);
    _local_8 = CONCAT31(uStack_7,3);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_008b0060();
    }
    FUN_005c2810(uVar3);
  }
  iVar4 = 0;
  iVar2 = *(int *)(DAT_0125fdd8 + 0x10) - *(int *)(DAT_0125fdd8 + 0xc) >> 2;
  if (0 < iVar2) {
    do {
      *(undefined4 *)(param_1[0xb] + iVar4 * 4) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  ExceptionList = local_10;
  return param_1;
}

