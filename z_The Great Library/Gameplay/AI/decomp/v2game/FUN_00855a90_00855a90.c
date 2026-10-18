// FUN_00855a90 @ 00855a90 body=[[00855a90, 00855ba2]]


void FUN_00855a90(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4);
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0x12d0) != '\0'
     ) {
    ExceptionList = &local_10;
    FUN_00855ed0(in_ECX,iVar2 + 0x850,1);
    FUN_00855ed0(in_ECX,iVar2 + 0x860,0);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  FUN_00855bb0();
  cVar1 = FUN_00541b90(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4));
  if (cVar1 != '\0') {
    iVar2 = FUN_00aae9af(0x44);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00588bb0(iVar2);
    }
    local_8 = 0xffffffff;
    iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                            *(int *)(in_ECX + 0x38) * 4) + 0xcdc) + 0x44))();
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar3);
  }
  ExceptionList = local_10;
  return;
}

