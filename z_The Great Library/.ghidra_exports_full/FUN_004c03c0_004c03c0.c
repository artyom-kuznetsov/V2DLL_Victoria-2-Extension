// FUN_004c03c0 @ 004c03c0 body=[[004c03c0, 004c041c] [004c0420, 004c0443]]


void FUN_004c03c0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int in_EAX;
  undefined4 uVar7;
  
  iVar2 = *(int *)(in_EAX + 4);
  uVar7 = FUN_004c04b0(*(undefined4 *)(*(int *)(param_1 + 4) + 4),iVar2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  piVar3 = *(int **)(in_EAX + 4);
  *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(param_1 + 8);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x15) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0x15);
    piVar6 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar6 + 0x15);
      piVar4 = piVar6;
      piVar6 = (int *)*piVar6;
    }
    *piVar3 = (int)piVar4;
    iVar2 = *(int *)(*(int *)(in_EAX + 4) + 4);
    iVar5 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar5 + 0x15);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x15);
      iVar2 = iVar5;
      iVar5 = *(int *)(iVar5 + 8);
    }
    *(int *)(*(int *)(in_EAX + 4) + 8) = iVar2;
    return;
  }
  *piVar3 = (int)piVar3;
  *(int *)(*(int *)(in_EAX + 4) + 8) = *(int *)(in_EAX + 4);
  return;
}

