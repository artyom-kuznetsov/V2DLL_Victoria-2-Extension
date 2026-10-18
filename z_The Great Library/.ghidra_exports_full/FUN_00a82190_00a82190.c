// FUN_00a82190 @ 00a82190 body=[[00a82190, 00a82209]]


void FUN_00a82190(void)

{
  int in_ECX;
  
  FUN_00a82740(*(undefined4 *)(in_ECX + 0x178));
  (**(code **)(**(int **)(in_ECX + 0x180) + 0x34))
            (*(int **)(in_ECX + 0x180),(double)*(float *)(in_ECX + 0x148),0);
  if (*(int *)(in_ECX + 0x140) != 0) {
    *(int *)(*(int *)(in_ECX + 0x13c) + 0xb0) = *(int *)(in_ECX + 0x140);
  }
  FUN_00a4cb30(*(undefined4 *)(*(int *)(in_ECX + 0x13c) + 0xa8),in_ECX + 0x94);
  *(undefined4 *)(in_ECX + 0x148) = 0;
  return;
}

