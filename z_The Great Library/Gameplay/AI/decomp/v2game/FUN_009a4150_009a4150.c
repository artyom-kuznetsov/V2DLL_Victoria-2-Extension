// FUN_009a4150 @ 009a4150 body=[[009a4150, 009a4188]]


void FUN_009a4150(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x7b) {
    if (in_ECX != 4) {
      FUN_009a4990(param_1,in_ECX + 0x30,in_ECX + 8);
      return;
    }
    FUN_009a4990(param_1,0x34,0);
  }
  return;
}

