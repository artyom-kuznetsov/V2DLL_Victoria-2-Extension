// FUN_009c7560 @ 009c7560 body=[[009c7560, 009c75b3]]


int FUN_009c7560(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = FUN_00ab047b();
  iVar2 = iVar1 / 3;
  iVar1 = iVar1 % 3;
  if (iVar1 == 0) {
    iVar2 = (**(code **)(*in_ECX + 0x24))(param_1);
  }
  else {
    if (iVar1 == 1) {
      iVar1 = (**(code **)(*in_ECX + 0x24))(param_2);
      return iVar1;
    }
    if (iVar1 == 2) {
      iVar1 = (**(code **)(*in_ECX + 0x24))(param_3);
      return iVar1;
    }
  }
  return iVar2;
}

