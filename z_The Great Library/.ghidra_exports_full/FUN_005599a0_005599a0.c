// FUN_005599a0 @ 005599a0 body=[[005599a0, 00559a44]]


void FUN_005599a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1;
  while( true ) {
    iVar5 = iVar6 * 2 + 2;
    if (param_2 <= iVar5) break;
    iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                             *(int *)(*(int *)(in_EAX + -4 + iVar5 * 4) + 0xc) * 4) + 0xe88);
    iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                             *(int *)(*(int *)(in_EAX + iVar5 * 4) + 0xc) * 4) + 0xe88);
    iVar4 = *(int *)(iVar2 + 0x14);
    iVar1 = *(int *)(iVar3 + 0x14);
    if ((iVar4 <= iVar1) && ((iVar4 < iVar1 || (*(uint *)(iVar2 + 0x10) < *(uint *)(iVar3 + 0x10))))
       ) {
      iVar5 = iVar6 * 2 + 1;
    }
    *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + iVar5 * 4);
    iVar6 = iVar5;
  }
  if (iVar5 == param_2) {
    *(undefined4 *)(in_EAX + iVar6 * 4) = *(undefined4 *)(in_EAX + -4 + param_2 * 4);
    iVar6 = param_2 + -1;
  }
  FUN_0055a370(iVar6,param_1,param_3,param_4);
  return;
}

