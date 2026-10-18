// FUN_0098a150 @ 0098a150 body=[[0098a150, 0098a1b9]]


int FUN_0098a150(void *param_1,size_t param_2)

{
  int iVar1;
  char *pcVar2;
  char *in_EAX;
  void *pvVar3;
  char *pcVar4;
  
  iVar1 = *(int *)(in_EAX + 0x10);
  if (iVar1 != 0) {
    pcVar4 = in_EAX;
    if (0xf < *(uint *)(in_EAX + 0x14)) {
      pcVar4 = *(char **)in_EAX;
    }
    pcVar2 = in_EAX;
    if (0xf < *(uint *)(in_EAX + 0x14)) {
      pcVar2 = *(char **)in_EAX;
    }
    for (; pcVar2 < pcVar4 + iVar1; pcVar2 = pcVar2 + 1) {
      pvVar3 = _memchr(param_1,(int)*pcVar2,param_2);
      if (pvVar3 == (void *)0x0) {
        if (0xf < *(uint *)(in_EAX + 0x14)) {
          in_EAX = *(char **)in_EAX;
        }
        return (int)pcVar2 - (int)in_EAX;
      }
    }
  }
  return -1;
}

