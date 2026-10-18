// FUN_0050d700 @ 0050d700 body=[[0050d700, 0050d741]]


void FUN_0050d700(void)

{
  int iVar1;
  undefined4 *in_EAX;
  int in_EDX;
  
  iVar1 = *(int *)(in_EDX + 0x156c);
  *in_EAX = 0;
  if ((((iVar1 != 0) &&
       (iVar1 = *(int *)(*(int *)(in_EDX + 0xbe8) + *(int *)(iVar1 + 0x14) * 4), iVar1 != 0)) &&
      (iVar1 = *(int *)(iVar1 + 0x34), iVar1 != 0)) && (*(char *)(iVar1 + 0xfc) != '\0')) {
    *in_EAX = *(undefined4 *)(*(int *)(DAT_012586dc + 0x30) + 0x4a0);
  }
  return;
}

