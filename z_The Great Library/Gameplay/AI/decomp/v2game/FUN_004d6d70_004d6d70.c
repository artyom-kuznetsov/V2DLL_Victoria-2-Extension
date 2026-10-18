// FUN_004d6d70 @ 004d6d70 body=[[004d6d70, 004d6e2d]]


void FUN_004d6d70(int param_1,undefined4 *param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  while (param_1 < in_EAX) {
    iVar1 = (in_EAX + -1) / 2;
    iVar2 = -1;
    if (*(int *)(in_ECX + 4 + iVar1 * 8) != 0) {
      iVar2 = *(int *)(*(int *)(param_3 + 0x48) +
                      *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                *(int *)(in_ECX + 4 + iVar1 * 8) * 4) + 0xe64) + 8)
                      * 4);
    }
    iVar3 = -1;
    if (param_2[1] != 0) {
      iVar3 = *(int *)(*(int *)(param_3 + 0x48) +
                      *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4) +
                                       0xe64) + 8) * 4);
    }
    if (iVar2 <= iVar3) break;
    *(undefined4 *)(in_ECX + in_EAX * 8) = *(undefined4 *)(in_ECX + iVar1 * 8);
    *(undefined4 *)(in_ECX + 4 + in_EAX * 8) = *(undefined4 *)(in_ECX + 4 + iVar1 * 8);
    in_EAX = iVar1;
  }
  *(undefined4 *)(in_ECX + in_EAX * 8) = *param_2;
  *(undefined4 *)(in_ECX + 4 + in_EAX * 8) = param_2[1];
  return;
}

