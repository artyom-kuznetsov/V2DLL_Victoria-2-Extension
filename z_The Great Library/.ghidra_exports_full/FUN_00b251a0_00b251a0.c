// FUN_00b251a0 @ 00b251a0 body=[[00b251a0, 00b251eb]]


ulonglong FUN_00b251a0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  
  iVar1 = param_1;
  iVar2 = FUN_00b25010(param_2,&param_1);
  if ((param_1 != 0) || (iVar3 = 0, iVar2 != 0)) {
    iVar3 = 1;
  }
  *param_3 = iVar3;
  if (iVar3 != 0) {
    return *(ulonglong *)(iVar1 + 8);
  }
  return CONCAT44(unaff_EBX,0xffffffff) | 0xffffffff00000000;
}

