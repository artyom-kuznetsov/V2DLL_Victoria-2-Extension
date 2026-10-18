// FUN_0068bae0 @ 0068bae0 body=[[0068bae0, 0068bb2a]]


undefined4 FUN_0068bae0(void)

{
  int *piVar1;
  int in_EAX;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (in_EAX == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)(in_EAX + 0x38);
  }
  piVar1 = (int *)*puVar2;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((*(int *)(*piVar1 + 0x30) != 0) && (iVar3 = FUN_00967f50(), iVar3 != 0)) break;
    piVar1 = (int *)piVar1[2];
  }
  uVar4 = FUN_00967f50();
  return uVar4;
}

