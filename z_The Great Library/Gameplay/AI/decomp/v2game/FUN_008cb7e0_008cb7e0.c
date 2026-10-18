// FUN_008cb7e0 @ 008cb7e0 body=[[008cb7e0, 008cb822]]


undefined4 FUN_008cb7e0(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    cVar1 = FUN_005441a0();
    if (cVar1 == *(char *)(in_ECX + 0x1c)) {
      return 1;
    }
  }
  return 0;
}

