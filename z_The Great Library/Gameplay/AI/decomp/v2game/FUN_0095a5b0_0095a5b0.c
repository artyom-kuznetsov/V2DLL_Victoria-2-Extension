// FUN_0095a5b0 @ 0095a5b0 body=[[0095a5b0, 0095a5ea]]


void FUN_0095a5b0(undefined4 param_1,int param_2)

{
  int in_EAX;
  
  if (param_2 < 0) {
    *(undefined4 *)(in_EAX + 0x180) = 0;
    *(undefined4 *)(in_EAX + 0x184) = 0;
    return;
  }
  *(undefined4 *)(in_EAX + 0x180) = param_1;
  *(int *)(in_EAX + 0x184) = param_2;
  return;
}

