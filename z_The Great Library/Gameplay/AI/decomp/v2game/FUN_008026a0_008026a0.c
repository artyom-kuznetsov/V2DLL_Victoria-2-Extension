// FUN_008026a0 @ 008026a0 body=[[008026a0, 008026f0]]


void FUN_008026a0(void)

{
  void *pvVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  FUN_007f2380(in_ECX);
  pvVar1 = _malloc(0x1000000);
  iVar2 = *(int *)(in_ECX + 400) * *(int *)(in_ECX + 0x18c);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      FUN_00803cc0(in_ECX,iVar3,pvVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(pvVar1);
}

