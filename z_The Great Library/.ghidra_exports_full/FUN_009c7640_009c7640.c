// FUN_009c7640 @ 009c7640 body=[[009c7640, 009c76b8]]


int FUN_009c7640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = FUN_00ab047b();
  iVar2 = iVar1 / 5;
  switch(iVar1 % 5) {
  case 0:
    iVar1 = (**(code **)(*in_ECX + 0x24))(param_1);
    return iVar1;
  case 1:
    iVar1 = (**(code **)(*in_ECX + 0x24))(param_2);
    return iVar1;
  case 2:
    iVar1 = (**(code **)(*in_ECX + 0x24))(param_3);
    return iVar1;
  case 3:
    iVar1 = (**(code **)(*in_ECX + 0x24))(param_4);
    return iVar1;
  case 4:
    iVar2 = (**(code **)(*in_ECX + 0x24))(param_5);
  }
  return iVar2;
}

