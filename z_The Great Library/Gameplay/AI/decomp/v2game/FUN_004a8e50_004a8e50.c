// FUN_004a8e50 @ 004a8e50 body=[[004a8e50, 004a8ed0] [004a8ed4, 004a8f64] [004a8f68, 004a9004] [004a9008, 004a90c1] [004a90c5, 004a923d] [004a9241, 004a9316] [004a931a, 004a9548] [004a954c, 004a9653] [004a9657, 004a96de] [004a96e2, 004a9765] [004a9769, 004a9884] [004a9888, 004a9970]]


/* WARNING: Removing unreachable block (ram,0x004a8ffb) */
/* WARNING: Removing unreachable block (ram,0x004a90b8) */
/* WARNING: Removing unreachable block (ram,0x004a8f5b) */

void FUN_004a8e50(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  char *local_3f0;
  uint uStack_3d4;
  uint local_364;
  uint uStack_348;
  uint uStack_32c;
  char acStack_320 [256];
  undefined4 uStack_220;
  char acStack_21c [256];
  undefined4 uStack_11c;
  char acStack_118 [260];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5b1e9;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_004c4540();
  local_c = 0;
  FUN_009a0940();
  FUN_0099f770(param_1);
  local_c = 0xffffffff;
  if (0xf < local_364) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(in_ECX + 300) != 0) {
    pcVar2 = (char *)(in_ECX + 0x128);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x128));
    local_c = 1;
    FUN_009a0940();
    FUN_0099f770(param_1);
  }
  local_c = 0xffffffff;
  if (*(int *)(in_ECX + 0x134) != 0) {
    pcVar2 = (char *)(in_ECX + 0x130);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x130));
    local_c = 2;
    FUN_009a0940();
    FUN_0099f770(param_1);
  }
  local_3f0 = *(char **)(in_ECX + 0x148);
  while ((local_c = 0xffffffff, *(char **)(in_ECX + 0x148) <= local_3f0 &&
         (local_3f0 < *(char **)(in_ECX + 0x14c)))) {
    pcVar2 = local_3f0;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(local_3f0);
    local_c = 3;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_3f0 = local_3f0 + 8;
  }
  if (0 < *(int *)(in_ECX + 0x114)) {
    FUN_0099f1e0();
  }
  iVar3 = *(int *)(in_ECX + 0x118);
  iVar5 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x11c) - iVar3 & 0xfffffffcU)) {
    do {
      iVar3 = *(int *)(iVar3 + iVar5 * 4);
      if (0 < *(int *)(iVar3 + 0x20)) {
        if (iVar3 == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)(iVar3 + 8);
        }
        FUN_009a0940();
        (**(code **)(*piVar6 + 4))();
      }
      iVar3 = *(int *)(in_ECX + 0x118);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x11c) - iVar3 >> 2);
  }
  if (*(int *)(in_ECX + 0x38) != 0) {
    FUN_009a0940();
    if (*(char *)(param_1 + 0xc) == '\0') {
      FUN_0098fad0();
    }
    else {
      uStack_220 = 0xc;
      _sprintf(acStack_21c,"%d");
    }
    FUN_0099ff90();
    FUN_00990880();
    local_c = 4;
    uStack_220 = 0x10;
    __snprintf(acStack_21c,0xff,"%s");
    FUN_0099ff90();
    local_c = 0xffffffff;
    if (0xf < uStack_32c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (0 < *(int *)(in_ECX + 400)) {
    FUN_009a0940();
    _sprintf(acStack_320,"%d");
    FUN_0099ff90();
    FUN_00990880();
    local_c = 5;
    __snprintf(acStack_320,0xff,"%s");
    FUN_0099ff90();
    local_c = 0xffffffff;
    if (0xf < uStack_3d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_3d4 = 0xf;
  }
  puVar4 = *(undefined4 **)(in_ECX + 200);
  while (puVar4 != (undefined4 *)0x0) {
    piVar6 = (int *)*puVar4;
    puVar4 = (undefined4 *)puVar4[2];
    FUN_009a0940();
    (**(code **)(*piVar6 + 4))();
  }
  iVar3 = *(int *)(in_ECX + 0x194);
  iVar5 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x198) - iVar3 & 0xfffffff0U)) {
    local_3f0 = (char *)0x0;
    do {
      for (piVar6 = *(int **)(iVar3 + (int)local_3f0); piVar6 != (int *)0x0;
          piVar6 = (int *)piVar6[0x9f]) {
        FUN_009a0940();
        (**(code **)(*piVar6 + 4))();
      }
      iVar3 = *(int *)(in_ECX + 0x194);
      local_3f0 = (char *)((int)local_3f0 + 0x10);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x198) - iVar3 >> 4);
  }
  puVar4 = *(undefined4 **)(in_ECX + 0xd8);
  while (puVar4 != (undefined4 *)0x0) {
    piVar6 = (int *)*puVar4;
    puVar4 = (undefined4 *)puVar4[2];
    (**(code **)(*piVar6 + 0x30))();
    FUN_009a0940();
    (**(code **)(*piVar6 + 4))();
  }
  iVar3 = *(int *)(in_ECX + 0x58);
  if (DAT_01258728 == (int *)0x0) {
    DAT_01258728 = (int *)FUN_00aae9af();
    if (DAT_01258728 == (int *)0x0) {
      DAT_01258728 = (int *)0x0;
    }
    else {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
    }
  }
  piVar6 = (int *)(iVar3 * 0xb0 + *DAT_01258728);
  if ((((DAT_01258734 != 0) && (piVar6[2] != DAT_01258734 + 0x10)) && (piVar6[2] != 0)) &&
     ((piVar6[3] != DAT_012587f0 + 0x48 && (piVar6[3] != 0)))) {
    FUN_009a0940();
    (**(code **)(*piVar6 + 4))();
  }
  if (*(int *)(in_ECX + 0x1a4) != 0) {
    FUN_009a0940();
    _sprintf(acStack_320,"%d");
    FUN_0099ff90();
    FUN_00990880();
    local_c = 6;
    __snprintf(acStack_320,0xff,"%s");
    FUN_0099ff90();
    local_c = 0xffffffff;
    if (0xf < uStack_3d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  FUN_00401000();
  iVar3 = FUN_00b31c00();
  if (*(int *)(in_ECX + 0x2b8) != iVar3) {
    FUN_009a0940();
    if (*(char *)(param_1 + 0xc) == '\0') {
      FUN_0098fad0();
    }
    else {
      _sprintf(acStack_320,"%d");
    }
    FUN_0099ff90();
    FUN_00990880();
    local_c = 7;
    __snprintf(acStack_320,0xff,"%s");
    FUN_0099ff90();
    local_c = 0xffffffff;
    if (0xf < uStack_3d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (1 < (int)((double)((*(int *)(in_ECX + 0x354) + -43800000) / 0x18) / 365.0)) {
    FUN_0043acd0(in_ECX + 0x354);
    local_c = 8;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_c = 0xffffffff;
    if (0xf < uStack_3d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (1 < (int)((double)((*(int *)(in_ECX + 0x358) + -43800000) / 0x18) / 365.0)) {
    FUN_0043acd0(in_ECX + 0x358);
    local_c = 9;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_c = 0xffffffff;
    if (0xf < uStack_3d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  iVar5 = *(int *)(in_ECX + 0x368) - *(int *)(in_ECX + 0x364);
  iVar3 = iVar5 >> 0x1f;
  if (iVar5 / 0x1c + iVar3 != iVar3) {
    FUN_009a0940();
    (**(code **)(*(int *)(in_ECX + 0x35c) + 4))();
  }
  if ((*(int *)(in_ECX + 800) != 0) &&
     (cVar1 = (**(code **)(**(int **)(in_ECX + 800) + 0x38))(), cVar1 != '\0')) {
    FUN_009a0940();
    _sprintf(acStack_320,"%d");
    FUN_0099ff90();
    FUN_00990880();
    local_c = 10;
    uStack_11c = 0x10;
    __snprintf(acStack_118,0xff,"%s");
    FUN_0099ff90();
    local_c = 0xffffffff;
    if (0xf < uStack_348) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (*(int *)(in_ECX + 0x334) != 0) {
    if (in_ECX == -0x328) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(in_ECX + 0x34c);
    }
    FUN_009a0940();
    (**(code **)(*piVar6 + 4))();
  }
  iVar5 = 0;
  iVar3 = *(int *)(in_ECX + 0x378) - *(int *)(in_ECX + 0x374) >> 2;
  if (0 < iVar3) {
    do {
      piVar6 = *(int **)(*(int *)(in_ECX + 0x374) + iVar5 * 4);
      FUN_009a0940();
      (**(code **)(*piVar6 + 4))();
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  for (puVar4 = *(undefined4 **)(in_ECX + 900);
      (*(undefined4 **)(in_ECX + 900) <= puVar4 && (puVar4 < *(undefined4 **)(in_ECX + 0x388)));
      puVar4 = puVar4 + 1) {
    piVar6 = (int *)*puVar4;
    FUN_009a0940();
    (**(code **)(*piVar6 + 4))();
  }
  ExceptionList = pvStack_14;
  return;
}

