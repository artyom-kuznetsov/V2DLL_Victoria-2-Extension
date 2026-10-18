// FUN_00749750 @ 00749750 body=[[00749750, 0074986d]]


undefined4 FUN_00749750(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int in_EDX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bac7b8;
  local_10 = ExceptionList;
  iVar3 = *(int *)(*(int *)(in_ECX + 0x58) + 4);
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x67) != '\0')) {
    ExceptionList = &local_10;
    FUN_00455cc0();
    ExceptionList = local_10;
    return param_1;
  }
  local_8 = 0;
  local_14 = 0;
  iVar3 = *(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44) >> 4;
  if (0 < iVar3) {
    piVar5 = *(int **)(in_ECX + 0x44);
    do {
      iVar2 = 0;
      iVar1 = piVar5[1] - *piVar5 >> 2;
      if (0 < iVar1) {
        piVar4 = (int *)*piVar5;
        do {
          if (in_EDX == *(int *)(*piVar4 + 8)) {
            ExceptionList = &local_10;
            FUN_00749a30(param_1);
            ExceptionList = local_10;
            return param_1;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar2 < iVar1);
      }
      local_14 = local_14 + 1;
      piVar5 = piVar5 + 4;
    } while (local_14 < iVar3);
  }
  ExceptionList = &local_10;
  FUN_0040c830(param_1);
  FUN_00459820();
  ExceptionList = local_10;
  return param_1;
}

