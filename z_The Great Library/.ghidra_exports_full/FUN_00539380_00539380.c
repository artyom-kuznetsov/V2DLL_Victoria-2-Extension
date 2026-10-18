// FUN_00539380 @ 00539380 body=[[00539380, 005393b4]]


void FUN_00539380(undefined4 param_1,int param_2)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 2000) = param_1;
  *(int *)(in_EAX + 0x7d4) = param_2;
  if ((param_2 < 1) && (param_2 < 0)) {
    *(undefined4 *)(in_EAX + 2000) = 0;
    *(undefined4 *)(in_EAX + 0x7d4) = 0;
  }
  return;
}

