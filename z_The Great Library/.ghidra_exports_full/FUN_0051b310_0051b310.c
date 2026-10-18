// FUN_0051b310 @ 0051b310 body=[[0051b310, 0051b34b]]


bool FUN_0051b310(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  
  piVar1 = *(int **)(in_EAX + 0x66c);
  do {
    if (piVar1 == (int *)0x0) {
      return false;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while (*(int *)(iVar2 + 0xc) != param_2);
  return *(int *)(DAT_012588e8 + 0xb0c) < *(int *)(iVar2 + 0x10);
}

