// FUN_0053d820 @ 0053d820 body=[[0053d820, 0053d854]]


void FUN_0053d820(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  
  for (piVar1 = *(int **)(in_EAX + 0x7b4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    iVar2 = *piVar1;
    FUN_005cae80(iVar2);
    FUN_005cb2c0(*(undefined4 *)(iVar2 + 0xdc));
  }
  return;
}

