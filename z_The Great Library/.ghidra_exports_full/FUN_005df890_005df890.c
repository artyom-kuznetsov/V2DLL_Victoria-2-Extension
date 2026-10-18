// FUN_005df890 @ 005df890 body=[[005df890, 005df8d9]]


void FUN_005df890(int param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x2f9) {
    FUN_0072d580();
    return;
  }
  if (param_2 != 0x996) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  *(bool *)(in_ECX + 100) = *(int *)(param_1 + 0x228) == 0x29f;
  return;
}

