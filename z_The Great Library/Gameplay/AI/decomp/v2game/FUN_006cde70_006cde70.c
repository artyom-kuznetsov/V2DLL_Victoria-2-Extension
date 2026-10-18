// FUN_006cde70 @ 006cde70 body=[[006cde70, 006cdeee]]


void FUN_006cde70(int param_1,int param_2,int param_3,short *param_4)

{
  char cVar1;
  int local_8;
  
  while (local_8 = (param_2 + -1) / 2, param_3 < param_2) {
    cVar1 = FUN_006bed80((int)*(short *)(param_1 + local_8 * 2),(int)*param_4);
    if (cVar1 == '\0') break;
    *(undefined2 *)(param_1 + param_2 * 2) = *(undefined2 *)(param_1 + local_8 * 2);
    param_2 = local_8;
  }
  *(short *)(param_1 + param_2 * 2) = *param_4;
  return;
}

