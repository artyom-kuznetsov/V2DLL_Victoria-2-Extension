// FUN_00a3fd70 @ 00a3fd70 body=[[00a3fd70, 00a3fe58] [00a3fe6d, 00a3fea0]]


/* WARNING: Removing unreachable block (ram,0x00a3fe50) */

void FUN_00a3fd70(int param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  int local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b54ac8;
  local_10 = ExceptionList;
  if (param_2 == 0x19) {
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 0xc0,0);
    FUN_00989720(in_ECX + 0xc0,&DAT_00dedc68);
  }
  else {
    if (param_2 != 0x3f) {
      if (param_2 != 0x5c) {
        ExceptionList = &local_10;
        FUN_00a20b80(param_1,param_2);
        ExceptionList = local_10;
        return;
      }
      ExceptionList = &local_10;
      piVar1 = (int *)FUN_0098fb60(param_1 + 0x228,&param_1);
      *(float *)(in_ECX + 0xdc) = (float)*piVar1 / 1000.0;
      ExceptionList = local_10;
      return;
    }
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_009a2a90(param_1);
    if (local_30 != 0) {
      FUN_00a40420();
    }
  }
  ExceptionList = local_10;
  return;
}

