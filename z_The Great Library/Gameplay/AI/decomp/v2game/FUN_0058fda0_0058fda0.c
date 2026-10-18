// FUN_0058fda0 @ 0058fda0 body=[[0058fda0, 0058fe19]]


uint FUN_0058fda0(void)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x48) != 0) && (*(int *)(in_ECX + 0x44) != 0)) {
    in_EAX = (**(code **)(**(int **)(in_ECX + 0x48) + 0x34))();
    if ((char)in_EAX != '\0') {
      in_EAX = (**(code **)(**(int **)(in_ECX + 0x44) + 0x18))();
      if ((char)in_EAX != '\0') {
        in_EAX = *(uint *)(in_ECX + 0x48);
        if (*(int *)(in_ECX + 0x44) == *(int *)(in_EAX + 0x54)) {
          uVar1 = FUN_00525be0(*(undefined4 *)
                                (*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4),
                               *(int *)(in_ECX + 0x44),in_EAX);
          return uVar1;
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}

