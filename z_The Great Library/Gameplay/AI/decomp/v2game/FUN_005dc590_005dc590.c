// FUN_005dc590 @ 005dc590 body=[[005dc590, 005dc5cb]]


int FUN_005dc590(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  int iVar2;
  
  iVar2 = 0;
  for (piVar1 = (int *)*in_EAX; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    iVar2 = iVar2 + *(int *)(*(int *)(*piVar1 + 0xa4) + 600) / 1000;
  }
  return iVar2;
}

