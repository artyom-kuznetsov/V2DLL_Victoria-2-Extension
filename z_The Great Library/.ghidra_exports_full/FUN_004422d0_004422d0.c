// FUN_004422d0 @ 004422d0 body=[[004422d0, 0044233c] [00442340, 004423df]]


undefined4 FUN_004422d0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("siege_progress_bar",0x12);
  local_8 = 0;
  uVar2 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x44))(local_2c);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x28) = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  if (*(int *)(in_ECX + 0x28) != 0) {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x28) + 0x94);
    FUN_00401000(0x47c35040);
    iVar3 = FUN_00b31c00();
    iVar3 = __alldiv((longlong)*(int *)(in_ECX + 0x2c) * (longlong)iVar3,1000,0);
    FUN_00401000(0x43fa4001);
    iVar4 = FUN_00b31c00();
    (**(code **)(*piVar1 + 0x5c))((iVar4 + iVar3) / 1000);
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}

