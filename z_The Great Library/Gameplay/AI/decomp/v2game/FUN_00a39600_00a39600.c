// FUN_00a39600 @ 00a39600 body=[[00a39600, 00a39647]]


int FUN_00a39600(undefined4 param_1)

{
  DWORD DVar1;
  int in_ECX;
  DWORD *pDVar2;
  int local_10 [3];
  
  DVar1 = GetCurrentThreadId();
  for (pDVar2 = *(DWORD **)(in_ECX + 4);
      ((*(DWORD **)(in_ECX + 4) <= pDVar2 && (pDVar2 < *(DWORD **)(in_ECX + 8))) &&
      (*pDVar2 != DVar1)); pDVar2 = pDVar2 + 5) {
  }
  FUN_00a39810(local_10,param_1);
  return local_10[0] + 0x1c;
}

