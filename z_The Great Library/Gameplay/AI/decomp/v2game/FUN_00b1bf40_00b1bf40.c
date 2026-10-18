// FUN_00b1bf40 @ 00b1bf40 body=[[00b1bf40, 00b1bf97]]


void FUN_00b1bf40(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *in_ECX;
  
  if ((uint)in_ECX[2] < param_2) {
    iVar1 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[1],param_2 * 4,0x18,4,0,0,0);
    in_ECX[1] = iVar1;
    in_ECX[2] = param_2;
  }
  for (; 3 < param_2; param_2 = param_2 >> 1) {
    (**(code **)(*in_ECX + 0xc))(param_1,param_2);
  }
  return;
}

