// FUN_008852b0 @ 008852b0 body=[[008852b0, 0088532c]]


void FUN_008852b0(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_EDX;
  int iVar2;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    if (*(char *)(param_1 + 0x1d) == '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      *in_EAX = *(undefined4 *)(param_1 + 0x20);
      in_EAX[1] = uVar1;
      return;
    }
    iVar2 = *(int *)(in_EDX + 0x24);
    if (*(int *)(iVar2 + 0x30) != 0) {
      uVar1 = *(undefined4 *)(iVar2 + 0x30);
      *in_EAX = *(undefined4 *)(iVar2 + 0x2c);
      in_EAX[1] = uVar1;
      return;
    }
    iVar2 = *(int *)(iVar2 + 0x34);
  }
  else {
    iVar2 = *(int *)(in_EDX + 0x24);
    if (*(int *)(iVar2 + 0xc) != 0) {
      uVar1 = *(undefined4 *)(iVar2 + 0xc);
      *in_EAX = *(undefined4 *)(iVar2 + 8);
      in_EAX[1] = uVar1;
      return;
    }
    iVar2 = *(int *)(iVar2 + 0x10);
  }
  iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4);
  uVar1 = *(undefined4 *)(iVar2 + 300);
  *in_EAX = *(undefined4 *)(iVar2 + 0x128);
  in_EAX[1] = uVar1;
  return;
}

