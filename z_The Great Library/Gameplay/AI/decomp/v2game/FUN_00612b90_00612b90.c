// FUN_00612b90 @ 00612b90 body=[[00612b90, 00612c0c]]


void FUN_00612b90(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_EAX;
  
  iVar2 = *in_EAX;
  iVar3 = *(int *)(*param_1 + 0x30);
  iVar4 = *(int *)(iVar3 + 0x1c);
  iVar5 = *(int *)(iVar2 + 0x30);
  iVar1 = *(int *)(iVar5 + 0x1c);
  if ((iVar4 <= iVar1) && ((iVar4 < iVar1 || (*(uint *)(iVar3 + 0x18) < *(uint *)(iVar5 + 0x18)))))
  {
    *in_EAX = *param_1;
    *param_1 = iVar2;
  }
  iVar2 = *param_2;
  iVar3 = *(int *)(*in_EAX + 0x30);
  iVar4 = *(int *)(iVar2 + 0x30);
  iVar5 = *(int *)(iVar3 + 0x1c);
  iVar1 = *(int *)(iVar4 + 0x1c);
  if ((iVar5 <= iVar1) && ((iVar5 < iVar1 || (*(uint *)(iVar3 + 0x18) < *(uint *)(iVar4 + 0x18)))))
  {
    *param_2 = *in_EAX;
    *in_EAX = iVar2;
  }
  iVar2 = *in_EAX;
  iVar3 = *(int *)(*param_1 + 0x30);
  iVar4 = *(int *)(iVar2 + 0x30);
  iVar5 = *(int *)(iVar3 + 0x1c);
  iVar1 = *(int *)(iVar4 + 0x1c);
  if ((iVar5 <= iVar1) && ((iVar5 < iVar1 || (*(uint *)(iVar3 + 0x18) < *(uint *)(iVar4 + 0x18)))))
  {
    *in_EAX = *param_1;
    *param_1 = iVar2;
  }
  return;
}

