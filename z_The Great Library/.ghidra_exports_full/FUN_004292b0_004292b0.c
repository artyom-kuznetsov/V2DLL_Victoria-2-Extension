// FUN_004292b0 @ 004292b0 body=[[004292b0, 004293e5] [004293e9, 00429457] [0042945b, 00429479] [00429480, 004294f5] [004294f9, 004295a5] [004295a9, 00429655] [00429659, 0042968c] [00429690, 00429781] [00429785, 00429838] [0042983c, 004298d9] [004298dd, 00429991] [00429995, 00429a62] [00429a66, 00429b09] [00429b0d, 00429b23]]


/* WARNING: Removing unreachable block (ram,0x00429988) */
/* WARNING: Removing unreachable block (ram,0x0042982f) */
/* WARNING: Removing unreachable block (ram,0x0042964c) */
/* WARNING: Removing unreachable block (ram,0x004294ec) */
/* WARNING: Removing unreachable block (ram,0x0042944e) */
/* WARNING: Removing unreachable block (ram,0x0042959c) */
/* WARNING: Removing unreachable block (ram,0x00429778) */
/* WARNING: Removing unreachable block (ram,0x004298d0) */
/* WARNING: Removing unreachable block (ram,0x00429a59) */
/* WARNING: Removing unreachable block (ram,0x004293dc) */

