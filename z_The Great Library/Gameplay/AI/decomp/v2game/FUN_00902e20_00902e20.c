// FUN_00902e20 @ 00902e20 body=[[00902e20, 00902e5d]]


void FUN_00902e20(int param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x983) {
    *(bool *)(in_ECX + 0x1c) = *(int *)(param_1 + 0x228) == 0x29f;
  }
  else if (param_2 == 0x984) {
    *(bool *)(in_ECX + 0x1d) = *(int *)(param_1 + 0x228) == 0x29f;
    return;
  }
  return;
}

