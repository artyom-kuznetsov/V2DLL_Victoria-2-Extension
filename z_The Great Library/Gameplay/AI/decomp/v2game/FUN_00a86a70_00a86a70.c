// FUN_00a86a70 @ 00a86a70 body=[[00a86a70, 00a86a8c] [00a86a90, 00a86af3]]


void FUN_00a86a70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int in_ECX;
  
  FUN_00a86b00();
  piVar5 = (int *)(**(code **)(*(int *)(in_ECX + 0x74) + 0x2c))();
  piVar5 = (int *)*piVar5;
  if (piVar5 != (int *)0x0) {
    while( true ) {
      iVar1 = *piVar5;
      iVar2 = *(int *)(iVar1 + 0x20);
      iVar3 = *(int *)(*(int *)(in_ECX + 0xc0) + 0x98);
      if (((iVar2 != 0) && (iVar3 != 0)) &&
         (cVar4 = (**(code **)(*(int *)(iVar2 + 0x18) + 0x94))(iVar3), cVar4 != '\0')) break;
      piVar5 = (int *)piVar5[2];
      if (piVar5 == (int *)0x0) {
        return;
      }
    }
    if (*piVar5 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(*piVar5 + 0x1c);
    }
    (**(code **)(*piVar5 + 0x48))();
    (**(code **)(*(int *)(iVar1 + 0x1c) + 0x44))(*(undefined4 *)(in_ECX + 0xb8));
  }
  return;
}

