// FUN_00451ab0 @ 00451ab0 body=[[00451ab0, 00451b51]]


void FUN_00451ab0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int in_ECX;
  
  cVar2 = (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xb24) + 0x1c) + 0x28))();
  if (cVar2 != '\0') {
    if (*(char *)(in_EAX + 0x3b0 + in_ECX) == '\0') {
      FUN_004500c0(in_ECX,param_1);
    }
    else {
      FUN_004501d0();
    }
    FUN_0044fe40(in_ECX,in_EAX,*(char *)(in_EAX + 0x3b0 + in_ECX) == '\0',0);
    return;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 100);
  FUN_0093d690();
  *(undefined1 *)(iVar1 + 0x14) = 1;
  FUN_00451f10(param_1);
  return;
}

