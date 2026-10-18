// FUN_009bb180 @ 009bb180 body=[[009bb180, 009bb21e] [009bb222, 009bb256]]


/* WARNING: Removing unreachable block (ram,0x009bb1ff) */
/* WARNING: Removing unreachable block (ram,0x009bb219) */

void FUN_009bb180(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  int unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45e48;
  local_10 = ExceptionList;
  iVar1 = (*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x18;
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *(int **)(in_ECX + 0xc);
    do {
      if ((*piVar3 == param_1) && (piVar3[1] == unaff_ESI)) {
        ExceptionList = &local_10;
        FUN_004e9b90();
        ExceptionList = local_10;
        return;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 6;
    } while (iVar2 < iVar1);
  }
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_007b94a0();
  FUN_009bbee0();
  ExceptionList = local_10;
  return;
}

