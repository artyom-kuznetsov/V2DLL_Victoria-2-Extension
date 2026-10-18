// FUN_00a458d0 @ 00a458d0 body=[[00a458d0, 00a45937] [00a45940, 00a45980] [00a45984, 00a459a5] [00a459a9, 00a459d1]]


void FUN_00a458d0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b410d4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e41120;
  local_8 = 2;
  FUN_004be200();
  iVar1 = 0;
  if (0 < (int)(param_1[0x5d] - param_1[0x5c] & 0xfffffffc)) {
    do {
      FUN_009bcda0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(param_1[0x5d] - param_1[0x5c]) >> 2);
  }
  if (param_1[0x5c] == 0) {
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    if (param_1[0x52] == 0) {
      param_1[0x52] = 0;
      param_1[0x53] = 0;
      param_1[0x54] = 0;
      FUN_007d9930();
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x52]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x5c]);
}

