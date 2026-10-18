// FUN_00815a40 @ 00815a40 body=[[00815a40, 00815a54]]


void FUN_00815a40(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x10) != 0) &&
     (iVar1 = *(int *)(in_ECX + 0x10) + -1, *(int *)(in_ECX + 0x10) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  return;
}

