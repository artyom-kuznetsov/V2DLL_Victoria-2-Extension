// FUN_00734600 @ 00734600 body=[[00734600, 007346ad]]


void FUN_00734600(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (0 < (*(int *)(in_ECX + 0xfc) - *(int *)(in_ECX + 0xf8)) / 0x28) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x6c);
    piVar2 = (int *)0x0;
    local_8 = 0;
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_0072ff00(iVar1,*(undefined4 *)(in_ECX + 0x68),in_ECX);
    }
    local_8 = 0xffffffff;
    FUN_00641630();
    FUN_006416a0();
    FUN_006480e0(piVar2);
    (**(code **)(*piVar2 + 0x28))();
  }
  ExceptionList = local_10;
  return;
}

