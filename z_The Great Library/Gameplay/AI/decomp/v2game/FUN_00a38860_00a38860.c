// FUN_00a38860 @ 00a38860 body=[[00a38860, 00a3888d]]


void FUN_00a38860(LPCSTR param_1,LPCSTR param_2)

{
  if (0xf < *(uint *)(param_2 + 0x14)) {
    param_2 = *(LPCSTR *)param_2;
  }
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(LPCSTR *)param_1;
  }
  CopyFileA(param_1,param_2,0);
  return;
}

