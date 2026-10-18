// FUN_008db440 @ 008db440 body=[[008db440, 008db47a]]


undefined4 FUN_008db440(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                           *(int *)(*(int *)(param_1 + 0x24) + 0xc) * 4) + 0xc14);
  return CONCAT31((int3)((uint)iVar1 >> 8),
                  (iVar1 == *(int *)(param_1 + 0x10)) == (bool)*(char *)(in_ECX + 0x1c));
}

