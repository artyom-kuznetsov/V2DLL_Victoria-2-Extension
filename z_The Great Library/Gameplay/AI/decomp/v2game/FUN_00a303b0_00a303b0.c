// FUN_00a303b0 @ 00a303b0 body=[[00a303b0, 00a30410]]


void FUN_00a303b0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0xb4c);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_009ed1e0(*(int *)(in_ECX + 0x8c),*(undefined4 *)(in_ECX + 0x44),
                 *(int *)(in_ECX + 0x8c) + 0x6bcfc);
  }
  ExceptionList = local_10;
  return;
}

