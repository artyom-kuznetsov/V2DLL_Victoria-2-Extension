// FUN_009acd20 @ 009acd20 body=[[009acd20, 009acd94] [009acd98, 009acdda] [009acdde, 009ace37]]


/* WARNING: Removing unreachable block (ram,0x009acdd2) */

int FUN_009acd20(int param_1)

{
  void *_Dst;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5dde0;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FUN_009aa7c0(param_1,local_2c);
  local_8._0_1_ = 4;
  if (local_18 < 0x10) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    *(int *)(param_1 + 0x24) = param_1;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    local_8 = CONCAT31(local_8._1_3_,6);
    *(undefined4 *)(param_1 + 0x4c) = 0x1ff;
    *(undefined4 *)(param_1 + 0x48) = 0;
    _Dst = (void *)FUN_00aad56b(0x7fc);
    *(void **)(param_1 + 0x50) = _Dst;
    _memset(_Dst,0,*(int *)(param_1 + 0x4c) * 4);
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

