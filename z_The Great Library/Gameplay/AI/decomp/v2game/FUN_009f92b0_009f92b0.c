// FUN_009f92b0 @ 009f92b0 body=[[009f92b0, 009f92eb]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_009f92b0(void)

{
  if ((_DAT_013f1c58 & 1) == 0) {
    _DAT_013f1c58 = _DAT_013f1c58 | 1;
    DAT_013f1c50 = 0xf;
    _DAT_013f1c4c = 0;
    DAT_013f1c3c._0_1_ = 0;
    _atexit((_func_4879 *)&LAB_00c872f0);
  }
  return &DAT_013f1c3c;
}

