// FUN_009f2160 @ 009f2160 body=[[009f2160, 009f21d1] [009f21d5, 009f223a] [009f2240, 009f226d]]


void FUN_009f2160(int param_1,int param_2)

{
  char cVar1;
  undefined1 *in_ECX;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6378a;
  local_10 = ExceptionList;
  local_14 = 0;
  local_1c = 0xf;
  local_20 = 0;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  cVar1 = FUN_00416db0();
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (cVar1 == '\0') {
    FUN_009a8ee0(local_28,param_1 + 0x238);
    local_8 = 1;
    FUN_009a9880(*(undefined8 *)(*(int *)(param_2 + 0xa8) + 8),
                 *(undefined8 *)(*(int *)(param_2 + 0xa8) + 0x10));
    local_8 = 2;
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x14) = 0xf;
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *in_ECX = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  ExceptionList = local_10;
  return;
}

