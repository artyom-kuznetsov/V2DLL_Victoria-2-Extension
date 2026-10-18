// FUN_0048fe10 @ 0048fe10 body=[[0048fe10, 0048fe8e]]


undefined4 FUN_0048fe10(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_8;
  
  piVar3 = *(int **)(in_EAX + 4);
  iVar4 = 0;
  local_8 = 0;
  if (piVar3 != (int *)0x0) {
    do {
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[2];
      iVar2 = 0;
      if (0 < *(int *)(*(int *)(iVar1 + 0x188) + 0x84)) {
        if (0 < *(int *)(*(int *)(*(int *)(iVar1 + 0x118) + DAT_01258720 * 4) + 0x20)) {
          iVar2 = 100;
        }
        iVar2 = iVar2 + *(int *)(iVar1 + 0x50);
        if ((iVar4 == 0) || (local_8 < iVar2)) {
          iVar4 = iVar1;
          local_8 = iVar2;
        }
      }
    } while (piVar3 != (int *)0x0);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x164) != 0)) {
      return **(undefined4 **)(iVar4 + 0x15c);
    }
  }
  return 0;
}

