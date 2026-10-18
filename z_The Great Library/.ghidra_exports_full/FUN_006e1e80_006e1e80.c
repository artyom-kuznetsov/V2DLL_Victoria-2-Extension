// FUN_006e1e80 @ 006e1e80 body=[[006e1e80, 006e1ec5]]


void FUN_006e1e80(int param_1)

{
  int in_EAX;
  int in_ECX;
  
  while (param_1 != in_ECX) {
    FUN_00408ed0(in_ECX + -0x30,0,0xffffffff);
    *(undefined4 *)(in_EAX + -0x10) = *(undefined4 *)(in_ECX + -0x10);
    *(undefined4 *)(in_EAX + -0xc) = *(undefined4 *)(in_ECX + -0xc);
    *(undefined4 *)(in_EAX + -8) = *(undefined4 *)(in_ECX + -8);
    *(undefined4 *)(in_EAX + -4) = *(undefined4 *)(in_ECX + -4);
    in_ECX = in_ECX + -0x30;
    in_EAX = in_EAX + -0x30;
  }
  return;
}

