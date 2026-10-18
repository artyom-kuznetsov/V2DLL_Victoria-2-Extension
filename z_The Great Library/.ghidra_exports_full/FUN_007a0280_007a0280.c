// FUN_007a0280 @ 007a0280 body=[[007a0280, 007a02c2]]


void FUN_007a0280(int param_1)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  for (; param_1 != in_ECX; in_ECX = in_ECX + -0x28) {
    in_EAX[-10] = *(undefined4 *)(in_ECX + -0x28);
    in_EAX[-9] = *(undefined4 *)(in_ECX + -0x24);
    in_EAX[-8] = *(undefined4 *)(in_ECX + -0x20);
    FUN_00408ed0(in_ECX + -0x1c,0,0xffffffff);
    in_EAX = in_EAX + -10;
  }
  return;
}

