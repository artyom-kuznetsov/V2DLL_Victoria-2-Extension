// FUN_00939450 @ 00939450 body=[[00939450, 0093971d] [00939726, 00939925]]


undefined4 FUN_00939450(int param_1,uint *param_2,char param_3,char param_4,char param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  char *local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_3c;
  undefined **local_34 [3];
  undefined1 local_28 [4];
  undefined4 *local_24;
  undefined4 local_20;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b42152;
  local_14 = ExceptionList;
  uVar10 = *(uint *)(param_1 + 0x30);
  local_4c = *param_2;
  puVar1 = (uint *)(param_1 + 0x2c);
  uVar5 = *puVar1;
  if (uVar5 != uVar10) {
    do {
      if (*(uint *)(uVar5 + 4) == param_2[1]) break;
      uVar5 = uVar5 + 8;
    } while (uVar5 != uVar10);
    if (uVar5 != uVar10) {
      return 0;
    }
  }
  uVar10 = *(uint *)(param_1 + 0x40);
  puVar12 = (uint *)(param_1 + 0x3c);
  uVar5 = *puVar12;
  if (uVar5 != uVar10) {
    do {
      if (*(uint *)(uVar5 + 4) == param_2[1]) break;
      uVar5 = uVar5 + 8;
    } while (uVar5 != uVar10);
    if (uVar5 != uVar10) {
      return 0;
    }
  }
  ExceptionList = &local_14;
  if (param_5 == '\0') {
    ExceptionList = &local_14;
    cVar4 = FUN_0093c590(param_1 + 0xdc);
    if (cVar4 != '\0') {
      ExceptionList = local_14;
      return 0;
    }
    cVar4 = FUN_0093c590(param_1 + 0xdc);
    if (cVar4 != '\0') {
      ExceptionList = local_14;
      return 0;
    }
  }
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4);
  local_4c = *(uint *)(iVar2 + 0x1428);
  if (*(int *)(iVar2 + 0x142c) != 0) {
    if (param_3 == '\0') {
      local_48 = *(uint *)(iVar2 + 0x142c);
    }
    else {
      local_48 = *(uint *)(iVar2 + 0x142c);
    }
    cVar4 = FUN_0042bb00();
    if (cVar4 != '\0') {
      ExceptionList = local_14;
      return 0;
    }
  }
  if (((param_4 == '\0') && (*(char *)(param_1 + 0xfd) != '\0')) &&
     (*(char *)(DAT_012588e8 + 0xb94) == '\0')) {
    ExceptionList = local_14;
    return 0;
  }
  uVar10 = *(uint *)(iVar2 + 0xda8);
  local_20 = 0;
  local_24 = (undefined4 *)FUN_00aae9af(0x18);
  if (local_24 == (undefined4 *)0x0) {
    local_50 = (char *)0x0;
    std::exception::exception((exception *)local_34,&local_50);
    local_34[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00e6fb20);
  }
  *local_24 = local_24;
  local_24[1] = local_24;
  local_24[2] = local_24;
  *(undefined1 *)(local_24 + 5) = 1;
  *(undefined1 *)((int)local_24 + 0x15) = 1;
  local_c = 0;
  while ((puVar8 = local_24, *(uint *)(iVar2 + 0xda8) <= uVar10 &&
         (uVar10 < *(uint *)(iVar2 + 0xdac)))) {
    iVar3 = *(int *)(uVar10 + 4);
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar6 = *puVar1;
    local_4c = uVar10 + 8;
    if (uVar6 != uVar5) {
      do {
        if (*(int *)(uVar6 + 4) == iVar3) break;
        uVar6 = uVar6 + 8;
      } while (uVar6 != uVar5);
      if (uVar6 != uVar5) goto LAB_009396f7;
    }
    uVar10 = *(uint *)(param_1 + 0x40);
    uVar5 = *puVar12;
    if (uVar5 != uVar10) {
      do {
        if (*(int *)(uVar5 + 4) == iVar3) break;
        uVar5 = uVar5 + 8;
      } while (uVar5 != uVar10);
      if (uVar5 != uVar10) {
LAB_009396f7:
        local_c = 1;
        FUN_00445600(*local_24,local_24);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_24);
      }
    }
    iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + iVar3 * 4) + 0x34);
    uVar5 = *(uint *)(iVar3 + 0x2c);
    uVar10 = *(uint *)(iVar3 + 0x30);
    if (uVar5 == uVar10) {
LAB_009396bd:
      for (uVar5 = *(uint *)(iVar3 + 0x3c);
          (uVar10 = local_4c, *(uint *)(iVar3 + 0x3c) <= uVar5 && (uVar5 < *(uint *)(iVar3 + 0x40)))
          ; uVar5 = uVar5 + 8) {
        uVar7 = FUN_004ca000();
        FUN_0093de60(local_28,uVar7);
      }
    }
    else {
      uVar6 = uVar5;
      do {
        if (*(uint *)(uVar6 + 4) == param_2[1]) break;
        uVar6 = uVar6 + 8;
      } while (uVar6 != uVar10);
      if (uVar6 == uVar10) goto LAB_009396bd;
      for (; (uVar10 = local_4c, *(uint *)(iVar3 + 0x2c) <= uVar5 &&
             (uVar5 < *(uint *)(iVar3 + 0x30))); uVar5 = uVar5 + 8) {
        uVar7 = FUN_004ca000();
        FUN_0093de60(local_28,uVar7);
      }
    }
  }
  if (param_3 == '\0') {
    puVar12 = (uint *)*puVar1;
    puVar1 = (uint *)*puVar1;
    do {
      if ((puVar12 < puVar1) || (*(uint **)(param_1 + 0x30) <= puVar12)) goto LAB_009398d5;
      local_4c = *puVar12;
      uVar10 = puVar12[1];
      puVar12 = puVar12 + 2;
      local_48 = uVar10;
      puVar9 = (undefined4 *)FUN_0093d0f0(&local_4c);
      if ((undefined4 *)*puVar9 != puVar8) goto LAB_009397fb;
      iVar3 = *(int *)(*(int *)(iVar2 + 0xbe8) + uVar10 * 4);
    } while ((((*(int *)(iVar3 + 0x34) != 0) ||
              (*(int *)(iVar3 + 0x6c) <= *(int *)(DAT_012588e8 + 0xb0c))) || (param_4 != '\0')) ||
            (((*(char *)(iVar2 + 0xcf5) != '\0' || (*(char *)(iVar2 + 0xcf4) != '\0')) &&
             (cVar4 = FUN_0042bb00(), cVar4 != '\0'))));
  }
  else {
    puVar12 = (uint *)*puVar12;
    puVar11 = puVar12;
    do {
      do {
        if ((puVar11 < puVar12) || (*(uint **)(param_1 + 0x40) <= puVar11)) {
LAB_009398d5:
          local_c = 0xffffffff;
          FUN_00929b90(local_28);
          ExceptionList = pvStack_18;
          return 1;
        }
        local_4c = *puVar11;
        uVar10 = puVar11[1];
        puVar11 = puVar11 + 2;
        local_48 = uVar10;
        puVar8 = (undefined4 *)FUN_0093d0f0(&local_4c);
        if ((undefined4 *)*puVar8 != local_24) {
LAB_009397fb:
          local_c = 0xffffffff;
          FUN_00929b90(local_28);
          ExceptionList = local_14;
          return 0;
        }
        iVar3 = *(int *)(*(int *)(iVar2 + 0xbe8) + uVar10 * 4);
      } while ((*(int *)(iVar3 + 0x34) != 0) ||
              (*(int *)(iVar3 + 0x6c) <= *(int *)(DAT_012588e8 + 0xb0c)));
      if ((*(char *)(iVar2 + 0xcf5) == '\0') && (*(char *)(iVar2 + 0xcf4) == '\0')) break;
      uVar10 = *(uint *)(param_1 + 0x30);
      local_3c = *(undefined4 *)(iVar2 + 0xcf8);
      uVar5 = *puVar1;
      if (uVar5 == uVar10) break;
      do {
        if (*(int *)(uVar5 + 4) == *(int *)(iVar2 + 0xcfc)) break;
        uVar5 = uVar5 + 8;
      } while (uVar5 != uVar10);
    } while (uVar5 != uVar10);
  }
  local_c = 0xffffffff;
  FUN_00929b90(local_28);
  ExceptionList = local_14;
  return 0;
}

