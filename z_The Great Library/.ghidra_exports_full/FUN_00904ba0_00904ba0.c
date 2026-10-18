// FUN_00904ba0 @ 00904ba0 body=[[00904ba0, 00904bc9]]


uint FUN_00904ba0(uint param_1)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x24) != '\0') && (in_EAX = param_1, *(int *)(param_1 + 0x28) != 0)) {
    uVar1 = FUN_00465140();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

