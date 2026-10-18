// FUN_0049fa30 @ 0049fa30 body=[[0049fa30, 0049facd]]


void FUN_0049fa30(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_00aae9af(0x10);
  local_8 = 0;
  if (iVar2 == 0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = (undefined4 *)FUN_0099ef10(unaff_EDI + 0x821);
  }
  local_8 = 0xffffffff;
  iVar2 = (**(code **)(*unaff_EDI + 0x24))();
  iVar3 = 1;
  if (1 < iVar2) {
    do {
      piVar1 = *(int **)(unaff_EDI[0xaa9] + iVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(local_14);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  if (local_14 != (undefined4 *)0x0) {
    (**(code **)*local_14)(1);
  }
  ExceptionList = local_10;
  return;
}

