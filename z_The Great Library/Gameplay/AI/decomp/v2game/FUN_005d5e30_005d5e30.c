// FUN_005d5e30 @ 005d5e30 body=[[005d5e30, 005d5ee5]]


bool FUN_005d5e30(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int *in_ECX;
  int local_8;
  
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x2a) == '\0') {
    piVar1 = *(int **)(param_1 + 0xec);
    local_8 = 0;
    param_1 = in_ECX[0x10];
    while (piVar1 != (int *)0x0) {
      piVar2 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      if (piVar2 != in_ECX) {
        cVar3 = (**(code **)(*piVar2 + 0x38))();
        if ((cVar3 != '\0') && (piVar2[0x31] == in_ECX[0x31])) {
          param_1 = param_1 + piVar2[0x10];
        }
        cVar3 = (**(code **)(*piVar2 + 0x3c))();
        if ((cVar3 != '\0') && (piVar2[0x31] == in_ECX[0x31])) {
          iVar5 = FUN_005cd580();
          local_8 = local_8 + iVar5;
        }
      }
    }
    return param_1 <= local_8;
  }
  if ((char)in_ECX[0x59] == '\0') {
    uVar4 = FUN_005cd2f0(param_1);
    return (bool)uVar4;
  }
  return true;
}

