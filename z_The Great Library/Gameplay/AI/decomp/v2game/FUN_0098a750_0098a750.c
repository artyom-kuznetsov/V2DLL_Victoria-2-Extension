// FUN_0098a750 @ 0098a750 body=[[0098a750, 0098a87c]]


int FUN_0098a750(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
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
  iVar3 = DAT_013f08c8;
  local_8 = 0;
  local_14 = DAT_013f08c8;
  if (DAT_00f1f8e8 == 0) {
    std::_Lockit::_Lockit(local_18,0);
    if (DAT_00f1f8e8 == 0) {
      DAT_00f1f8dc = DAT_00f1f8dc + 1;
      DAT_00f1f8e8 = DAT_00f1f8dc;
    }
    FUN_00aad9f1();
  }
  uVar1 = DAT_00f1f8e8;
  iVar2 = *in_ECX;
  if (DAT_00f1f8e8 < *(uint *)(iVar2 + 0xc)) {
    iVar4 = *(int *)(*(int *)(iVar2 + 8) + DAT_00f1f8e8 * 4);
    if (iVar4 == 0) goto LAB_0098a7d5;
LAB_0098a7f3:
    if (iVar4 != 0) goto LAB_0098a85b;
  }
  else {
    iVar4 = 0;
LAB_0098a7d5:
    if (*(char *)(iVar2 + 0x14) == '\0') goto LAB_0098a7f3;
    iVar2 = FUN_00aad69f();
    if (uVar1 < *(uint *)(iVar2 + 0xc)) {
      iVar4 = *(int *)(*(int *)(iVar2 + 8) + uVar1 * 4);
      goto LAB_0098a7f3;
    }
  }
  iVar4 = iVar3;
  if (iVar3 == 0) {
    iVar3 = FUN_00988170();
    iVar4 = local_14;
    if (iVar3 == -1) {
      FUN_00aae36c("bad cast");
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_28,&DAT_00e6fbac);
    }
    DAT_013f08c8 = local_14;
    std::_Lockit::_Lockit(local_18,0);
    if (*(int *)(iVar4 + 4) != -1) {
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    }
    FUN_00aad9f1();
    Facet_Register(iVar4);
  }
LAB_0098a85b:
  local_8 = 0xffffffff;
  FUN_00aad9f1();
  ExceptionList = local_10;
  return iVar4;
}

