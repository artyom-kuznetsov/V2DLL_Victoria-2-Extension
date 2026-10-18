// FUN_00b07530 @ 00b07530 body=[[00b07530, 00b075e1]]


void FUN_00b07530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  void *pvVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar1 = ExceptionList;
  puStack_8 = &LAB_00b38ee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[9] = param_1;
  in_ECX[7] = param_5;
  in_ECX[4] = param_2;
  in_ECX[6] = param_4;
  *(undefined2 *)(in_ECX + 3) = 0xca;
  in_ECX[5] = param_3;
  local_4 = 0;
  in_ECX[8] = param_6;
  if (param_7 == 0) {
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    ExceptionList = pvVar1;
    return;
  }
  in_ECX[1] = param_7;
  if ((param_7 != 0) && (param_7 != 0)) {
    FUN_00aeb6c0(param_7);
  }
  ExceptionList = local_c;
  return;
}

