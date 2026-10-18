// FUN_00aab140 @ 00aab140 body=[[00aab140, 00aab22b]]


void FUN_00aab140(undefined4 param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined **local_24 [4];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3682f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00aa9ba0(DAT_00ef259c ^ (uint)&stack0xfffffffc);
  *in_ECX = luabind::detail::class_registration::vftable;
  local_8 = 0;
  in_ECX[5] = 0;
  iVar1 = FUN_00aae9af(0x18);
  if (iVar1 != 0) {
    in_ECX[4] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(in_ECX[4] + 4) = in_ECX[4];
    *(undefined4 *)(in_ECX[4] + 8) = in_ECX[4];
    *(undefined1 *)(in_ECX[4] + 0x14) = 1;
    *(undefined1 *)(in_ECX[4] + 0x15) = 1;
    in_ECX[7] = 0;
    in_ECX[8] = 0;
    in_ECX[9] = 0;
    in_ECX[0xb] = &luabind::detail::null_type::RTTI_Type_Descriptor;
    in_ECX[0xe] = &luabind::detail::null_type::RTTI_Type_Descriptor;
    in_ECX[0xf] = 0;
    in_ECX[0x10] = 0;
    in_ECX[0x11] = 0;
    local_8._0_1_ = 3;
    FUN_00aa9bd0();
    local_8._0_1_ = 4;
    FUN_00aa9bd0();
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_00aa9bd0();
    in_ECX[2] = param_1;
    ExceptionList = local_10;
    return;
  }
  local_14 = (char *)0x0;
  std::exception::exception((exception *)local_24,&local_14);
  local_24[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_24,&DAT_00e6fb20);
}

