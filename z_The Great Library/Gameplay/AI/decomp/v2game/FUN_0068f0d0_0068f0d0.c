// FUN_0068f0d0 @ 0068f0d0 body=[[0068f0d0, 0068f1da] [0068f1de, 0068f23b]]


void FUN_0068f0d0(void)

{
  undefined4 *puVar1;
  undefined4 ***pppuVar2;
  undefined4 *in_ECX;
  int in_EDX;
  char local_230 [256];
  undefined4 local_130;
  char local_12c [256];
  undefined4 **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (in_ECX[2] != 0) {
    ExceptionList = &local_10;
    FUN_009a0940(in_EDX);
    FUN_0099fe90(0);
    if ((*(char *)(in_EDX + 0xc) == '\0') && (*(int *)(in_EDX + 4) != 0)) {
      FUN_009a08a0(in_EDX,*(int *)(in_EDX + 4) + -1);
    }
    for (puVar1 = (undefined4 *)*in_ECX; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[3]) {
      local_130 = 399;
      _sprintf(local_12c,"%lld",*puVar1,puVar1[1]);
      FUN_0099ff90(in_EDX);
      if (*(char *)(in_EDX + 0xc) == '\0') {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (undefined4 **)((uint)local_2c[0] & 0xffffff00);
        FUN_00409350(&DAT_00ded950,1);
        local_8 = 0;
        pppuVar2 = (undefined4 ***)local_2c[0];
        if (local_18 < 0x10) {
          pppuVar2 = local_2c;
        }
        __snprintf(local_230,0xff,"%s",pppuVar2);
        FUN_0099ff90(in_EDX);
        local_8 = 0xffffffff;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (undefined4 **)((uint)local_2c[0] & 0xffffff00);
      }
    }
    *(int *)(in_EDX + 4) = *(int *)(in_EDX + 4) + -1;
    if ((*(char *)(in_EDX + 0xc) == '\0') && (*(int *)(in_EDX + 4) != 0)) {
      FUN_009a08a0(in_EDX,*(int *)(in_EDX + 4) + -1);
    }
    if (*(int *)(in_EDX + 4) != -1) {
      FUN_004013e0(in_EDX);
      FUN_004013e0(in_EDX);
    }
  }
  ExceptionList = local_10;
  return;
}

