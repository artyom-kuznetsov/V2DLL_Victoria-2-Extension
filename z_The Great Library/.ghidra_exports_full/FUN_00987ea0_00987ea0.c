// FUN_00987ea0 @ 00987ea0 body=[[00987ea0, 00987f9c]]


/* WARNING: Removing unreachable block (ram,0x00987f6b) */

int * FUN_00987ea0(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4f87f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_3 != 0) {
    ExceptionList = &local_10;
    *param_1 = (int)&PTR_00e296f8;
    param_1[0x14] = (int)std::basic_ios<char,std::char_traits<char>_>::vftable;
    local_8 = 0;
  }
  *(undefined ***)((int)param_1 + *(int *)(*param_1 + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*param_1 + 4);
  FUN_004f6210();
  *(int **)((int)param_1 + iVar1 + 0x38) = param_1 + 1;
  *(undefined4 *)((int)param_1 + iVar1 + 0x3c) = 0;
  uVar2 = FUN_00549350(0x20);
  *(undefined1 *)((int)param_1 + iVar1 + 0x40) = uVar2;
  if (*(int *)((int)param_1 + iVar1 + 0x38) == 0) {
    FUN_00401120(*(uint *)((int)param_1 + iVar1 + 0xc) | 4,0);
  }
  local_8 = 2;
  *(undefined ***)((int)param_1 + *(int *)(*param_1 + 4)) = &PTR_FUN_00e37850;
  FUN_00548f50();
  uVar3 = 0;
  param_1[1] = (int)std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  if ((param_2 & 1) == 0) {
    uVar3 = 4;
  }
  if ((param_2 & 8) != 0) {
    uVar3 = uVar3 | 8;
  }
  if ((param_2 & 4) != 0) {
    uVar3 = uVar3 | 0x10;
  }
  param_1[0x11] = uVar3;
  param_1[0x10] = 0;
  ExceptionList = local_10;
  return param_1;
}

