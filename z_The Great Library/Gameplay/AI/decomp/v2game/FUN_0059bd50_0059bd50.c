// FUN_0059bd50 @ 0059bd50 body=[[0059bd50, 0059bdda]]


void FUN_0059bd50(void)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3affb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CCombat::vftable;
  in_ECX[2] = CCombat::vftable;
  local_8 = 0;
  if ((undefined4 *)in_ECX[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[4])(1);
  }
  if ((undefined4 *)in_ECX[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[5])(1);
  }
  iVar1 = DAT_012588e8;
  local_8 = 0xffffffff;
  in_ECX[2] = CSelectable::vftable;
  if (*(char *)(in_ECX + 3) != '\0') {
    (**(code **)(**(int **)(iVar1 + 0xb24) + 0xa4))(1);
  }
  ExceptionList = local_10;
  return;
}

