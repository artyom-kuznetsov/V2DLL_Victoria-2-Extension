// FUN_00a1e690 @ 00a1e690 body=[[00a1e690, 00a1e6d2]]


void FUN_00a1e690(int param_1)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  
  in_ECX[0xb] = param_1;
  piVar1 = (int *)(**(code **)(*in_ECX + 0x30))();
  iVar2 = *piVar1;
  iVar3 = 0;
  if (0 < (int)(piVar1[1] - iVar2 & 0xfffffffcU)) {
    do {
      *(int *)(*(int *)(iVar2 + iVar3 * 4) + 0x5c) = in_ECX[0xb];
      iVar2 = *piVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < piVar1[1] - iVar2 >> 2);
  }
  return;
}

