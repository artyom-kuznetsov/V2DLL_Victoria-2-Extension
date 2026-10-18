// FUN_0098a1c0 @ 0098a1c0 body=[[0098a1c0, 0098a241]]


/* WARNING: Removing unreachable block (ram,0x0098a1d7) */

int FUN_0098a1c0(void *param_1,size_t param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (in_EAX[4] != 0) {
    puVar1 = in_EAX;
    if (0xf < (uint)in_EAX[5]) {
      puVar1 = (undefined4 *)*in_EAX;
    }
    pcVar4 = (char *)((int)puVar1 + in_EAX[4] + -1);
    pvVar2 = _memchr(param_1,(int)*pcVar4,param_2);
    while( true ) {
      if (pvVar2 == (void *)0x0) {
        if (0xf < (uint)in_EAX[5]) {
          in_EAX = (undefined4 *)*in_EAX;
        }
        return (int)pcVar4 - (int)in_EAX;
      }
      pcVar3 = (char *)FUN_00408fc0();
      if (pcVar4 == pcVar3) break;
      pcVar3 = pcVar4 + -1;
      pcVar4 = pcVar4 + -1;
      pvVar2 = _memchr(param_1,(int)*pcVar3,param_2);
    }
  }
  return -1;
}

