// FUN_00596290 @ 00596290 body=[[00596290, 00596307] [0059630b, 0059631b]]


void FUN_00596290(int param_1)

{
  undefined4 uVar1;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b43a20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x5c) = 4;
  uVar1 = DAT_01268ff0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8 = 2;
  *(undefined4 *)(param_1 + 0x34) = DAT_01268fec;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  FUN_00408ed0(local_30,0,0xffffffff);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return;
}

