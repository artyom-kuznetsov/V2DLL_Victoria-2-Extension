// FUN_009a1bb0 @ 009a1bb0 body=[[009a1bb0, 009a1c03]]


void FUN_009a1bb0(undefined1 *param_1)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = __stricmp("yes",(char *)(in_EAX + 0x22c));
  if (iVar1 == 0) {
    *param_1 = 1;
    return;
  }
  iVar1 = __stricmp("no",(char *)(in_EAX + 0x22c));
  if (iVar1 == 0) {
    *param_1 = 0;
    return;
  }
  FUN_009a1140();
  return;
}