void FUN_004292b0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int in_ECX;
  int local_268;
  int local_264;
  undefined4 uStack_23c;
  uint uStack_228;
  char local_21c [256];
  undefined4 uStack_11c;
  char acStack_118 [260];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5c359;
  pvStack_14 = ExceptionList;
  uVar2 = *(undefined4 *)(in_ECX + 0x10);
  ExceptionList = &pvStack_14;
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    _sprintf(local_21c,"%d",uVar2);
  }
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  iVar4 = *(int *)(in_ECX + 8);
  if (iVar4 != 0) {
    FUN_009a0940(param_1);
    _sprintf(local_21c,"%d",iVar4);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  pcVar3 = (char *)(in_ECX + 0x14);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x14),(int)pcVar3 - (in_ECX + 0x15));
  local_c = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_c = 0xffffffff;
  pcVar3 = (char *)(in_ECX + 0x1c);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x1c),(int)pcVar3 - (in_ECX + 0x1d));
  local_c = 1;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_268 = 0;
  iVar4 = *(int *)(in_ECX + 0x30) - *(int *)(in_ECX + 0x2c) >> 3;
  if (0 < iVar4) {
    do {
      local_c = 0xffffffff;
      pcVar3 = (char *)(*(int *)(in_ECX + 0x2c) + local_268 * 8);
      pcVar5 = pcVar3;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
      local_c = 2;
      FUN_009a0940(param_1);
      FUN_0099f770(param_1,0);
      local_268 = local_268 + 1;
    } while (local_268 < iVar4);
  }
  local_268 = 0;
  iVar4 = *(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) >> 3;
  if (0 < iVar4) {
    do {
      local_c = 0xffffffff;
      pcVar3 = (char *)(*(int *)(in_ECX + 0x3c) + local_268 * 8);
      pcVar5 = pcVar3;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
      local_c = 3;
      FUN_009a0940(param_1);
      FUN_0099f770(param_1,0);
      local_268 = local_268 + 1;
    } while (local_268 < iVar4);
  }
  local_268 = 0;
  iVar4 = *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 3;
  if (0 < iVar4) {
    do {
      local_c = 0xffffffff;
      pcVar3 = (char *)(*(int *)(in_ECX + 0x4c) + local_268 * 8);
      pcVar5 = pcVar3;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
      local_c = 4;
      FUN_009a0940(param_1);
      FUN_0099f770(param_1,0);
      local_268 = local_268 + 1;
    } while (local_268 < iVar4);
  }
  local_c = 0xffffffff;
  local_264 = *(int *)(in_ECX + 0x8c) - *(int *)(in_ECX + 0x88) >> 6;
  if (0 < local_264) {
    local_268 = 0;
    do {
      iVar4 = *(int *)(in_ECX + 0x88);
      FUN_009a0940(param_1);
      (**(code **)(*(int *)(iVar4 + local_268) + 4))(param_1);
      local_268 = local_268 + 0x40;
      local_264 = local_264 + -1;
    } while (local_264 != 0);
  }
  local_264 = *(int *)(in_ECX + 0x9c) - *(int *)(in_ECX + 0x98) >> 6;
  if (0 < local_264) {
    local_268 = 0;
    do {
      iVar4 = *(int *)(in_ECX + 0x98);
      FUN_009a0940(param_1);
      (**(code **)(*(int *)(iVar4 + local_268) + 4))(param_1);
      local_268 = local_268 + 0x40;
      local_264 = local_264 + -1;
    } while (local_264 != 0);
  }
  if (*(int *)(in_ECX + 0x60) != 0) {
    pcVar3 = (char *)(in_ECX + 0x5c);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x5c),(int)pcVar3 - (in_ECX + 0x5d));
    local_c = 5;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
    local_c = 0xffffffff;
  }
  cVar1 = *(char *)(in_ECX + 100);
  if (cVar1 != '\0') {
    FUN_009a0940(param_1);
    puVar6 = &DAT_00dfbbd0;
    if (cVar1 == '\0') {
      puVar6 = &DAT_00dfbbd4;
    }
    _sprintf(local_21c,"%s",puVar6);
    FUN_0099ff90(param_1);
    puVar7 = (undefined4 *)FUN_00990880();
    local_c = 6;
    if (0xf < (uint)puVar7[5]) {
      puVar7 = (undefined4 *)*puVar7;
    }
    __snprintf(local_21c,0xff,"%s",puVar7);
    FUN_0099ff90(param_1);
    local_c = 0xffffffff;
  }
  local_268 = 0;
  iVar4 = *(int *)(in_ECX + 0x6c) - *(int *)(in_ECX + 0x68) >> 3;
  if (0 < iVar4) {
    do {
      pcVar3 = (char *)(*(int *)(in_ECX + 0x68) + local_268 * 8);
      pcVar5 = pcVar3;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
      local_c = 7;
      FUN_009a0940(param_1);
      FUN_0099f770(param_1,0);
      local_c = 0xffffffff;
      local_268 = local_268 + 1;
    } while (local_268 < iVar4);
  }
  local_268 = 0;
  iVar4 = *(int *)(in_ECX + 0x7c) - *(int *)(in_ECX + 0x78) >> 3;
  if (0 < iVar4) {
    do {
      pcVar3 = (char *)(*(int *)(in_ECX + 0x78) + local_268 * 8);
      pcVar5 = pcVar3;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
      local_c = 8;
      FUN_009a0940(param_1);
      FUN_0099f770(param_1,0);
      local_c = 0xffffffff;
      local_268 = local_268 + 1;
    } while (local_268 < iVar4);
  }
  cVar1 = *(char *)(in_ECX + 0xb0);
  if (cVar1 != '\0') {
    FUN_009a0940(param_1);
    puVar6 = &DAT_00dfbbd0;
    if (cVar1 == '\0') {
      puVar6 = &DAT_00dfbbd4;
    }
    _sprintf(local_21c,"%s",puVar6);
    FUN_0099ff90(param_1);
    puVar7 = (undefined4 *)FUN_00990880();
    local_c = 9;
    if (0xf < (uint)puVar7[5]) {
      puVar7 = (undefined4 *)*puVar7;
    }
    __snprintf(local_21c,0xff,"%s",puVar7);
    FUN_0099ff90(param_1);
    local_c = 0xffffffff;
  }
  if (*(int *)(in_ECX + 0xc) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x6c);
    FUN_009a0940(param_1);
    _sprintf(local_21c,"%d",uVar2);
    FUN_0099ff90(param_1);
    puVar7 = (undefined4 *)FUN_00990880();
    local_c = 10;
    uStack_11c = 0x10;
    if (0xf < (uint)puVar7[5]) {
      puVar7 = (undefined4 *)*puVar7;
    }
    __snprintf(acStack_118,0xff,"%s",puVar7);
    FUN_0099ff90(param_1);
    if (0xf < uStack_228) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_23c);
    }
  }
  ExceptionList = pvStack_14;
  return;
}

