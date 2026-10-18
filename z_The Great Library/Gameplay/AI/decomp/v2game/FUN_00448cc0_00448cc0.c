// FUN_00448cc0 @ 00448cc0 body=[[00448cc0, 00448de9]]


int FUN_00448cc0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_EDI;
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
  iVar3 = DAT_013f081c;
  local_8 = 0;
  local_14 = DAT_013f081c;
  if (DAT_013f361c == 0) {
    std::_Lockit::_Lockit(local_18,0);
    if (DAT_013f361c == 0) {
      DAT_00f1f8dc = DAT_00f1f8dc + 1;
      DAT_013f361c = DAT_00f1f8dc;
    }
    FUN_00aad9f1();
  }
  uVar1 = DAT_013f361c;
  iVar2 = *unaff_EDI;
  if (DAT_013f361c < *(uint *)(iVar2 + 0xc)) {
    iVar4 = *(int *)(*(int *)(iVar2 + 8) + DAT_013f361c * 4);
    if (iVar4 == 0) goto LAB_00448d42;
LAB_00448d60:
    if (iVar4 != 0) goto LAB_00448dc9;
  }
  else {
    iVar4 = 0;
LAB_00448d42:
    if (*(char *)(iVar2 + 0x14) == '\0') goto LAB_00448d60;
    iVar2 = FUN_00aad69f();
    if (uVar1 < *(uint *)(iVar2 + 0xc)) {
      iVar4 = *(int *)(*(int *)(iVar2 + 8) + uVar1 * 4);
      goto LAB_00448d60;
    }
  }
  iVar4 = iVar3;
  if (iVar3 == 0) {
    iVar3 = FUN_00448ea0(&local_14);
    iVar4 = local_14;
    if (iVar3 == -1) {
      FUN_00aae36c("bad cast");
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_28,&DAT_00e6fbac);
    }
    DAT_013f081c = local_14;
    std::_Lockit::_Lockit(local_18,0);
    if (*(int *)(iVar4 + 4) != -1) {
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    }
    FUN_00aad9f1();
    Facet_Register(iVar4);
  }
LAB_00448dc9:
  local_8 = 0xffffffff;
  FUN_00aad9f1();
  ExceptionList = local_10;
  return iVar4;
}

