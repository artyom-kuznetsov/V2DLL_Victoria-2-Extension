// FUN_008df220 @ 008df220 body=[[008df220, 008df315]]


undefined4 FUN_008df220(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  int *piVar4;
  int *piVar5;
  int iStack_14;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 0x188
                    );
  cVar3 = (**(code **)(*piVar1 + 0x24))();
  if (cVar3 == '\0') {
    return 1;
  }
  piVar4 = (int *)piVar1[0x12];
  do {
    do {
      if ((piVar4 < (int *)piVar1[0x12]) || ((int *)piVar1[0x13] <= piVar4)) {
        return 0;
      }
      piVar5 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar4 * 4) + 0xec);
      piVar4 = piVar4 + 1;
    } while (piVar5 == (int *)0x0);
    do {
      iVar2 = *piVar5;
      piVar5 = (int *)piVar5[2];
      if (*(char *)(in_ECX + 0x18) == '\0') {
        if (*(char *)(in_ECX + 0x19) == '\0') {
          iStack_14 = *(int *)(in_ECX + 0x20);
        }
        else {
          iStack_14 = *(int *)(*(int *)(param_1 + 0x24) + 0x30);
        }
      }
      else {
        FUN_008a8dc0();
      }
      if (*(int *)(iVar2 + 0xc4) == iStack_14) {
        return 1;
      }
    } while (piVar5 != (int *)0x0);
  } while( true );
}

