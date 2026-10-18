// FUN_00a76860 @ 00a76860 body=[[00a76860, 00a768b0] [00a768b4, 00a768c5]]


void FUN_00a76860(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = in_EAX * 0x24;
  closesocket(*(SOCKET *)(*(int *)(param_1 + 0x10) + iVar2));
  *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x10)) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20 + iVar2) = 0xffffffff;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x14 + iVar2) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x14 + iVar2);
    if (iVar1 != 0) {
      FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14 + iVar2) = 0;
  }
  return;
}

