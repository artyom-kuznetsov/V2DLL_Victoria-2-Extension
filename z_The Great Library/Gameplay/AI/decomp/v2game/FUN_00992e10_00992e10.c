// FUN_00992e10 @ 00992e10 body=[[00992e10, 00992ea8] [00992eac, 00992ee0] [00992ee4, 00992f1d]]


undefined1 * FUN_00992e10(undefined1 *param_1)

{
  char cVar1;
  int *in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b4a3a8;
  local_10 = ExceptionList;
  local_14 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8 = 0;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*in_ECX + 0x24))();
  do {
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      FUN_00408ed0(local_30,0,0xffffffff);
joined_r0x00992ed6:
      if (local_1c < 0x10) {
        ExceptionList = local_10;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    cVar1 = (**(code **)(*in_ECX + 4))();
    local_14 = CONCAT31(local_14._1_3_,cVar1);
    if (cVar1 == '\n') {
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      FUN_00408ed0(local_30,0,0xffffffff);
      goto joined_r0x00992ed6;
    }
    if (cVar1 != '\r') {
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      local_8._0_1_ = 1;
      FUN_00448860(1,local_14);
      local_8._0_1_ = 2;
      FUN_00448aa0(local_4c,0,0xffffffff);
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
    }
    cVar1 = (**(code **)(*in_ECX + 0x24))();
  } while( true );
}

