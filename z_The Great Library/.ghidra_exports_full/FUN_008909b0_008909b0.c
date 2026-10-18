// FUN_008909b0 @ 008909b0 body=[[008909b0, 00890a44]]


void FUN_008909b0(int param_1)

{
  undefined4 in_ECX;
  undefined4 local_14;
  
  FUN_008852b0(in_ECX);
  if (*(char *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4)
                                 + 0xbe8) + local_14 * 4) + 0x60) != '\0') {
    FUN_0092f420();
    FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + local_14 * 4));
    FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4));
  }
  return;
}

