// FUN_009c75c0 @ 009c75c0 body=[[009c75c0, 009c762a]]


void FUN_009c75c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *in_ECX;
  
  uVar1 = FUN_00ab047b();
  uVar1 = uVar1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  switch(uVar1) {
  case 0:
    (**(code **)(*in_ECX + 0x24))(param_1);
    return;
  case 1:
    (**(code **)(*in_ECX + 0x24))(param_2);
    return;
  case 2:
    (**(code **)(*in_ECX + 0x24))(param_3);
    return;
  case 3:
    (**(code **)(*in_ECX + 0x24))(param_4);
  }
  return;
}

