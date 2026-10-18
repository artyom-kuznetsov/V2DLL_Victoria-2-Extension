// FUN_007720a0 @ 007720a0 body=[[007720a0, 0077211c]]


void FUN_007720a0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2f4) != 0) {
    if (*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x2f4) * 4) + 0xbe4
                        ) * 4) != 0) {
      (**(code **)(**(int **)(in_ECX + 4) + 0xb4))
                (*(undefined4 *)
                  (*(int *)(DAT_012588e8 + 0xacc) +
                  *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x2f4) * 4) +
                          0xbe4) * 4));
    }
  }
  return;
}

