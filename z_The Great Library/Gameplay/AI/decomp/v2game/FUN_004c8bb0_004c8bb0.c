// FUN_004c8bb0 @ 004c8bb0 body=[[004c8bb0, 004c8c16]]


void FUN_004c8bb0(int param_1)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  
  if (in_EAX < (*(int *)(in_ECX + 0xcc) - *(int *)(in_ECX + 200)) / 0x24) {
    if (*(int *)(in_ECX + 0x88) - *(int *)(in_ECX + 0x84) >> 4 <= in_EAX) {
      FUN_004c8d90();
    }
    iVar1 = in_EAX * 0x10 + *(int *)(in_ECX + 0x84);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}

