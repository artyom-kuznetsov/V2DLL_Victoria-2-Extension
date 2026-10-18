// FUN_00873d40 @ 00873d40 body=[[00873d40, 00873dfa] [00873dfe, 00873e0f] [00873e13, 00873e23]]


void FUN_00873d40(char *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined **local_24 [4];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar3 = param_1;
  iVar2 = DAT_013f366c;
  puStack_c = &LAB_00b3e8d8;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = param_1;
  ExceptionList = &local_10;
  iVar4 = FUN_008742b0(DAT_013f366c);
  if (iVar4 == 0) {
    local_14 = "Trying to use unregistered class";
    std::exception::exception((exception *)local_24,&local_14);
    local_24[0] = std::runtime_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_24,&DAT_00e6fb74);
  }
  piVar5 = (int *)FUN_00aa99b0();
  piVar1 = piVar5 + 2;
  if (piVar1 != (int *)0x0) {
    param_1 = (char *)0x0;
    piVar5[3] = iVar4;
    *(undefined1 *)(piVar5 + 4) = 0;
    *piVar1 = (int)luabind::detail::pointer_holder<std::auto_ptr<CString>,void_const_>::vftable;
    piVar5[5] = (int)pcVar3;
    piVar5[6] = 0;
    piVar5[7] = iVar2;
    piVar5[8] = (int)local_14;
  }
  *piVar5 = (int)piVar1;
  if (param_1 != (char *)0x0) {
    if (0xf < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)param_1);
    }
    param_1[0x14] = '\x0f';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    *param_1 = '\0';
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return;
}

