// FUN_009a4bd0 @ 009a4bd0 body=[[009a4bd0, 009a4c9b]]


void FUN_009a4bd0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a09b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0131c974 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x10);
    local_8 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 8) = 0;
      uVar2 = FUN_00993dd0();
      *(undefined4 *)(iVar1 + 4) = uVar2;
      *(undefined4 *)uVar2 = uVar2;
      *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
      *(int *)(*(int *)(iVar1 + 4) + 8) = *(int *)(iVar1 + 4);
      *(undefined1 *)(*(int *)(iVar1 + 4) + 0x34) = 1;
      *(undefined1 *)(*(int *)(iVar1 + 4) + 0x35) = 1;
    }
    local_8 = 0xffffffff;
    FUN_009a5820(iVar1);
  }
  piVar3 = (int *)FUN_009a52c0(DAT_0131c974);
  iVar1 = *piVar3;
  iVar4 = FUN_009a5a50(iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000008);
  if (piVar3[1] == 0x3ffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("list<T> too long");
  }
  piVar3[1] = piVar3[1] + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  ExceptionList = local_10;
  return;
}

