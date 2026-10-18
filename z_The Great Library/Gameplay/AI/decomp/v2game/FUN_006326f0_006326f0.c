// FUN_006326f0 @ 006326f0 body=[[006326f0, 0063281f]]


undefined4 FUN_006326f0(double param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 *unaff_EDI;
  undefined1 local_48 [28];
  undefined1 local_2c [28];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b456d0;
  local_10 = ExceptionList;
  if (*(char *)(unaff_EDI + 0x26) == '\0') {
    ExceptionList = &local_10;
    cVar3 = (**(code **)(*(int *)unaff_EDI[1] + 0x20))();
    if (cVar3 == '\0') {
      ExceptionList = local_10;
      return 0;
    }
    iVar2 = *(int *)(DAT_012588e8 + 0xb0c);
    if ((*(char *)((int)unaff_EDI + 0x99) == '\0') || (iVar2 <= (int)unaff_EDI[0xe])) {
      iVar1 = unaff_EDI[0xf];
    }
    else {
      iVar1 = unaff_EDI[0xf];
      if (iVar2 < iVar1) {
        if ((int)(param_1 * 10.0) % 5 == 0) {
          FUN_009885d0();
          local_8 = 0;
          piVar4 = (int *)(**(code **)(*(int *)*unaff_EDI + 0x34))(local_2c);
          (**(code **)(*piVar4 + 0xf8))(0x3dcccccd);
        }
        else {
          FUN_009885d0();
          local_8 = 1;
          piVar4 = (int *)(**(code **)(*(int *)*unaff_EDI + 0x34))(local_48);
          (**(code **)(*piVar4 + 0xf8))(DAT_00f092fc);
        }
        FUN_00408ad0();
        ExceptionList = local_10;
        return 1;
      }
    }
    if (iVar2 <= iVar1) {
      ExceptionList = local_10;
      return 1;
    }
    (**(code **)(*(int *)unaff_EDI[1] + 0x1c))();
  }
  ExceptionList = local_10;
  return 0;
}

