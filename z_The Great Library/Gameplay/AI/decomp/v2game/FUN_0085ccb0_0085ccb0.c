// FUN_0085ccb0 @ 0085ccb0 body=[[0085ccb0, 0085cd32]]


void FUN_0085ccb0(void)

{
  int in_EAX;
  int iVar1;
  
  if (((*(int *)(in_EAX + 0xc) != 0) &&
      (((*(char *)(in_EAX + 8) != 'R' || (*(char *)(in_EAX + 9) != 'E')) ||
       (*(char *)(in_EAX + 10) != 'B')))) &&
     (iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0xc) * 4),
     0 < (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU))) {
    iVar1 = FUN_0050e450();
    if (iVar1 != 0) {
      FUN_0085ac70();
      *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
      FUN_0085cd40(in_EAX);
      FUN_0085d270();
      *(undefined1 *)(in_EAX + 0x18) = 1;
    }
  }
  return;
}

