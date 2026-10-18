// FUN_00409c60 @ 00409c60 body=[[00409c60, 00409d74] [00409d78, 00409dde]]


void FUN_00409c60(int param_1)

{
  undefined4 *puVar1;
  undefined4 ****ppppuVar2;
  undefined4 *in_EDX;
  undefined4 ***local_23c [4];
  undefined4 local_22c;
  uint local_228;
  undefined4 local_220;
  char local_21c [256];
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5af7b;
  local_14 = ExceptionList;
  if (in_EDX[2] != 0) {
    ExceptionList = &local_14;
    FUN_009a0940(param_1);
    FUN_0099fe90(0);
    if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
      FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
    }
    for (puVar1 = (undefined4 *)*in_EDX; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[2]) {
      local_220 = 0xc;
      _sprintf(local_21c,"%d",*puVar1);
      FUN_0099ff90(param_1);
      if (*(char *)(param_1 + 0xc) == '\0') {
        local_228 = 0xf;
        local_22c = 0;
        local_23c[0] = (undefined4 ***)((uint)local_23c[0] & 0xffffff00);
        FUN_00409350(&DAT_00ded950,1);
        local_c = 0;
        local_11c = 0xf;
        ppppuVar2 = (undefined4 ****)local_23c[0];
        if (local_228 < 0x10) {
          ppppuVar2 = local_23c;
        }
        __snprintf(local_118,0xff,"%s",ppppuVar2);
        FUN_0099ff90(param_1);
        local_c = 0xffffffff;
        if (0xf < local_228) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_23c[0]);
        }
        local_228 = 0xf;
        local_22c = 0;
        local_23c[0] = (undefined4 ***)((uint)local_23c[0] & 0xffffff00);
      }
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
      FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
    }
    if (*(int *)(param_1 + 4) != -1) {
      FUN_004013e0(param_1);
      FUN_004013e0(param_1);
    }
  }
  ExceptionList = local_14;
  return;
}

