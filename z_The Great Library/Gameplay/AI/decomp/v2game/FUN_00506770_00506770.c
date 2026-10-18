// FUN_00506770 @ 00506770 body=[[00506770, 005067c6]]


undefined4 FUN_00506770(int param_1)

{
  int in_ECX;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    (**(code **)(**(int **)(in_ECX + 0xcdc) + 0xb4))
              (*(undefined4 *)
                (*(int *)(DAT_012588e8 + 0xacc) +
                *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0xbe4
                        ) * 4));
  }
  return 1;
}

