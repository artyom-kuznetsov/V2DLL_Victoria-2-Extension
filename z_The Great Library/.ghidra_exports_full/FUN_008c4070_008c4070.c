// FUN_008c4070 @ 008c4070 body=[[008c4070, 008c40ab]]


void FUN_008c4070(undefined4 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  int *in_ECX;
  
  if (param_3 != '\0') {
    cVar1 = (**(code **)(*in_ECX + 0x18))(param_2);
    if (cVar1 != '\0') {
      FUN_0085bc30(param_1,in_ECX[8],in_ECX[9]);
    }
  }
  return;
}

