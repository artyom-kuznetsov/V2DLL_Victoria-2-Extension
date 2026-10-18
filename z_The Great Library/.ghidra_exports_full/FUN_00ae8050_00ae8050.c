// FUN_00ae8050 @ 00ae8050 body=[[00ae8050, 00ae80dd]]


undefined4 * FUN_00ae8050(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  puVar1 = (undefined4 *)FUN_00ae7ba0(param_1,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + 1;
    puVar1[3] = 0;
    return puVar1;
  }
  *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x2c) + 1;
  uVar2 = FUN_00b04980(param_1);
  puVar3 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x24,0x23f,4,0,0,0xffffffff);
  puVar1 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[8] = 0;
    puVar3[7] = 0;
    puVar1 = puVar3;
  }
  FUN_00b04110(uVar2,puVar1,param_3);
  FUN_00ae7d70(puVar1);
  return puVar1;
}

