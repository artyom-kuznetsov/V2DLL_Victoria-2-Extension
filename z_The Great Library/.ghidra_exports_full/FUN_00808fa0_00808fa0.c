// FUN_00808fa0 @ 00808fa0 body=[[00808fa0, 00808fce]]


void FUN_00808fa0(int param_1)

{
  int in_EAX;
  int in_ECX;
  
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x48) {
    if (in_EAX != 0) {
      FUN_00804fa0();
    }
    in_EAX = in_EAX + 0x48;
  }
  return;
}

