// FUN_009d9950 @ 009d9950 body=[[009d9950, 009d997c]]


void FUN_009d9950(undefined4 param_1)

{
  code *pcVar1;
  int *in_ECX;
  
  FUN_00aaea59(in_ECX[8]);
  pcVar1 = *(code **)(*in_ECX + 4);
  in_ECX[8] = 0;
  (*pcVar1)(param_1,0);
  return;
}

