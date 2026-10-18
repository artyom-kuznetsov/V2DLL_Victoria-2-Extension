// FUN_00acf360 @ 00acf360 body=[[00acf360, 00acf4cc]]


void FUN_00acf360(char param_1)

{
  char *pcVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  char cStack_4;
  
  iVar5 = *(int *)(in_ECX + 0x140);
  while (iVar5 != 0) {
    iVar5 = iVar5 + -1;
    iVar3 = in_ECX;
    if (*(int *)(in_ECX + 0x1b0) != 0) {
      iVar3 = FUN_00ace350();
    }
    (**(code **)(**(int **)(*(int *)(DAT_00f209e0 + 0x30) + 0x34) + 0x28))(iVar3,0);
    iVar2 = *(int *)(*(int *)(in_ECX + 0x13c) + iVar5 * 4);
    *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x1b4) = 0;
    pcVar1 = (char *)(*(int *)(iVar2 + 0x10) + 0x1ec);
    *pcVar1 = *pcVar1 + -1;
    *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x1b0) = 0;
    FUN_00ad3e00(*(undefined4 *)(iVar2 + 0x10));
    FID_conflict__memcpy((void *)(*(int *)(iVar2 + 0x10) + 0xb0),&stack0xffffffb8,0x40);
    if (cStack_4 != '\0') {
      FUN_00adfa70();
      (*(code *)PTR__free_00f01b10)(iVar2);
    }
    if ((1 < *(uint *)(in_ECX + 0x140)) &&
       (iVar4 = (*(uint *)(in_ECX + 0x140) - iVar5) + -1, iVar4 != 0)) {
      _Dst = (void *)(*(int *)(in_ECX + 0x13c) + iVar5 * 4);
      FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar4 * 4);
    }
    *(int *)(in_ECX + 0x140) = *(int *)(in_ECX + 0x140) + -1;
    (**(code **)(**(int **)(*(int *)(DAT_00f209e0 + 0x30) + 0x34) + 0x24))(iVar3,0);
    if (param_1 == '\0') {
      (**(code **)(**(int **)(*(int *)(DAT_00f209e0 + 0x30) + 0x34) + 0x24))
                (*(undefined4 *)(iVar2 + 0x10),0);
    }
    iVar5 = *(int *)(in_ECX + 0x140);
  }
  return;
}

