// FUN_0084b5a0 @ 0084b5a0 body=[[0084b5a0, 0084b68a]]


void FUN_0084b5a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x3c) != '\0') {
    if (*(int *)(param_2 + 300) == *(int *)(in_ECX + 0x38)) {
      iVar1 = *(int *)(in_ECX + 0x200);
      piVar3 = (int *)FUN_00aae9af(0x10);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = param_2;
        piVar3[1] = iVar1;
        piVar3[2] = 0;
        *(undefined1 *)(piVar3 + 3) = 0;
      }
      iVar2 = *(int *)(in_ECX + 0x204);
      *(int **)(in_ECX + 0x200) = piVar3;
      *(int *)(in_ECX + 0x204) = iVar2 + 1;
      if (iVar2 == 0) {
        *(int **)(in_ECX + 0x1fc) = piVar3;
        *(int *)(param_2 + 0x324) = in_ECX;
        FUN_0084af00();
        return;
      }
      *(int **)(iVar1 + 8) = piVar3;
      *(int *)(param_2 + 0x324) = in_ECX;
      FUN_0084af00();
      return;
    }
    if (param_1 == *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4)) {
      for (piVar3 = *(int **)(in_ECX + 0x1fc); (piVar3 != (int *)0x0 && (*piVar3 != param_2));
          piVar3 = (int *)piVar3[2]) {
      }
      FUN_005f2ae0(piVar3);
    }
  }
  return;
}

