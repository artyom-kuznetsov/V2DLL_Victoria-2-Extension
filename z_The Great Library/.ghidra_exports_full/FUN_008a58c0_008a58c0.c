// FUN_008a58c0 @ 008a58c0 body=[[008a58c0, 008a5903]]


undefined4 FUN_008a58c0(void)

{
  int iVar1;
  int in_EAX;
  
  if ((*(int *)(in_EAX + 0x18) != 0) &&
     (iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0x18) * 4),
     0 < (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU))) {
    return 1;
  }
  return 0;
}

