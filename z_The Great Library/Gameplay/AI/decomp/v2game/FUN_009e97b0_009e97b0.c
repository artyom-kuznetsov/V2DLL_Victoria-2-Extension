// FUN_009e97b0 @ 009e97b0 body=[[009e97b0, 009e97de]]


bool FUN_009e97b0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00f20c44 == (int *)0x0) {
    return false;
  }
  DAT_01258abc = param_1;
  iVar1 = (**(code **)(*DAT_00f20c44 + 0x1c))(DAT_00f20c44,param_1);
  return -1 < iVar1;
}

