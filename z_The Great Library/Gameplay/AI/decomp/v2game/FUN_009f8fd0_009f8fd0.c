// FUN_009f8fd0 @ 009f8fd0 body=[[009f8fd0, 009f904c]]


undefined4 FUN_009f8fd0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xd8) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0xd4) = *(undefined4 *)(in_ECX + 0xd4);
  }
  if (*(int *)(in_ECX + 0xd4) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0xd8) = *(undefined4 *)(in_ECX + 0xd8);
  }
  iVar1 = *(int *)(in_ECX + 0xe4);
  iVar2 = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xdc) == in_ECX) {
      *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(in_ECX + 0xd8);
    }
    iVar2 = *(int *)(in_ECX + 0xe4);
    if (*(int *)(iVar2 + 0xe0) == in_ECX) {
      *(undefined4 *)(iVar2 + 0xe0) = *(undefined4 *)(in_ECX + 0xd4);
    }
  }
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

