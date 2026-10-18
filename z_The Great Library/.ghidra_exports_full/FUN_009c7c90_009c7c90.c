// FUN_009c7c90 @ 009c7c90 body=[[009c7c90, 009c7cc7]]


void FUN_009c7c90(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 8) == '\x01') {
    FUN_00a5c690(in_ECX,param_1,param_2);
    return;
  }
  FUN_009c7cd0(in_ECX,in_ECX + 4,param_2);
  return;
}

