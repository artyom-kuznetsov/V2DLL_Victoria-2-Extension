// FUN_004148c0 @ 004148c0 body=[[004148c0, 004148ff]]


undefined4 FUN_004148c0(void)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  switch(iVar1) {
  case 1:
    return *(undefined4 *)(in_EAX[0x11] + in_EAX[iVar1 + 1] * 4);
  case 2:
    return *(undefined4 *)(in_EAX[0x15] + in_EAX[iVar1 + 1] * 4);
  case 3:
    return *(undefined4 *)(in_EAX[0x19] + in_EAX[iVar1 + 1] * 4);
  case 4:
    return *(undefined4 *)(in_EAX[0xd] + in_EAX[iVar1 + 1] * 4);
  default:
    return 0;
  }
}

