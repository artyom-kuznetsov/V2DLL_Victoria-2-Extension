// FUN_0054a690 @ 0054a690 body=[[0054a690, 0054a7be]]


int FUN_0054a690(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_28 [12];
  _Lockit local_1c [4];
  _Lockit local_18 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::_Lockit::_Lockit(local_1c,0);
  iVar4 = DAT_013f082c;
  local_8 = 0;
  local_14 = DAT_013f082c;
  if (DAT_013f3620 == 0) {
    std::_Lockit::_Lockit(local_18,0);
    if (DAT_013f3620 == 0) {
      DAT_00f1f8dc = DAT_00f1f8dc + 1;
      DAT_013f3620 = DAT_00f1f8dc;
    }
    FUN_00aad9f1();
  }
  piVar2 = param_1;
  uVar1 = DAT_013f3620;
  iVar3 = *param_1;
  if (DAT_013f3620 < *(uint *)(iVar3 + 0xc)) {
    iVar5 = *(int *)(*(int *)(iVar3 + 8) + DAT_013f3620 * 4);
    if (iVar5 == 0) goto LAB_0054a716;
LAB_0054a734:
    if (iVar5 != 0) goto LAB_0054a79d;
  }
  else {
    iVar5 = 0;
LAB_0054a716:
    if (*(char *)(iVar3 + 0x14) == '\0') goto LAB_0054a734;
    iVar3 = FUN_00aad69f();
    if (uVar1 < *(uint *)(iVar3 + 0xc)) {
      iVar5 = *(int *)(*(int *)(iVar3 + 8) + uVar1 * 4);
      goto LAB_0054a734;
    }
  }
  iVar5 = iVar4;
  if (iVar4 == 0) {
    iVar4 = FUN_0054a920(&local_14,piVar2);
    iVar5 = local_14;
    if (iVar4 == -1) {
      FUN_00aae36c("bad cast");
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_28,&DAT_00e6fbac);
    }
    DAT_013f082c = local_14;
    std::_Lockit::_Lockit((_Lockit *)&param_1,0);
    if (*(int *)(iVar5 + 4) != -1) {
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
    }
    FUN_00aad9f1();
    Facet_Register(iVar5);
  }
LAB_0054a79d:
  local_8 = 0xffffffff;
  FUN_00aad9f1();
  ExceptionList = local_10;
  return iVar5;
}

