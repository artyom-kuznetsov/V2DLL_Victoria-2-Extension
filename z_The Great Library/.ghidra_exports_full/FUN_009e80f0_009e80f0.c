// FUN_009e80f0 @ 009e80f0 body=[[009e80f0, 009e81ac]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009e80f0(void)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b41950;
  local_10 = ExceptionList;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = 0;
  local_8 = 2;
  uStack_7 = 0;
  ExceptionList = &local_10;
  FUN_00408ed0(&stack0x0000001c,0,0xffffffff);
  local_14 = 0;
  FUN_004134a0(&stack0x0000000c);
  _local_8 = CONCAT31(uStack_7,3);
  _DAT_0131cb3c = 0x18d;
  FUN_004134a0(&local_40);
  FUN_00408ed0(local_30,0,0xffffffff);
  DAT_0131cb6c = local_14;
  FUN_009e78a0();
  FUN_009e78a0();
  ExceptionList = local_10;
  return;
}

