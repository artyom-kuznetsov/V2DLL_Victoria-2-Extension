// FUN_007a3f00 @ 007a3f00 body=[[007a3f00, 007a3f94]]


void FUN_007a3f00(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ef86;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CGameSelectionOption::vftable;
  in_ECX[7] = CGameSelectionOption::vftable;
  local_8 = 1;
  if ((undefined4 *)in_ECX[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[10])(1);
  }
  in_ECX[0xc] = CCheckBoxObserver::vftable;
  *in_ECX = &PTR_FUN_00e392f0;
  in_ECX[7] = &PTR_FUN_00e39320;
  local_8 = 3;
  if ((int *)in_ECX[8] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[8] + 0x50))();
  }
  local_8 = 0xffffffff;
  in_ECX[7] = &PTR_FUN_00e39158;
  *in_ECX = &PTR_FUN_00e38708;
  FUN_009a62b0();
  ExceptionList = local_10;
  return;
}

