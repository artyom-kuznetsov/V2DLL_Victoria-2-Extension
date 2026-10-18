// FUN_0076d160 @ 0076d160 body=[[0076d160, 0076d1d1]]


void FUN_0076d160(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x4c) != 0) {
    if (*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x4c) * 4) + 0xbe4)
                * 4) != 0) {
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xb4))
                (*(undefined4 *)
                  (*(int *)(DAT_012588e8 + 0xacc) +
                  *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x4c) * 4) +
                          0xbe4) * 4));
    }
  }
  return;
}

