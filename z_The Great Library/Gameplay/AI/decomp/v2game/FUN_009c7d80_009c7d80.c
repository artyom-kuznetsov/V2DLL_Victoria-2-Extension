// FUN_009c7d80 @ 009c7d80 body=[[009c7d80, 009c7dd4]]


undefined4 FUN_009c7d80(char *param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  
  iVar1 = *in_EAX;
  do {
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    iVar1 = *in_EAX;
    iVar2 = _tolower((int)*param_1);
    if (iVar2 == *(char *)(iVar1 + 4)) {
      if (param_1[1] == '\0') {
        return *(undefined4 *)*in_EAX;
      }
      param_1 = param_1 + 1;
      in_EAX = (int *)(iVar1 + 0x10);
    }
    else {
      in_EAX = (int *)(iVar1 + 0xc);
      if (iVar2 - *(char *)(iVar1 + 4) < 1) {
        in_EAX = (int *)(iVar1 + 8);
      }
    }
    iVar1 = *in_EAX;
  } while( true );
}

