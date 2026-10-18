// FUN_00860e50 @ 00860e50 body=[[00860e50, 00860e7c]]


void FUN_00860e50(undefined4 param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x120))(param_1);
  if ((char)in_ECX[0xf] != '\0') {
    (**(code **)(*in_ECX + 0xd4))();
  }
  return;
}

