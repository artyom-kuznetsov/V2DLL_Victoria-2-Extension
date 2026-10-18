// FUN_009542c0 @ 009542c0 body=[[009542c0, 009542f9] [00954300, 009544f3] [009544f7, 0095450a]]


void FUN_009542c0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined1 local_50 [20];
  uint local_3c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b64ff8;
  local_14 = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0xc);
  for (piVar2 = *(int **)(iVar1 + 0x120); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    if (*piVar2 == 0x8a3) goto LAB_00954473;
  }
  for (piVar2 = *(int **)(iVar1 + 0x120); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    if (*piVar2 == 0x8a7) goto LAB_00954473;
  }
  piVar2 = *(int **)(iVar1 + 0x120);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      if ((0 < *(int *)(iVar1 + 0x1d8)) &&
         (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(in_ECX + 0x1c) * 4) + 0xbe8) +
                           *(int *)(in_ECX + 0x24) * 4) + 0x34) != 0)) {
        ExceptionList = &local_14;
        FUN_009888f0();
        local_c = 2;
        FUN_0042c180();
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
      ExceptionList = &local_14;
      FUN_009885d0();
      ExceptionList = local_14;
      return;
    }
    if (*piVar2 == 0x8a1) break;
    piVar2 = (int *)piVar2[2];
  }
  iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x558);
  ExceptionList = &local_14;
  FUN_00401000(0x47c35040);
  iVar3 = FUN_00b31c00();
  __alldiv((longlong)iVar3 * (longlong)iVar1,1000,0);
  FUN_00988a50(local_50);
  local_c = 1;
LAB_009544d4:
  FUN_0042c180();
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return;
LAB_00954473:
  iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x558);
  ExceptionList = &local_14;
  FUN_00401000(0x47c35040);
  iVar3 = FUN_00b31c00();
  __alldiv((longlong)iVar3 * (longlong)iVar1,1000,0);
  FUN_00988a50(local_50);
  local_c = 0;
  goto LAB_009544d4;
}

