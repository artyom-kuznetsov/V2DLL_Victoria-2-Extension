// FUN_0058a4f0 @ 0058a4f0 body=[[0058a4f0, 0058a5f9] [0058a5fd, 0058a678]]


void FUN_0058a4f0(int *param_1)

{
  undefined4 ***pppuVar1;
  int unaff_EDI;
  int local_240;
  undefined4 **local_23c [4];
  undefined4 local_22c;
  uint local_228;
  undefined4 local_220;
  char local_21c [520];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5af7b;
  local_14 = ExceptionList;
  if ((param_1[1] - *param_1 & 0xfffffffcU) != 0) {
    ExceptionList = &local_14;
    FUN_009a0940(unaff_EDI);
    FUN_0099fe90(0);
    local_240 = 0;
    if (0 < (int)(param_1[1] - *param_1 & 0xfffffffcU)) {
      do {
        FUN_0098fad0();
        FUN_0099ff90(unaff_EDI);
        if (*(char *)(unaff_EDI + 0xc) == '\0') {
          local_228 = 0xf;
          local_22c = 0;
          local_23c[0] = (undefined4 **)((uint)local_23c[0] & 0xffffff00);
          FUN_00409350(&DAT_00ded950,1);
          local_c = 0;
          local_220 = 0xf;
          pppuVar1 = (undefined4 ***)local_23c[0];
          if (local_228 < 0x10) {
            pppuVar1 = local_23c;
          }
          __snprintf(local_21c,0xff,"%s",pppuVar1);
          FUN_0099ff90(unaff_EDI);
          local_c = 0xffffffff;
          if (0xf < local_228) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_23c[0]);
          }
          local_228 = 0xf;
          local_22c = 0;
          local_23c[0] = (undefined4 **)((uint)local_23c[0] & 0xffffff00);
        }
        local_240 = local_240 + 1;
      } while (local_240 < param_1[1] - *param_1 >> 2);
    }
    *(int *)(unaff_EDI + 4) = *(int *)(unaff_EDI + 4) + -1;
    if ((*(char *)(unaff_EDI + 0xc) == '\0') && (*(int *)(unaff_EDI + 4) != 0)) {
      FUN_009a08a0(unaff_EDI,*(int *)(unaff_EDI + 4) + -1);
    }
    if (*(int *)(unaff_EDI + 4) != -1) {
      FUN_004013e0(unaff_EDI);
      FUN_004013e0(unaff_EDI);
    }
  }
  ExceptionList = local_14;
  return;
}

