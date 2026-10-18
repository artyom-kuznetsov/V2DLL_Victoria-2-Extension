// FUN_009efc50 @ 009efc50 body=[[009efc50, 009efc9c]]


void FUN_009efc50(void)

{
  int *in_ECX;
  
  if (in_ECX[0x1c] == 0) {
    (**(code **)(*in_ECX + 0x118))();
  }
  if (in_ECX[0x1c] == 1) {
    (**(code **)(*in_ECX + 0x11c))();
  }
  if (in_ECX[0x1c] == 2) {
    (**(code **)(*in_ECX + 0x120))();
  }
  if (in_ECX[0x1c] == 3) {
    (**(code **)(*in_ECX + 0x124))();
  }
  return;
}

