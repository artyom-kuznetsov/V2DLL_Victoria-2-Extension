// FUN_00a16c70 @ 00a16c70 body=[[00a16c70, 00a16cf0] [00a16d08, 00a16d24]]


void FUN_00a16c70(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  undefined4 uStack_2c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b3b8f8;
  pvStack_14 = ExceptionList;
  local_c = 0;
  ExceptionList = &pvStack_14;
  iVar1 = FUN_00aad56b(50000000);
  piVar2 = (int *)FUN_00aae9af(4);
  piVar4 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 50000000;
    piVar4 = piVar2;
  }
  iVar3 = FUN_00a8d220(piVar4,*in_ECX,in_ECX[1] - *in_ECX);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  FUN_009d7490(*(undefined4 *)(param_1 + 4),iVar1,*piVar4 + iVar1,uStack_2c);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar1);
}

