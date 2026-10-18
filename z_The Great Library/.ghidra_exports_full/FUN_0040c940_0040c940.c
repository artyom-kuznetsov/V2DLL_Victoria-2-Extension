// FUN_0040c940 @ 0040c940 body=[[0040c940, 0040c95c]]


void FUN_0040c940(void)

{
  int iVar1;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x10))();
  iVar1 = in_ECX[0xc];
  *(undefined4 *)(iVar1 + 0x6c) = 1;
  *(undefined4 *)(iVar1 + 0x10c) = 1;
  return;
}

