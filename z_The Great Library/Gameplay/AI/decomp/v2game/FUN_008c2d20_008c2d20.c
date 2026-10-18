// FUN_008c2d20 @ 008c2d20 body=[[008c2d20, 008c2d88]]


undefined4 FUN_008c2d20(int param_1)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar1 == '\0') {
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  }
  else {
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) +
                    *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 300) * 4);
  }
  return CONCAT31((int3)((uint)*(int *)(iVar2 + 0x84c) >> 8),
                  *(int *)(*(int *)(iVar2 + 0x84c) + 0x54) == *(int *)(in_ECX + 0x1c));
}

