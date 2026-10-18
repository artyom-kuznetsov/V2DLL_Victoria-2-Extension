// FUN_005268f0 @ 005268f0 body=[[005268f0, 00526948]]


bool FUN_005268f0(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar1 = *(int *)(in_EAX + 0x9c);
  if (DAT_0125873c == '\0') {
    iVar2 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xac) / 1000;
  }
  else {
    iVar2 = 0;
  }
  FUN_00424810(iVar2);
  return iVar1 <= *(int *)(DAT_012588e8 + 0xb0c);
}

