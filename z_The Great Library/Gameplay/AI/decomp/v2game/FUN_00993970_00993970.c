// FUN_00993970 @ 00993970 body=[[00993970, 0099399c]]


undefined4 FUN_00993970(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x30) != 0) {
    uVar1 = PHYSFS_fileLength(*(int *)(in_ECX + 0x30));
    return uVar1;
  }
  return 0;
}

