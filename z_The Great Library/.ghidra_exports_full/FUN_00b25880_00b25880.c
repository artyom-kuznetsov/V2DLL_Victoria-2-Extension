// FUN_00b25880 @ 00b25880 body=[[00b25880, 00b258bc]]


ulonglong FUN_00b25880(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  undefined4 unaff_EBX;
  
  iVar1 = FUN_00b25750(param_2);
  *param_3 = (uint)(iVar1 != 0);
  if ((iVar1 != 0) != 0) {
    return *(ulonglong *)(param_1 + 8);
  }
  return CONCAT44(unaff_EBX,0xffffffff) | 0xffffffff00000000;
}

