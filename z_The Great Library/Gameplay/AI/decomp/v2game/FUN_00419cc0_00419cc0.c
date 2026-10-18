// FUN_00419cc0 @ 00419cc0 body=[[00419cc0, 00419ce9]]


int FUN_00419cc0(int param_1)

{
  int in_EAX;
  int in_ECX;
  
  for (; in_EAX != param_1; in_EAX = in_EAX + 0x10) {
    FUN_00419a50(in_EAX);
    in_ECX = in_ECX + 0x10;
  }
  return in_ECX;
}

