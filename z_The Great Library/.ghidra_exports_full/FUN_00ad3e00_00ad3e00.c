// FUN_00ad3e00 @ 00ad3e00 body=[[00ad3e00, 00ad3e7b]]


void FUN_00ad3e00(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x1b0) == 0) {
    uVar1 = *(uint *)(in_ECX + 0x24);
    uVar3 = 0;
    if (uVar1 != 0) {
      piVar4 = *(int **)(in_ECX + 0x20);
      do {
        if (*piVar4 == param_1) {
          if (uVar3 != 0xffffffff) {
            return;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar3 < uVar1);
    }
    *(uint *)(in_ECX + 0x24) = uVar1 + 1;
    if (*(uint *)(in_ECX + 0x28) < uVar1 + 1) {
      FUN_00aeb6c0(uVar1 + 2);
    }
    piVar4 = (int *)(*(int *)(in_ECX + 0x20) + -4 + *(int *)(in_ECX + 0x24) * 4);
    if (piVar4 != (int *)0x0) {
      *piVar4 = iVar2;
      return;
    }
  }
  else {
    FUN_00b09030(&param_1);
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x28))(iVar2,0);
  }
  return;
}

