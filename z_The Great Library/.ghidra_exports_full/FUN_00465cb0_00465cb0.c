// FUN_00465cb0 @ 00465cb0 body=[[00465cb0, 00465d57] [00465d5b, 00465da6] [00465dbf, 00465e83]]


void FUN_00465cb0(int param_1,int *param_2)

{
  int iVar1;
  int local_14c;
  int local_148 [4];
  undefined4 local_138;
  uint local_124;
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b608b6;
  local_14 = ExceptionList;
  iVar1 = param_2[1] - *param_2 >> 2;
  if (iVar1 < 1) {
    ExceptionList = &local_14;
    FUN_009a0940(param_1);
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
    local_11c = 0xf;
    __snprintf(local_118,0xff,"%s",&DAT_00ded950);
    FUN_0099ff90(param_1);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
      FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
    }
    if (*(int *)(param_1 + 4) != -1) {
      FUN_004013e0(param_1);
      FUN_004013e0(param_1);
    }
  }
  else {
    local_148[0] = 0;
    local_148[1] = 0;
    local_148[2] = 0;
    local_c._0_1_ = 0;
    local_c._1_3_ = 0;
    ExceptionList = &local_14;
    FUN_00419660(iVar1);
    local_14c = 0;
    if (0 < (int)(param_2[1] - *param_2 & 0xfffffffcU)) {
      do {
        FUN_00464460();
        local_c._0_1_ = 1;
        FUN_00a840b0();
        local_c._0_1_ = 0;
        if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_138);
        }
        local_14c = local_14c + 1;
      } while (local_14c < param_2[1] - *param_2 >> 2);
    }
    FUN_00457540(0x9d1,local_148,1);
    iVar1 = local_148[0];
    if (local_148[0] != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
  }
  ExceptionList = local_14;
  return;
}

