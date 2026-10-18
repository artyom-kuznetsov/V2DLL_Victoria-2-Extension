// FUN_00b25d70 @ 00b25d70 body=[[00b25d70, 00b25da5]]


undefined4 FUN_00b25d70(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0xc);
  if ((uVar1 <= param_3) &&
     ((param_3 != uVar1 || (*(uint *)(*(int *)(param_1 + 0xc) + 8) < param_2)))) {
    FUN_00b1f840("Past end of file");
    return 0;
  }
  *(uint *)(param_1 + 0x14) = param_2;
  return 1;
}

