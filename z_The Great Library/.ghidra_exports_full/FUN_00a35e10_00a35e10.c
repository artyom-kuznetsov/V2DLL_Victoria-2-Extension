// FUN_00a35e10 @ 00a35e10 body=[[00a35e10, 00a35e82]]


void FUN_00a35e10(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_01258b40;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if ((DAT_01258b40 != 0) && (*(char *)(*(int *)(DAT_01258b40 + 0x20) + 0x34) != '\0')) {
    ExceptionList = &local_10;
    iVar2 = FUN_00aae9af(0x70);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00a35400(iVar2);
    }
    local_8 = 0xffffffff;
    (**(code **)(**(int **)(*(int *)(iVar1 + 0x20) + 0x38) + 0x18))(uVar3);
  }
  ExceptionList = local_10;
  return;
}

