// FUN_006a07f0 @ 006a07f0 body=[[006a07f0, 006a08a9]]


void FUN_006a07f0(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x24) != '\0') {
    if (((*(char *)(*(int *)(in_ECX + 0x28) + 0x67) != '\0') &&
        ((**(code **)(*(int *)(*(int *)(in_ECX + 0x28) + 0x18) + 0x38))(),
        *(char *)(in_ECX + 0x38) == '\0')) &&
       (cVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x158))(), cVar2 != '\0')) {
      (**(code **)(**(int **)(in_ECX + 0x20) + 0x15c))();
    }
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xb0))
              (**(undefined4 **)(*(int *)(param_1 + 0x1c) + 0x48));
    iVar1 = *(int *)(DAT_012588e8 + 0xb24);
    if (((int)(*(int *)(iVar1 + 0xd84) - *(int *)(iVar1 + 0xd80) & 0xfffffffcU) < 1) ||
       (cVar2 = (**(code **)(*(int *)**(undefined4 **)(iVar1 + 0xd80) + 0x1c))(), cVar2 == '\0')) {
      FUN_0066bd60(0,0);
    }
    FUN_00704d10(param_1);
    return;
  }
  return;
}

