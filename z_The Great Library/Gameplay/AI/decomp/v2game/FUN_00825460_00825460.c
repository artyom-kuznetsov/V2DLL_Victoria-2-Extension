// FUN_00825460 @ 00825460 body=[[00825460, 00825597]]


int FUN_00825460(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  if (unaff_EDI == 0) {
    return 1;
  }
  ExceptionList = &local_10;
  cVar1 = FUN_005cc3e0();
  if (cVar1 == '\0') {
    if (unaff_EDI == *(int *)(in_ECX[0x37] + 0x58)) {
      if (in_ECX[0x28] < 1) {
        ExceptionList = local_10;
        return 1;
      }
      in_ECX[0x28] = 0;
      iVar2 = FUN_00aae9af(0x68);
      local_8 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_005df690(iVar2,in_ECX,0);
      }
      local_8 = 0xffffffff;
      iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar3);
      ExceptionList = local_10;
      return 1;
    }
    if (((0 < in_ECX[0x28]) && (iVar2 = FUN_00826f50(), *(int *)(iVar2 + 0x58) == unaff_EDI)) &&
       (in_ECX[0x1d] == 0)) {
      ExceptionList = local_10;
      return 1;
    }
    cVar1 = (**(code **)(*in_ECX + 0x88))
                      (*(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + unaff_EDI * 4));
    if (cVar1 != '\0') {
      iVar2 = FUN_00826c40(param_1);
      if (iVar2 == 0) {
        in_ECX[0x28] = unaff_EDI;
      }
      ExceptionList = local_10;
      return iVar2;
    }
  }
  ExceptionList = local_10;
  return 3;
}

