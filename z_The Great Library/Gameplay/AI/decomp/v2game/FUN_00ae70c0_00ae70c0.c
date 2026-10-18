// FUN_00ae70c0 @ 00ae70c0 body=[[00ae70c0, 00ae7105]]


void FUN_00ae70c0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x10) + param_1 * 0x1c);
  if ((uint)puVar1[3] < param_2) {
    uVar2 = (*(code *)PTR_FUN_00f01b0c)(*puVar1,param_2 * 4,0,4,0,0,0);
    *puVar1 = uVar2;
    puVar1[3] = param_2;
  }
  return;
}

