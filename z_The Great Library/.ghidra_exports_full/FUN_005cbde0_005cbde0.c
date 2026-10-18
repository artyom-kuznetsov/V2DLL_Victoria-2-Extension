// FUN_005cbde0 @ 005cbde0 body=[[005cbde0, 005cbdfd]]


int FUN_005cbde0(int param_1)

{
  int iVar1;
  int in_EAX;
  uint3 uVar2;
  
  iVar1 = *(int *)(in_EAX + 0x74);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == param_1)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}

