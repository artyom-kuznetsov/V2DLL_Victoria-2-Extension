// FUN_00548590 @ 00548590 body=[[00548590, 00548645]]


void FUN_00548590(undefined4 param_1,char param_2,int param_3)

{
  ios_base iVar1;
  int *in_ECX;
  ios_base *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4cd6c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_3 != 0) {
    ExceptionList = &local_10;
    *in_ECX = (int)&PTR_00dffaa0;
    in_ECX[2] = (int)std::basic_ios<char,std::char_traits<char>_>::vftable;
    local_8 = 0;
  }
  *(undefined ***)((int)in_ECX + *(int *)(*in_ECX + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  piVar2 = (ios_base *)(*(int *)(*in_ECX + 4) + (int)in_ECX);
  FUN_004f6210();
  *(undefined4 *)(piVar2 + 0x38) = param_1;
  *(undefined4 *)(piVar2 + 0x3c) = 0;
  iVar1 = (ios_base)FUN_00549350(0x20);
  piVar2[0x40] = iVar1;
  if (*(int *)(piVar2 + 0x38) == 0) {
    FUN_00401120(*(uint *)(piVar2 + 0xc) | 4,0);
  }
  if (param_2 != '\0') {
    std::ios_base::_Addstd(piVar2);
  }
  ExceptionList = local_10;
  return;
}

