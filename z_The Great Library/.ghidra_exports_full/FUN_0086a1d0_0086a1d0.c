// FUN_0086a1d0 @ 0086a1d0 body=[[0086a1d0, 0086a2a8]]


void FUN_0086a1d0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3aba8;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  FUN_00401000();
  iVar2 = FUN_00b31c00();
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else {
    iVar1 = *param_2;
    if ((iVar1 < -0x189373) || (0x20c49a < iVar1)) {
      uVar4 = __allmul(iVar1,iVar1 >> 0x1f,1000);
      iVar2 = __alldiv(uVar4,iVar2);
    }
    else {
      iVar2 = (iVar1 * 1000) / iVar2;
    }
  }
  piVar3 = (int *)FUN_00aae9af();
  if (piVar3 != (int *)0x0) {
    *piVar3 = iVar2;
  }
  local_8 = 0;
  FUN_00870b40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(0);
}

