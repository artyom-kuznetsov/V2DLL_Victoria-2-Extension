// FUN_009115b0 @ 009115b0 body=[[009115b0, 00911612]]


void FUN_009115b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  in_ECX[7] = *(int *)(DAT_012588e8 + 0xb0c);
  iVar1 = FUN_00aae9af(0x40);
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*in_ECX + 0x30))();
    FUN_0090f620(iVar1,uVar2);
  }
  ExceptionList = local_10;
  return;
}

