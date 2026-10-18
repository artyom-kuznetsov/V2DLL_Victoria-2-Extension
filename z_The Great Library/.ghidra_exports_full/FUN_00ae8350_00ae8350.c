// FUN_00ae8350 @ 00ae8350 body=[[00ae8350, 00ae83a4]]


void FUN_00ae8350(int param_1)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  int *local_4;
  
  iVar1 = param_1;
  local_4 = in_ECX;
  if ((uint)in_ECX[9] < (uint)in_ECX[8]) {
    do {
      cVar2 = FUN_00ae71b0(&param_1,&local_4);
      if (cVar2 == '\0') {
        return;
      }
      if (*(int *)(*(int *)(*in_ECX + 4 + param_1 * 0x14) + (int)local_4 * 4) == iVar1) {
        return;
      }
      FUN_00ae80e0(param_1,local_4,1);
    } while ((uint)in_ECX[9] < (uint)in_ECX[8]);
  }
  return;
}

