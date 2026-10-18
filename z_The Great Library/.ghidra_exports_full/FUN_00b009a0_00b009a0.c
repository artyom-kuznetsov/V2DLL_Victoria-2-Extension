// FUN_00b009a0 @ 00b009a0 body=[[00b009a0, 00b00a3a]]


void FUN_00b009a0(int param_1,int *param_2)

{
  int *in_ECX;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b38ca9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)(param_1 * 0x10 + *in_ECX);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    if (*param_2 != 0) {
      FUN_00b13660(param_2[1],0);
      if ((void *)*puVar1 != (void *)0x0) {
        FID_conflict__memcpy((void *)*puVar1,(void *)*param_2,param_2[1] + 1);
      }
    }
    puVar1[3] = param_2[3];
  }
  ExceptionList = local_c;
  return;
}

