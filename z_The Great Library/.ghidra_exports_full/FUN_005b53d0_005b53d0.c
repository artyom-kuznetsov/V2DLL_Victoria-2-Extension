// FUN_005b53d0 @ 005b53d0 body=[[005b53d0, 005b54b8]]


/* WARNING: Removing unreachable block (ram,0x005b5433) */
/* WARNING: Removing unreachable block (ram,0x005b5442) */
/* WARNING: Removing unreachable block (ram,0x005b544d) */

void FUN_005b53d0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb66b8;
  local_14 = ExceptionList;
  if (param_2 != 0) {
    local_c = 0;
    ExceptionList = &local_14;
    FUN_005b54c0();
    piVar1 = *(int **)(param_2 + 0x7b4);
    *(undefined1 *)(param_2 + 0x7c0) = 1;
    while (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[2];
      if ((*(int *)(iVar2 + 0x74) == 0) && (*(char *)(iVar2 + 0x104) == '\0')) {
        FUN_005b57a0(param_1);
      }
    }
    FUN_005499c0();
    local_c = 0xffffffff;
    FUN_005b5da0();
  }
  ExceptionList = local_14;
  return;
}

