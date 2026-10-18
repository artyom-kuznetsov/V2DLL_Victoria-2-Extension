// FUN_00b1bfa0 @ 00b1bfa0 body=[[00b1bfa0, 00b1bff8]]


void FUN_00b1bfa0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  
  if ((uint)in_ECX[2] < param_2) {
    iVar1 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[1],param_2 * 4,0x18,4,0,0,0);
    in_ECX[1] = iVar1;
    in_ECX[2] = param_2;
  }
  uVar2 = 4;
  if (3 < param_2) {
    do {
      (**(code **)(*in_ECX + 0x10))(param_1,uVar2);
      uVar2 = uVar2 * 2;
    } while (uVar2 <= param_2);
  }
  return;
}

