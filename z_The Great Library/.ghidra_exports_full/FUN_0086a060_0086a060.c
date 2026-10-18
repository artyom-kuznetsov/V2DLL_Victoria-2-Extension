// FUN_0086a060 @ 0086a060 body=[[0086a060, 0086a105]]


void FUN_0086a060(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *in_EDX;
  int iVar3;
  undefined8 uVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b427c8;
  pvStack_10 = ExceptionList;
  iVar3 = *param_2;
  if (iVar3 == 0) {
    iVar3 = -1;
    ExceptionList = &pvStack_10;
  }
  else {
    iVar1 = *in_EDX;
    if ((iVar1 < -0x189373) || (0x20c49a < iVar1)) {
      ExceptionList = &pvStack_10;
      uVar4 = __allmul(iVar1,iVar1 >> 0x1f,1000);
      iVar3 = __alldiv(uVar4,iVar3);
    }
    else {
      iVar3 = (iVar1 * 1000) / iVar3;
      ExceptionList = &pvStack_10;
    }
  }
  piVar2 = (int *)FUN_00aae9af();
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar3;
  }
  local_8 = 0;
  FUN_00870b40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(0);
}

