// FUN_005dcb70 @ 005dcb70 body=[[005dcb70, 005dcb7c] [005dcb80, 005dcb9d] [005dcba9, 005dcbc2]]


void FUN_005dcb70(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_EAX;
  
  piVar1 = (int *)*in_EAX;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    if (*(int *)(iVar2 + 0x90) != 0) break;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined4 *)(iVar2 + 0x94) = 0;
    *(undefined4 *)(iVar2 + 0x98) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(iVar2 + 0x90));
}

