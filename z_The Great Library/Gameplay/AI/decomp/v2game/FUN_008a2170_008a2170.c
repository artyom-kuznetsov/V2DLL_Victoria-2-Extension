// FUN_008a2170 @ 008a2170 body=[[008a2170, 008a2207]]


void FUN_008a2170(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b619f0;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) + 0x188
                    );
    ExceptionList = &local_14;
    *(undefined1 *)(iVar1 + 0x80) = *(undefined1 *)(in_ECX + 0x20);
    for (piVar3 = *(int **)(iVar1 + 0x48);
        (*(int **)(iVar1 + 0x48) <= piVar3 && (piVar3 < *(int **)(iVar1 + 0x4c)));
        piVar3 = piVar3 + 1) {
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar3 * 4);
      *(undefined1 *)(iVar2 + 0x18c) = *(undefined1 *)(in_ECX + 0x20);
      if (*(char *)(in_ECX + 0x20) == '\0') {
        FUN_004bba40(iVar2);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

