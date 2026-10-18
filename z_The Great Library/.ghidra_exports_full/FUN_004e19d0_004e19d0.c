// FUN_004e19d0 @ 004e19d0 body=[[004e19d0, 004e1a41]]


undefined4 FUN_004e19d0(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  
  cVar2 = FUN_004e1970(param_1,param_2);
  if (cVar2 != '\0') {
    return 1;
  }
  if (*(int *)(in_EAX + 0x48) == 0) {
    iVar1 = *(int *)(*(int *)(in_EAX + 0x30) + 0xfc);
    if ((iVar1 == 0) &&
       (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2 * 4) + 0xe64) ==
        *(int *)(in_EAX + 0x4c))) {
      return 1;
    }
    if ((iVar1 == 3) &&
       (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2 * 4) + 0x132c) +
                *(int *)(*(int *)(in_EAX + 0x50) + 8) * 4) != 0)) {
      return 1;
    }
  }
  return 0;
}

