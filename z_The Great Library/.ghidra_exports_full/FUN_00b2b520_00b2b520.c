// FUN_00b2b520 @ 00b2b520 body=[[00b2b520, 00b2b545]]


undefined8 FUN_00b2b520(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  param_3 = *(int *)(*(int *)(param_1 + 0x30) + param_2 * 4) + param_3;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x34) + param_3 * 8);
  return CONCAT44(*(int *)(*(int *)(param_1 + 0x34) + 4 + param_3 * 8) + *(int *)(param_1 + 0x2c) +
                  (uint)CARRY4(uVar1,*(uint *)(param_1 + 0x28)),uVar1 + *(uint *)(param_1 + 0x28));
}

