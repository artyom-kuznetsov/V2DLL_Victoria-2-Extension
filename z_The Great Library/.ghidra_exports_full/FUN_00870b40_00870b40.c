// FUN_00870b40 @ 00870b40 body=[[00870b40, 00870be6] [00870bed, 00870bf7]]


void FUN_00870b40(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined **local_28 [4];
  undefined4 local_18;
  char *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = DAT_013f3640;
  puStack_c = &LAB_00b3ab28;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  local_18 = param_1;
  ExceptionList = &pvStack_10;
  iVar2 = FUN_008740f0(DAT_013f3640);
  if (iVar2 == 0) {
    local_14 = "Trying to use unregistered class";
    std::exception::exception((exception *)local_28,&local_14);
    local_28[0] = std::runtime_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_00e6fb74);
  }
  local_14 = (char *)FUN_00aa99b0();
  if (local_14 + 8 != (char *)0x0) {
    *(int *)(local_14 + 0xc) = iVar2;
    local_14[0x10] = '\0';
    *(undefined ***)(local_14 + 8) =
         luabind::detail::pointer_holder<std::auto_ptr<CFixedPoint>,void_const_>::vftable;
    *(undefined4 *)(local_14 + 0x14) = param_1;
    local_14[0x18] = '\0';
    local_14[0x19] = '\0';
    local_14[0x1a] = '\0';
    local_14[0x1b] = '\0';
    *(undefined4 *)(local_14 + 0x1c) = uVar1;
    *(undefined4 *)(local_14 + 0x20) = local_18;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(0);
  }
  local_14[0] = '\0';
  local_14[1] = '\0';
  local_14[2] = '\0';
  local_14[3] = '\0';
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1);
}

