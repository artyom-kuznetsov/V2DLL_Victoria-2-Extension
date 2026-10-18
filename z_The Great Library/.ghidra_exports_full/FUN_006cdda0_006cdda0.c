// FUN_006cdda0 @ 006cdda0 body=[[006cdda0, 006cde6c]]


void FUN_006cdda0(int param_1,int param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  int iVar1;
  char cVar2;
  int local_c;
  
  iVar1 = param_2;
  while (local_c = param_2 * 2 + 2, local_c < param_3) {
    FUN_00491020();
    FUN_00491020();
    cVar2 = FUN_00424660();
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
  FUN_006cdf80(param_1,param_2,iVar1,param_4,param_5);
  return;
}

