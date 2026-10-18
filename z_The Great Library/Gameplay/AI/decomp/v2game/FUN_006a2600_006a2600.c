// FUN_006a2600 @ 006a2600 body=[[006a2600, 006a2692]]


/* WARNING: Removing unreachable block (ram,0x006a2643) */

int * FUN_006a2600(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3cc30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar2 = param_2[1] - *param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar2 != 0) {
    iVar1 = FUN_00408fd0(iVar2);
    local_8 = 0;
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = iVar1 + iVar2;
    iVar2 = FUN_006a42a0(*param_2,param_2[1],param_1);
    param_1[1] = iVar2;
  }
  ExceptionList = local_10;
  return param_1;
}

