// FUN_00b28050 @ 00b28050 body=[[00b28050, 00b280ad]]


undefined4 FUN_00b28050(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  iVar1 = FUN_00b26dc0(param_2,&local_8);
  if ((local_8 == 0) && (iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  if (iVar1 == 0) {
    FUN_00b1f840(0);
  }
  else if (((*(int *)(iVar1 + 8) == 1) || (*(int *)(iVar1 + 8) == 5)) || (*(int *)(iVar1 + 4) != 0))
  {
    return 1;
  }
  return 0;
}

