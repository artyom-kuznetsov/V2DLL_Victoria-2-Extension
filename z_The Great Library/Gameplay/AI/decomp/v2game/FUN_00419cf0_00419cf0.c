// FUN_00419cf0 @ 00419cf0 body=[[00419cf0, 00419d23]]


void FUN_00419cf0(int param_1)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  
  if (in_ECX != param_1) {
    iVar1 = in_ECX - in_EAX;
    do {
      FUN_0043a750(in_ECX);
      *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(iVar1 + 0x10 + in_EAX);
      in_ECX = in_ECX + 0x14;
      in_EAX = in_EAX + 0x14;
    } while (in_ECX != param_1);
  }
  return;
}

