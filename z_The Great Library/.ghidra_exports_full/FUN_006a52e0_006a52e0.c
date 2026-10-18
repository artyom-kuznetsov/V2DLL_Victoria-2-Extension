// FUN_006a52e0 @ 006a52e0 body=[[006a52e0, 006a53cb] [006a53cf, 006a552a] [006a552e, 006a555d] [006a5561, 006a55a2]]


void FUN_006a52e0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_2a4 [8];
  undefined4 uStack_29c;
  char local_278 [256];
  undefined4 local_178;
  char local_174 [256];
  uint local_74;
  undefined4 local_64;
  uint local_60;
  undefined1 *local_58;
  undefined4 *local_54;
  int local_50;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b59cff;
  local_10 = ExceptionList;
  local_14 = (int *)0x0;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)FUN_00aae9af();
  local_8 = 0;
  local_54 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    iVar4 = FUN_00aae9af();
    local_8._0_1_ = 1;
    local_50 = iVar4;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350();
      local_58 = local_2a4;
      local_8 = CONCAT31(local_8._1_3_,2);
      local_14 = (int *)0x1;
      local_2a4[0] = 0;
      FUN_00409350(&DAT_00ded94d,0);
      iVar4 = FUN_00992740(iVar4,local_4c,1);
    }
    *puVar3 = &PTR_FUN_00e38528;
    puVar3[1] = 0;
    *(undefined1 *)((int)puVar3 + 0xd) = 1;
    cVar1 = *(char *)(iVar4 + 0x13);
    puVar3[2] = iVar4;
    *(bool *)(puVar3 + 3) = cVar1 != '\0';
  }
  local_8 = 0xffffffff;
  if (((uint)local_14 & 1) != 0) {
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
  }
  FUN_009a0940();
  local_178 = 0xc;
  _sprintf(local_174,"%d");
  FUN_0099ff90();
  FUN_004013e0();
  piVar2 = *(int **)(param_1 + 0xc);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)();
      }
      ExceptionList = local_10;
      return;
    }
    iVar4 = *piVar2;
    if (*(uint *)(iVar4 + 0x28) < 0x10) {
      pcVar5 = (char *)(iVar4 + 0x14);
    }
    else {
      pcVar5 = *(char **)(iVar4 + 0x14);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_8 = 5;
    local_14 = (int *)*piVar2;
    if ((*(char *)(puVar3 + 3) == '\0') && (puVar3[1] != 0)) {
      FUN_009a08a0();
    }
    local_178 = 0xf;
    uStack_29c = 0x6a54c1;
    __snprintf(local_174,0xff,"%s");
    FUN_0099ff90();
    FUN_00990880();
    local_8._0_1_ = 6;
    uStack_29c = 0x6a550a;
    __snprintf(local_278,0xff,"%s");
    FUN_0099ff90();
    local_8 = CONCAT31(local_8._1_3_,5);
    if (0xf < local_60) break;
    local_60 = 0xf;
    local_64 = 0;
    local_74 = local_74 & 0xffffff00;
    (**(code **)(*local_14 + 4))();
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    piVar2 = (int *)piVar2[2];
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

