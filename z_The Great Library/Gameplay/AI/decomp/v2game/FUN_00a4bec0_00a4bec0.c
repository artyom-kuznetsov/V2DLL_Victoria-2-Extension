// FUN_00a4bec0 @ 00a4bec0 body=[[00a4bec0, 00a4bfa0] [00a4bfa4, 00a4bfb5]]


void FUN_00a4bec0(int param_1,int param_2,int param_3,int *param_4,short *param_5)

{
  int in_ECX;
  undefined4 ***pppuVar1;
  undefined4 **local_4c [4];
  undefined4 local_3c;
  uint local_38;
  int local_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3b828;
  local_10 = ExceptionList;
  local_30 = *param_4;
  iStack_2c = param_4[1];
  local_28 = param_2 + local_30 * -2;
  param_3 = param_3 - iStack_2c;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = (undefined4 **)((uint)local_4c[0] & 0xffffff00);
    ExceptionList = &local_10;
    iStack_24 = param_3;
    FUN_00408ed0(param_1,0,0xffffffff);
    local_8 = 0;
    local_20 = local_30;
    iStack_1c = iStack_2c;
    iStack_14 = param_3 + 0x32;
    local_18 = local_28;
    pppuVar1 = (undefined4 ***)local_4c[0];
    if (local_38 < 0x10) {
      pppuVar1 = local_4c;
    }
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x38))
              (*(int **)(in_ECX + 0x30),0,pppuVar1,local_3c,&local_20,0x510,0xff000000);
    *param_5 = (short)local_18 - (short)local_20;
    param_5[1] = (short)iStack_14 - (short)iStack_1c;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

