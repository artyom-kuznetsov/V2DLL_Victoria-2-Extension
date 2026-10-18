// FUN_00409af0 @ 00409af0 body=[[00409af0, 00409b4c] [00409b50, 00409bf6] [00409bfa, 00409c59]]


void FUN_00409af0(int param_1)

{
  undefined4 *puVar1;
  undefined4 ****ppppuVar2;
  undefined4 *in_EDX;
  char local_230 [256];
  undefined4 local_130;
  char local_12c [256];
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (in_EDX[2] != 0) {
    ExceptionList = &local_10;
    FUN_009a0940(param_1);
    FUN_0099fe90(0);
    if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
      FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
    }
    for (puVar1 = (undefined4 *)*in_EDX; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[2]) {
      local_130 = 0xc;
      _sprintf(local_12c,"%d",*puVar1);
      FUN_0099ff90(param_1);
      if (*(char *)(param_1 + 0xc) == '\0') {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
        FUN_00409350(&DAT_00ded950,1);
        local_8 = 0;
        ppppuVar2 = (undefined4 ****)local_2c[0];
        if (local_18 < 0x10) {
          ppppuVar2 = local_2c;
        }
        __snprintf(local_230,0xff,"%s",ppppuVar2);
        FUN_0099ff90(param_1);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
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
  ExceptionList = local_10;
  return;
}

