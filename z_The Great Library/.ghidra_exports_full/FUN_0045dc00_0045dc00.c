// FUN_0045dc00 @ 0045dc00 body=[[0045dc00, 0045dc22] [0045dc26, 0045dc4e] [0045dc52, 0045dc58]]


void FUN_0045dc00(uint param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    FUN_00463b30(*(undefined4 *)(in_ECX + 0x28),param_1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x24));
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  FUN_008b32d0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

