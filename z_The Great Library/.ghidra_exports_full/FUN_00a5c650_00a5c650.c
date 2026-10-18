// FUN_00a5c650 @ 00a5c650 body=[[00a5c650, 00a5c687]]


void FUN_00a5c650(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 8) == '\x01') {
    FUN_00a5c690(in_ECX,param_1,param_2);
    return;
  }
  FUN_00a5c820(in_ECX,in_ECX + 4,param_2);
  return;
}

