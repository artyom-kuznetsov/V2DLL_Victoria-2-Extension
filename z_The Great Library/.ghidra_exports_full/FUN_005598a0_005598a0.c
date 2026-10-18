// FUN_005598a0 @ 005598a0 body=[[005598a0, 0055999c]]


void FUN_005598a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_EAX;
  
  iVar6 = DAT_012587e4;
  iVar2 = *in_EAX;
  iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*param_1 + 0xc) * 4) + 0xe88);
  iVar4 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 0xc) * 4) + 0xe88);
  iVar5 = *(int *)(iVar3 + 0x14);
  iVar1 = *(int *)(iVar4 + 0x14);
  if ((iVar5 <= iVar1) && ((iVar5 < iVar1 || (*(uint *)(iVar3 + 0x10) < *(uint *)(iVar4 + 0x10)))))
  {
    *in_EAX = *param_1;
    *param_1 = iVar2;
  }
  iVar2 = *param_2;
  iVar1 = *(int *)(iVar6 + 4);
  iVar3 = *(int *)(*(int *)(iVar1 + *(int *)(*in_EAX + 0xc) * 4) + 0xe88);
  iVar4 = *(int *)(*(int *)(iVar1 + *(int *)(iVar2 + 0xc) * 4) + 0xe88);
  iVar5 = *(int *)(iVar3 + 0x14);
  iVar1 = *(int *)(iVar4 + 0x14);
  if ((iVar5 <= iVar1) && ((iVar5 < iVar1 || (*(uint *)(iVar3 + 0x10) < *(uint *)(iVar4 + 0x10)))))
  {
    *param_2 = *in_EAX;
    *in_EAX = iVar2;
  }
  iVar2 = *in_EAX;
  iVar1 = *(int *)(iVar6 + 4);
  iVar3 = *(int *)(*(int *)(iVar1 + *(int *)(*param_1 + 0xc) * 4) + 0xe88);
  iVar4 = *(int *)(*(int *)(iVar1 + *(int *)(iVar2 + 0xc) * 4) + 0xe88);
  iVar5 = *(int *)(iVar3 + 0x14);
  iVar1 = *(int *)(iVar4 + 0x14);
  if ((iVar5 <= iVar1) && ((iVar5 < iVar1 || (*(uint *)(iVar3 + 0x10) < *(uint *)(iVar4 + 0x10)))))
  {
    *in_EAX = *param_1;
    *param_1 = iVar2;
  }
  return;
}

