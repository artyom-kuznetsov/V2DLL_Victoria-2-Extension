// FUN_005d9250 @ 005d9250 body=[[005d9250, 005d930c]]


void FUN_005d9250(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  piVar4 = *(int **)(in_EAX + 0x38);
  if (piVar4 != (int *)0x0) {
    FUN_00401000(0x3f000000);
    iVar2 = FUN_00b31c00();
    do {
      piVar1 = (int *)*piVar4;
      (**(code **)(*piVar1 + 0x34))(&local_c,0);
      if (local_c < iVar2) {
        local_c = iVar2;
      }
      piVar1[0x10] = local_c;
      (**(code **)(*piVar1 + 0x30))(&local_8,0);
      piVar3 = (int *)(**(code **)(*piVar1 + 0x30))(local_10,0);
      if (*piVar3 < local_8) {
        piVar3 = (int *)(**(code **)(*piVar1 + 0x30))(local_14,0);
        local_8 = *piVar3;
      }
      if (local_8 < iVar2) {
        local_8 = iVar2;
      }
      piVar1[0xf] = local_8;
      piVar4 = (int *)piVar4[2];
    } while (piVar4 != (int *)0x0);
  }
  return;
}

