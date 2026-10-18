// FUN_0052b4e0 @ 0052b4e0 body=[[0052b4e0, 0052b505]]


void FUN_0052b4e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int in_EDX;
  
  iVar1 = *(int *)(param_1 + (DAT_00f096c8 + 0xd) * 0x10);
  uVar2 = *(undefined4 *)(iVar1 + 4 + in_EDX * 8);
  *in_EAX = *(undefined4 *)(iVar1 + in_EDX * 8);
  in_EAX[1] = uVar2;
  return;
}

