// FUN_008c3a80 @ 008c3a80 body=[[008c3a80, 008c3afb]]


ulonglong FUN_008c3a80(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) == 0) {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    return (ulonglong)
           CONCAT31((int3)((uint)iVar1 >> 8),
                    0 < (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU) ==
                    (bool)*(char *)(in_ECX + 0x1c));
  }
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x24) * 4);
  return CONCAT44(DAT_012587e4,
                  (uint)(0 < (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU))
                 );
}

