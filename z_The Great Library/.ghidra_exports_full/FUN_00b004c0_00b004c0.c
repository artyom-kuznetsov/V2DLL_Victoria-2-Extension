// FUN_00b004c0 @ 00b004c0 body=[[00b004c0, 00b0055a]]


void FUN_00b004c0(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b38c68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (*param_2 != 0) {
    FUN_00b13660(param_2[1],0);
    if ((void *)*in_ECX != (void *)0x0) {
      FID_conflict__memcpy((void *)*in_ECX,(void *)*param_2,param_2[1] + 1);
    }
  }
  local_4 = 0;
  uVar1 = FUN_00b157e0(param_1);
  in_ECX[3] = uVar1;
  ExceptionList = local_c;
  return;
}

