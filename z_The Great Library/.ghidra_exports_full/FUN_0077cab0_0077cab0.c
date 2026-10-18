// FUN_0077cab0 @ 0077cab0 body=[[0077cab0, 0077cc21]]


void FUN_0077cab0(char param_1,int param_2,int param_3)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  piVar1 = *(int **)(in_EAX + 0x4c);
  if (param_1 != '\0') {
    if (*(char *)((int)piVar1 + 0x4f) == '\0') {
      (**(code **)(*piVar1 + 0x108))();
      (**(code **)(**(int **)(in_EAX + 0x50) + 0x108))();
    }
    if (*(char *)((int)*(int **)(in_EAX + 0x54) + 0x4f) == '\0') {
      (**(code **)(**(int **)(in_EAX + 0x54) + 0x108))();
      (**(code **)(**(int **)(in_EAX + 0x58) + 0x108))();
    }
    piVar1 = *(int **)(*(int *)(in_EAX + 0x4c) + 0x94);
    FUN_00401000(0x47c35040);
    iVar2 = FUN_00b31c00();
    uVar5 = __allmul(param_2,param_2 >> 0x1f,iVar2,iVar2 >> 0x1f);
    iVar3 = __alldiv(uVar5,1000,0);
    FUN_00401000(0x43fa4001);
    iVar4 = FUN_00b31c00();
    (**(code **)(*piVar1 + 0x5c))((iVar3 + iVar4) / 1000);
    piVar1 = *(int **)(*(int *)(in_EAX + 0x54) + 0x94);
    uVar5 = __allmul(param_3,param_3 >> 0x1f,iVar2,iVar2 >> 0x1f);
    iVar2 = __alldiv(uVar5,1000,0);
    (**(code **)(*piVar1 + 0x5c))((iVar4 + iVar2) / 1000);
    return;
  }
  if (*(char *)((int)piVar1 + 0x4f) != '\0') {
    (**(code **)(*piVar1 + 0x104))();
    (**(code **)(**(int **)(in_EAX + 0x50) + 0x104))();
  }
  if (*(char *)((int)*(int **)(in_EAX + 0x54) + 0x4f) != '\0') {
    (**(code **)(**(int **)(in_EAX + 0x54) + 0x104))();
    (**(code **)(**(int **)(in_EAX + 0x58) + 0x104))();
  }
  return;
}

