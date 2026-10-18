// FUN_0087a470 @ 0087a470 body=[[0087a470, 0087a482] [0087a486, 0087a4ac] [0087a4b0, 0087a4b6]]


void FUN_0087a470(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x3c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x3c));
  }
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  FUN_008760f0(in_ECX);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

