// FUN_009eb400 @ 009eb400 body=[[009eb400, 009eb432]]


void FUN_009eb400(char param_1)

{
  int iVar1;
  int *in_ECX;
  
  *(char *)((int)in_ECX + 9) = param_1;
  iVar1 = DAT_00fc0c60;
  if (param_1 == '\0') {
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      (**(code **)(*in_ECX + 0x2c))(iVar1);
    }
  }
  return;
}

