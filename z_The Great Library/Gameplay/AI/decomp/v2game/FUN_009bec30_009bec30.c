// FUN_009bec30 @ 009bec30 body=[[009bec30, 009becbb]]


undefined4 FUN_009bec30(uint param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  uint local_8;
  
  param_1 = FUN_00462500(param_1);
  if (param_1 != *(uint *)(unaff_EDI + 0x38)) {
    cVar2 = FUN_0098ab20();
    if (cVar2 == '\0') {
      puVar3 = &param_1;
      goto LAB_009bec68;
    }
  }
  local_8 = *(uint *)(unaff_EDI + 0x38);
  puVar3 = &local_8;
LAB_009bec68:
  if (*puVar3 != *(uint *)(unaff_EDI + 0x38)) {
    iVar5 = *(int *)(*puVar3 + 0x28) + -1;
    piVar1 = *(int **)(*(int *)(unaff_EDI + 4) + iVar5 * 4);
    iVar4 = FUN_009be910(*(int *)(unaff_EDI + 0x24) + iVar5 * 0x1c,param_2);
    if (iVar4 != 0) {
      *(int *)(*(int *)(unaff_EDI + 4) + iVar5 * 4) = iVar4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      return 1;
    }
  }
  return 0;
}

