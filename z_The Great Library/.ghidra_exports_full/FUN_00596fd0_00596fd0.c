// FUN_00596fd0 @ 00596fd0 body=[[00596fd0, 0059703c]]


void FUN_00596fd0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00967f50();
  if (iVar1 != 0) {
    iVar1 = FUN_00967f50();
    if (iVar1 != 0) {
      iVar1 = FUN_00967f50();
      iVar2 = FUN_00967f50();
      if ((*(int *)(*(int *)(iVar1 + 0x38) + 0x34) != 4) &&
         (*(int *)(*(int *)(iVar2 + 0x38) + 0x34) == 4)) {
        *param_2 = *(undefined4 *)(*(int *)(iVar1 + 0x38) + 0x25c);
        return;
      }
    }
  }
  *param_2 = 0;
  return;
}

