// FUN_00988260 @ 00988260 body=[[00988260, 00988295]]


undefined2 * FUN_00988260(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  char cVar1;
  int *in_ECX;
  
  while ((param_2 != param_3 &&
         (cVar1 = (**(code **)(*in_ECX + 8))(param_1,*param_2), cVar1 == '\0'))) {
    param_2 = param_2 + 1;
  }
  return param_2;
}

