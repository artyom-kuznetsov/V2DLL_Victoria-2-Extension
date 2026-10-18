// FUN_00aad52d @ 00aad52d body=[[00aad52d, 00aad566] [00aad568, 00aad56a]]


void FUN_00aad52d(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    pcVar1 = &DAT_00f1f8c4 + *(int *)(param_1 + 8);
    *pcVar1 = *pcVar1 + -1;
    if ('\0' < *pcVar1) {
      return;
    }
  }
  FUN_00aad494();
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 == 0) {
    return;
  }
  FUN_00445fc0();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar2);
}

