// FUN_008facb0 @ 008facb0 body=[[008facb0, 008fad48]]


bool FUN_008facb0(int param_1)

{
  char cVar1;
  int in_ECX;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(param_1 + 0x18) != 0) {
    cVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                            *(int *)(param_1 + 0x18) * 4) + 0x188) + 0x24))();
    if (cVar1 != '\0') {
      return 0 < *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                           *(int *)(param_1 + 0x18) * 4) + 0x188) + 0x84) ==
             (bool)*(char *)(in_ECX + 0x1c);
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    bVar2 = 0 < *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                          *(int *)(param_1 + 0x10) * 4) + 0x188) + 0x84);
  }
  return bVar2 == (bool)*(char *)(in_ECX + 0x1c);
}

