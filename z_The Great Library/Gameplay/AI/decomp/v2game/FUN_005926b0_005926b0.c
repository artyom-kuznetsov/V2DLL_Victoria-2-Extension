// FUN_005926b0 @ 005926b0 body=[[005926b0, 00592716]]


uint FUN_005926b0(void)

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
          uVar1 = FUN_00525d90(*(int *)(in_ECX + 0x44));
          return uVar1;
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}

