// FUN_005eb990 @ 005eb990 body=[[005eb990, 005eb9f4]]


void FUN_005eb990(char param_1)

{
  int in_ECX;
  
  if (param_1 == '\0') {
    FUN_004ec510();
  }
  else {
    *(undefined1 *)(in_ECX + 0x11) = *(undefined1 *)(*(int *)(in_ECX + 0xc) + 0x12d0);
    FUN_004ec510();
  }
  return;
}

