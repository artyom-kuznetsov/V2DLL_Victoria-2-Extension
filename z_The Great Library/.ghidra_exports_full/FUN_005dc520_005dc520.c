// FUN_005dc520 @ 005dc520 body=[[005dc520, 005dc534]]


int FUN_005dc520(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  iVar2 = 0;
  for (piVar1 = (int *)*in_ECX; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    iVar2 = iVar2 + *(int *)(*piVar1 + 0x40);
  }
  return iVar2;
}

