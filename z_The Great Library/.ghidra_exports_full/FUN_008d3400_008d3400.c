// FUN_008d3400 @ 008d3400 body=[[008d3400, 008d3432]]


undefined4 FUN_008d3400(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  return CONCAT31((int3)((uint)iVar1 >> 8),
                  *(char *)(*(int *)(iVar1 + 0x156c) + 0x18) == *(char *)(in_ECX + 0x1c));
}

