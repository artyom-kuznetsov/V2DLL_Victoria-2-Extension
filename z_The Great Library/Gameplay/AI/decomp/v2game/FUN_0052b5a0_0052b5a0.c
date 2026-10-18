// FUN_0052b5a0 @ 0052b5a0 body=[[0052b5a0, 0052b5c5]]


void FUN_0052b5a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int in_EDX;
  
  iVar1 = *(int *)(param_1 + (DAT_00f096c8 + 0xb) * 0x10);
  uVar2 = *(undefined4 *)(iVar1 + 4 + in_EDX * 8);
  *in_EAX = *(undefined4 *)(iVar1 + in_EDX * 8);
  in_EAX[1] = uVar2;
  return;
}

