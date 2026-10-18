// FUN_007da1f0 @ 007da1f0 body=[[007da1f0, 007da241]]


float10 FUN_007da1f0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_007db5e0(*(undefined4 *)(in_ECX + 0x13c),&param_1);
  if (cVar1 != '\0') {
    return (float10)((float)(*(int *)(in_ECX + 0x1ac) + 1) * 0.1 + 1.0);
  }
  return (float10)DAT_00f092dc;
}

