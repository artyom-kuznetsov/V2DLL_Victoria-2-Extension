// FUN_00931570 @ 00931570 body=[[00931570, 0093159f]]


undefined4 FUN_00931570(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x30) != 0) {
    if (*(int *)(*(int *)(in_ECX + 0x30) + 0x14) == *(int *)(in_ECX + 0xc)) {
      return 1;
    }
  }
  return 0;
}

