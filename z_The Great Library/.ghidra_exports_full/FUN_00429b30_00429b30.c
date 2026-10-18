// FUN_00429b30 @ 00429b30 body=[[00429b30, 00429bc5]]


undefined4 FUN_00429b30(void)

{
  int iVar1;
  int in_EAX;
  
  if (((*(int *)(in_EAX + 0x18) != 0) && (*(int *)(in_EAX + 0x20) != 0)) &&
     ((iVar1 = *(int *)(DAT_012587e4 + 4),
      *(char *)(*(int *)(iVar1 + *(int *)(in_EAX + 0x18) * 4) + 0x31) != '\0' ||
      (((*(int *)(in_EAX + 0x30) - *(int *)(in_EAX + 0x2c) & 0xfffffff8U) != 0 &&
       (*(char *)(*(int *)(iVar1 + *(int *)(*(int *)(in_EAX + 0x2c) + 4) * 4) + 0x31) != '\0'))))))
  {
    if (*(char *)(*(int *)(iVar1 + *(int *)(in_EAX + 0x20) * 4) + 0x31) != '\0') {
      return 1;
    }
    if (((*(int *)(in_EAX + 0x40) - *(int *)(in_EAX + 0x3c) & 0xfffffff8U) != 0) &&
       (*(char *)(*(int *)(iVar1 + *(int *)(*(int *)(in_EAX + 0x3c) + 4) * 4) + 0x31) != '\0')) {
      return 1;
    }
  }
  return 0;
}

