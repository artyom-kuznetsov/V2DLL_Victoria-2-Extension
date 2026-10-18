// FUN_009d6f60 @ 009d6f60 body=[[009d6f60, 009d702e] [009d7032, 009d7046]]


undefined4 * FUN_009d6f60(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int in_EDX;
  int local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3df7c;
  local_10 = ExceptionList;
  iVar1 = *param_1;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  if ((uint)(param_1[1] - iVar1) < param_3) {
    ExceptionList = &local_10;
    FUN_009d7420(local_20,iVar1 + in_EDX,param_1[1],param_3);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[0xd] = 0xf;
    param_2[0xc] = 0;
    *(undefined1 *)(param_2 + 8) = 0;
    local_8 = 3;
  }
  else {
    ExceptionList = &local_10;
    FUN_009d7420(local_20,iVar1 + in_EDX,param_3 + iVar1,param_3);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[0xd] = 0xf;
    param_2[0xc] = 0;
    *(undefined1 *)(param_2 + 8) = 0;
    local_8 = 7;
  }
  FUN_009d5e10(local_20);
  if (local_20[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_20[0]);
  }
  ExceptionList = local_10;
  return param_2;
}

