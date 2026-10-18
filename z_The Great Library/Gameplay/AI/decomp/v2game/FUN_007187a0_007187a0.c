// FUN_007187a0 @ 007187a0 body=[[007187a0, 0071881d]]


void FUN_007187a0(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b498f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007186e0();
  iVar1 = *(int *)(in_ECX + 0x24);
  if (0xc < (int)(*(int *)(iVar1 + 0xd84) - *(int *)(iVar1 + 0xd80) & 0xfffffffcU)) {
    cVar3 = (**(code **)(**(int **)(*(int *)(iVar1 + 0xd80) + 0xc) + 0x1c))();
    if (cVar3 != '\0') {
      piVar2 = *(int **)(*(int *)(*(int *)(in_ECX + 0x24) + 0xd80) + 0xc);
      piVar2[0xb5] = 3;
      FUN_006df530();
      (**(code **)(*piVar2 + 0x2c))();
    }
  }
  ExceptionList = local_10;
  return;
}

