// FUN_005b5980 @ 005b5980 body=[[005b5980, 005b5a25]]


void FUN_005b5980(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5b6e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*unaff_EDI + 0x38))();
  for (puVar1 = *(undefined4 **)(param_1 + 8);
      (puVar1 != (undefined4 *)0x0 && ((int *)*puVar1 != unaff_EDI));
      puVar1 = (undefined4 *)puVar1[2]) {
  }
  FUN_005f2ae0(puVar1);
  if ((char)unaff_EDI[3] != '\0') {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa0))(unaff_EDI + 2,1);
  }
  iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x104))();
  if (iVar2 != 0) {
    FUN_006c7720();
  }
  (**(code **)*unaff_EDI)(1);
  ExceptionList = local_10;
  return;
}

