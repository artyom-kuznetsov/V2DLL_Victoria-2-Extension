// FUN_00796890 @ 00796890 body=[[00796890, 00796abc]]


void FUN_00796890(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int unaff_EBX;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9d376;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar2 = FUN_00967f50();
  if ((iVar2 != 0) && (cVar1 = FUN_005e5800(), cVar1 != '\0')) {
    FUN_00967f50();
    iVar2 = FUN_005ab7f0();
    if ((*(int **)(iVar2 + 0xd8) != (int *)0x0) &&
       (((cVar1 = (**(code **)(**(int **)(iVar2 + 0xd8) + 0x20))(), cVar1 != '\0' &&
         (cVar1 = FUN_005dcd20(), cVar1 != '\0')) && (piVar3 = (int *)FUN_005b6750(), 0 < *piVar3)))
       ) {
      iVar2 = FUN_00aae9af();
      iStack_c = 0;
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        FUN_0072d4e0();
        iStack_c._0_1_ = 1;
        FUN_0072d4e0();
        iStack_c._0_1_ = 2;
        FUN_009fb110();
        iStack_c = (uint)iStack_c._1_3_ << 8;
        piVar3 = (int *)FUN_00788ea0(iVar2,*(undefined4 *)(in_ECX + 0xd0),
                                     *(undefined4 *)(in_ECX + 0x78));
      }
      iStack_c = 0xffffffff;
      FUN_00641630();
      FUN_006416a0();
      FUN_006480e0();
      (**(code **)(*piVar3 + 0x28))();
      ExceptionList = local_14;
      return;
    }
    iVar2 = FUN_00aae9af();
    iStack_c = 3;
    if (iVar2 != 0) {
      FUN_005dd5b0();
    }
    iStack_c = 0xffffffff;
    iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))();
    (**(code **)(*(int *)(**(int **)(unaff_EBX + 0x78) + 0x18) + 0x38))();
  }
  ExceptionList = local_14;
  return;
}

