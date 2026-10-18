// FUN_008daec0 @ 008daec0 body=[[008daec0, 008daefa]]


undefined4 FUN_008daec0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                           *(int *)(*(int *)(param_1 + 0x24) + 0xc) * 4) + 0xc10);
  return CONCAT31((int3)((uint)iVar1 >> 8),
                  (iVar1 == *(int *)(param_1 + 0xc)) == (bool)*(char *)(in_ECX + 0x1c));
}

