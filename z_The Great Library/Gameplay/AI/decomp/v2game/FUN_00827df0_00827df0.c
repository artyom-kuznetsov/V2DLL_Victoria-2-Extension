// FUN_00827df0 @ 00827df0 body=[[00827df0, 00827f23]]


void FUN_00827df0(int param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3fed8;
  local_14 = ExceptionList;
  if (((*(int *)(param_1 + 0x144) == in_ECX) && (*(int *)(param_1 + 0x1b4) == 0)) &&
     (*(char *)(*(int *)(*(int *)(param_1 + 0xdc) + 0x5c) + 0x2a) != '\0')) {
    piVar4 = *(int **)(in_ECX + 0xac);
    ExceptionList = &local_14;
    if (*piVar4 == param_1) {
      local_20 = 0;
      local_c = 0;
      ExceptionList = &local_14;
      if (piVar4 != (int *)0x0) {
        piVar3 = (int *)0x0;
        ExceptionList = &local_14;
        do {
          iVar2 = *piVar4;
          piVar4 = (int *)piVar4[2];
          piVar1 = piVar3;
          if (*(int *)(iVar2 + 0xdc) == *(int *)(param_1 + 0xdc)) {
            piVar1 = (int *)FUN_00aae9af(0x10);
            if (piVar1 == (int *)0x0) {
              piVar1 = (int *)0x0;
            }
            else {
              *piVar1 = iVar2;
              piVar1[1] = (int)piVar3;
              piVar1[2] = 0;
              *(undefined1 *)(piVar1 + 3) = 0;
            }
            iVar2 = local_20 + 1;
            bVar5 = local_20 != 0;
            local_20 = iVar2;
            if (bVar5) {
              piVar3[2] = (int)piVar1;
            }
          }
          piVar3 = piVar1;
        } while (piVar4 != (int *)0x0);
        if (1 < local_20) {
          FUN_0082e780();
        }
      }
      local_c = 0xffffffff;
      FUN_009a63f0();
    }
    FUN_0082d8a0(in_ECX,*(undefined4 *)(param_1 + 0xdc),in_ECX + 0xac,0);
  }
  ExceptionList = local_14;
  return;
}

