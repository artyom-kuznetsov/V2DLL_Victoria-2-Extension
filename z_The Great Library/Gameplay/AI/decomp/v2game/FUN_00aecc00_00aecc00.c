// FUN_00aecc00 @ 00aecc00 body=[[00aecc00, 00aecc2c]]


void FUN_00aecc00(int param_1,char param_2)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != param_1) {
    FUN_00aed3f0(param_1);
    if ((param_2 != '\0') && (*(int *)(in_ECX + 4) != *(int *)(in_ECX + 8))) {
      FUN_00aed2e0(*(int *)(in_ECX + 4));
    }
  }
  return;
}

