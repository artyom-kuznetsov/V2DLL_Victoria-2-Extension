// FUN_009dd220 @ 009dd220 body=[[009dd220, 009dd293]]


void FUN_009dd220(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[0x7e] == 0) {
    iVar1 = FUN_00973bd0(in_ECX + 0x76);
    if (iVar1 == 0) {
      iVar1 = FUN_00973bd0(in_ECX + 0x76);
    }
    if (iVar1 != 0) {
      (**(code **)(*in_ECX + 0xec))(in_ECX[0x7d],in_ECX + 0x6f,iVar1,0);
    }
  }
  (**(code **)(*in_ECX + 0x6c))();
  FUN_009ddec0(in_ECX,param_3);
  return;
}

