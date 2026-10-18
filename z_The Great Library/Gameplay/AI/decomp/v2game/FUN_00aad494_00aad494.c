// FUN_00aad494 @ 00aad494 body=[[00aad494, 00aad4af] [00aad4b7, 00aad4c9] [00aad4d1, 00aad4d7]]


void FUN_00aad494(void)

{
  ios_base *in_ECX;
  
  std::ios_base::_Callfns(in_ECX,0);
  if (*(int *)(in_ECX + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x28));
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  if (*(int *)(in_ECX + 0x2c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x2c));
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  return;
}

