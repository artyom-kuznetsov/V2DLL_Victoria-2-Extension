// FUN_00905120 @ 00905120 body=[[00905120, 00905179]]


uint FUN_00905120(uint param_1)

{
  undefined4 uVar1;
  uint in_EAX;
  uint uVar2;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x3c) != '\0') && (in_EAX = param_1, *(int *)(param_1 + 0x28) != 0)) {
    uVar1 = *(undefined4 *)(in_ECX + 0x1c);
    FUN_00408ed0(in_ECX + 0x20,0,0xffffffff);
    uVar2 = FUN_00466360(uVar1);
    return uVar2;
  }
  return in_EAX & 0xffffff00;
}

