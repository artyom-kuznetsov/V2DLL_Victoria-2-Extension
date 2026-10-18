// FUN_009e7790 @ 009e7790 body=[[009e7790, 009e7836] [009e783a, 009e786e]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_009e7790(void)

{
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 local_18 [4];
  undefined *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b496de;
  local_10 = ExceptionList;
  local_14 = &DAT_0131cb38;
  _DAT_0131cb3c = 0x18d;
  _DAT_0131cb38 = &PTR_FUN_00e3c320;
  DAT_0131cb40 = 0;
  DAT_0131cb44 = 0;
  _DAT_0131cb48 = 0;
  _DAT_0131cb64 = 0xf;
  _DAT_0131cb60 = 0;
  DAT_0131cb50 = 0;
  local_8 = 1;
  uStack_7 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 2;
  FUN_00408ed0(local_34,0,0xffffffff);
  _local_8 = CONCAT31(uStack_7,1);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  DAT_0131cb6c = 0;
  FUN_004138b0(&DAT_0131cb40,local_18,DAT_0131cb40,DAT_0131cb44);
  ExceptionList = local_10;
  return &DAT_0131cb38;
}

