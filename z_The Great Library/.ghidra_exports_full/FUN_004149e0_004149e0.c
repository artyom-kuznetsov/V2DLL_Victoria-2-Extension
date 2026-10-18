// FUN_004149e0 @ 004149e0 body=[[004149e0, 00414a17]]


int FUN_004149e0(void)

{
  undefined4 in_EAX;
  int in_ECX;
  
  switch(in_EAX) {
  case 1:
    return *(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44) >> 2;
  case 2:
    return *(int *)(in_ECX + 0x58) - *(int *)(in_ECX + 0x54) >> 2;
  case 3:
    return *(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) >> 2;
  case 4:
    return *(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x34) >> 2;
  default:
    return 0;
  }
}

