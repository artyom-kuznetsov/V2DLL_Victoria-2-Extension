// FUN_008a4840 @ 008a4840 body=[[008a4840, 008a487d]]


void FUN_008a4840(int param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x983) {
    *(bool *)(in_ECX + 0x20) = *(int *)(param_1 + 0x228) == 0x29f;
  }
  else if (param_2 == 0x984) {
    *(bool *)(in_ECX + 0x21) = *(int *)(param_1 + 0x228) == 0x29f;
    return;
  }
  return;
}

