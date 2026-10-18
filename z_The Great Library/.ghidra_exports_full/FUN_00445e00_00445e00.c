// FUN_00445e00 @ 00445e00 body=[[00445e00, 00445e95]]


void FUN_00445e00(char *param_1)

{
  _Lockit *in_ECX;
  undefined **local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a204;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::_Lockit::_Lockit(in_ECX,0);
  *(undefined4 *)(in_ECX + 4) = 0;
  in_ECX[8] = (_Lockit)0x0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  in_ECX[0x10] = (_Lockit)0x0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  in_ECX[0x18] = (_Lockit)0x0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  in_ECX[0x20] = (_Lockit)0x0;
  local_8 = 4;
  if (param_1 == (char *)0x0) {
    param_1 = "bad locale name";
    std::exception::exception((exception *)local_20,&param_1);
    local_20[0] = std::runtime_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_20,&DAT_00e6fb74);
  }
  std::_Locinfo::_Locinfo_ctor((_Locinfo *)in_ECX,param_1);
  ExceptionList = local_10;
  return;
}

