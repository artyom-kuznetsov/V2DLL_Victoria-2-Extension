// FUN_005cbcc0 @ 005cbcc0 body=[[005cbcc0, 005cbd6e]]


void FUN_005cbcc0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5b0d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar2 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x20))();
  if (cVar2 != '\0') {
    iVar1 = *(int *)(in_ECX + 0xd8);
    if (*(int *)(iVar1 + 0x88) != 0) {
      *(undefined4 *)(iVar1 + 0x88) = 0;
      uVar3 = FUN_005b6140();
      FUN_005cbcc0(uVar3);
    }
    *(undefined4 *)(iVar1 + 0x88) = 0;
  }
  cVar2 = (**(code **)(*param_1 + 0x20))();
  if (cVar2 != '\0') {
    if (param_1[0x22] != 0) {
      param_1[0x22] = 0;
      uVar3 = FUN_005b6140();
      FUN_005cbcc0(uVar3);
    }
    param_1[0x22] = in_ECX;
  }
  *(int **)(in_ECX + 0xd8) = param_1;
  ExceptionList = local_10;
  return;
}

