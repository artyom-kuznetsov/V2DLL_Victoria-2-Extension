// FUN_005cc160 @ 005cc160 body=[[005cc160, 005cc1f2]]


undefined4 FUN_005cc160(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0xd4) != *(int *)(in_EAX + 0xc4)) &&
     (*(int *)(in_EAX + 0xd4) != *(int *)(in_ECX + 0xc4))) {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc4) * 4);
    if ((*(int *)(in_EAX + 0xc4) != *(int *)(iVar1 + 0x20)) &&
       (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(in_EAX + 0xc4) * 4) + 0x34) != 0 ||
         (((*(char *)(in_EAX + 0xc0) == 'R' && (*(char *)(in_EAX + 0xc1) == 'E')) &&
          (*(char *)(in_EAX + 0xc2) == 'B')))) ||
        (((*(char *)(iVar1 + 0x1c) == 'R' && (*(char *)(iVar1 + 0x1d) == 'E')) &&
         (*(char *)(iVar1 + 0x1e) == 'B')))))) {
      return 1;
    }
  }
  return 0;
}

