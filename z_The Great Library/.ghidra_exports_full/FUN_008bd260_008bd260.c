// FUN_008bd260 @ 008bd260 body=[[008bd260, 008bd2a4]]


void FUN_008bd260(int param_1,int param_2,char param_3)

{
  char cVar1;
  int *in_ECX;
  
  if (((param_3 == '\0') && (*(int *)(param_2 + 0xc) == *(int *)(param_1 + 0xc))) &&
     (cVar1 = (**(code **)(*in_ECX + 0x18))(param_2), cVar1 == '\0')) {
    FUN_0085ba40();
  }
  return;
}

