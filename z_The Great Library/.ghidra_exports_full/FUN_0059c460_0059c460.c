// FUN_0059c460 @ 0059c460 body=[[0059c460, 0059c51d]]


int * FUN_0059c460(int *param_1)

{
  int iVar1;
  int in_ECX;
  undefined8 uVar2;
  int local_c;
  int local_8;
  
  FUN_00401000(DAT_00f141c8);
  iVar1 = FUN_00b31c00();
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x28))(&local_8);
  (**(code **)(**(int **)(in_ECX + 0x14) + 0x28))(&local_c);
  if (local_8 < iVar1) {
    local_8 = iVar1;
  }
  if (local_c < iVar1) {
    local_c = iVar1;
  }
  iVar1 = local_c + local_8;
  if (iVar1 == 0) {
    *param_1 = -1;
    return param_1;
  }
  if (local_8 + 0x189373U < 0x39580e) {
    *param_1 = (local_8 * 1000) / iVar1;
    return param_1;
  }
  uVar2 = __allmul(local_8,local_8 >> 0x1f,1000,0);
  iVar1 = __alldiv(uVar2,iVar1,iVar1 >> 0x1f);
  *param_1 = iVar1;
  return param_1;
}

