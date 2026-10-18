// FUN_00413930 @ 00413930 body=[[00413930, 0041395d]]


int FUN_00413930(int param_1)

{
  int in_EAX;
  int in_ECX;
  
  for (; in_EAX != param_1; in_EAX = in_EAX + 0x1c) {
    FUN_00408ed0(in_EAX,0,0xffffffff);
    in_ECX = in_ECX + 0x1c;
  }
  return in_ECX;
}

