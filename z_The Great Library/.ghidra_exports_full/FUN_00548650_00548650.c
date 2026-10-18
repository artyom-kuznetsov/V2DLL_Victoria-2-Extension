// FUN_00548650 @ 00548650 body=[[00548650, 005486d3]]


int * FUN_00548650(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b498f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)((int)param_1 + *(int *)(*param_1 + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = *(int *)(*param_1 + 4);
  FUN_004f6210();
  *(undefined4 *)((int)param_1 + iVar1 + 0x38) = param_2;
  *(undefined4 *)((int)param_1 + iVar1 + 0x3c) = 0;
  uVar2 = FUN_00549350(0x20);
  *(undefined1 *)((int)param_1 + iVar1 + 0x40) = uVar2;
  if (*(int *)((int)param_1 + iVar1 + 0x38) == 0) {
    FUN_00401120(*(uint *)((int)param_1 + iVar1 + 0xc) | 4,0);
  }
  ExceptionList = local_10;
  return param_1;
}

