// FUN_005dc540 @ 005dc540 body=[[005dc540, 005dc549] [005dc550, 005dc55f]]


int FUN_005dc540(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  iVar2 = 0;
  for (piVar1 = (int *)*in_ECX; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    iVar2 = iVar2 + *(int *)(*piVar1 + 0x98);
  }
  return iVar2;
}

