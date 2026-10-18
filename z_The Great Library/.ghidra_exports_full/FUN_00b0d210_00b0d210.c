// FUN_00b0d210 @ 00b0d210 body=[[00b0d210, 00b0d2b5]]


void FUN_00b0d210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6)

{
  undefined1 *puVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b394e2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined1 *)*param_5;
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_00ded94d;
  }
  FUN_00b12a60(puVar1);
  *in_ECX = &PTR_FUN_00ddfe94;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 1;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  *(undefined2 *)(in_ECX + 0xc) = 1;
  local_4 = 2;
  FUN_00b0c510(param_1,param_2,param_3,param_4,param_6);
  ExceptionList = local_c;
  return;
}

