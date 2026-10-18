// FUN_006cd300 @ 006cd300 body=[[006cd300, 006cd3bd]]


void FUN_006cd300(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  char cVar2;
  int local_c;
  
  iVar1 = param_2;
  while (local_c = param_2 * 2 + 2, local_c < param_3) {
    cVar2 = FUN_006bee40(*(undefined4 *)(param_1 + local_c * 4),
                         *(undefined4 *)(param_1 + -4 + local_c * 4));
    if (cVar2 != '\0') {
      local_c = param_2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + local_c * 4);
    param_2 = local_c;
  }
  if (local_c == param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    param_2 = param_3 + -1;
  }
  FUN_006cda20(param_1,param_2,iVar1,param_4,param_5,param_6);
  return;
}

