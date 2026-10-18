// FUN_009a0560 @ 009a0560 body=[[009a0560, 009a05aa] [009a05ae, 009a0615] [009a0619, 009a064c] [009a0650, 009a06e5] [009a06e9, 009a0714] [009a0718, 009a07b9] [009a07bd, 009a07dd] [009a07e1, 009a080c] [009a0810, 009a082c] [009a0830, 009a0899]]


void FUN_009a0560(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint local_18c;
  uint local_178;
  uint local_170;
  uint local_15c;
  uint local_154;
  uint local_140;
  undefined4 local_138;
  uint local_124;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5deb7;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_009a0940(param_1);
  iVar3 = 0;
  FUN_009d71b0();
  if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_18c);
  }
  if (*(int *)(param_1 + 4) == -1) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    FUN_004013e0(param_1);
    if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
      FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
    }
    FUN_004013e0(param_1);
    FUN_004013e0(param_1);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  while( true ) {
    while( true ) {
      iVar1 = FUN_009d71b0();
      if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_18c);
      }
      if (*(int *)(iVar1 + 0x10) <= iVar3) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
          FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
        }
        if (*(int *)(param_1 + 4) != -1) {
          FUN_004013e0(param_1);
          FUN_004013e0(param_1);
        }
        ExceptionList = local_14;
        return;
      }
      iVar1 = FUN_009d71b0();
      if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_18c);
      }
      if (*(int *)(iVar1 + 0x10) - iVar3 < 0xff) break;
      iVar3 = iVar3 + 0xfe;
      FUN_009d71b0();
      local_c = 0;
      puVar2 = (undefined4 *)FUN_009895f0(iVar3);
      local_c = CONCAT31(local_c._1_3_,1);
      if (0xf < (uint)puVar2[5]) {
        puVar2 = (undefined4 *)*puVar2;
      }
      __snprintf(local_118,0xff,"%s",puVar2);
      FUN_0099ff90(param_1);
      if (0xf < local_15c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_170);
      }
      local_c = 0xffffffff;
      local_15c = 0xf;
      local_170 = local_170 & 0xffffff00;
      if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_18c);
      }
    }
    iVar3 = FUN_009d71b0();
    local_c = 2;
    FUN_009d71b0();
    local_c._0_1_ = 3;
    puVar2 = (undefined4 *)FUN_009895f0(*(undefined4 *)(iVar3 + 0x10));
    local_c = CONCAT31(local_c._1_3_,4);
    if (0xf < (uint)puVar2[5]) {
      puVar2 = (undefined4 *)*puVar2;
    }
    __snprintf(local_118,0xff,"%s",puVar2);
    FUN_0099ff90(param_1);
    if (0xf < local_15c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_170);
    }
    local_15c = 0xf;
    local_170 = local_170 & 0xffffff00;
    if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_18c);
    }
    local_c = 0xffffffff;
    local_178 = 0xf;
    local_18c = local_18c & 0xffffff00;
    if (0xf < local_124) break;
    iVar3 = FUN_009d71b0();
    iVar3 = *(int *)(iVar3 + 0x10);
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_154);
    }
    local_140 = 0xf;
    local_154 = local_154 & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_138);
}

