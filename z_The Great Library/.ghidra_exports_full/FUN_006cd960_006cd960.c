// FUN_006cd960 @ 006cd960 body=[[006cd960, 006cda1f]]


void FUN_006cd960(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int local_c;
  
  iVar1 = param_2;
  while (local_c = param_2 * 2 + 2, local_c < param_3) {
    cVar2 = FUN_006bed80((int)*(short *)(param_1 + local_c * 2),
                         (int)*(short *)(param_1 + -2 + local_c * 2));
    if (cVar2 != '\0') {
      local_c = param_2 * 2 + 1;
    }
    *(undefined2 *)(param_1 + param_2 * 2) = *(undefined2 *)(param_1 + local_c * 2);
    param_2 = local_c;
  }
  if (local_c == param_3) {
    *(undefined2 *)(param_1 + param_2 * 2) = *(undefined2 *)(param_1 + -2 + param_3 * 2);
    param_2 = param_3 + -1;
  }
  FUN_006cde70(param_1,param_2,iVar1,param_4,param_5);
  return;
}

