// FUN_005cae20 @ 005cae20 body=[[005cae20, 005cae7a]]


undefined4 * FUN_005cae20(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0xcc) != 0) {
    if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0xcc) * 4) + 0xce0) != 0) {
      return (undefined4 *)
             (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0xcc) * 4) + 0xce0) +
             0xc);
    }
  }
  return &DAT_00f0b864;
}

