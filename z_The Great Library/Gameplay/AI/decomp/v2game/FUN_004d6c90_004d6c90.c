// FUN_004d6c90 @ 004d6c90 body=[[004d6c90, 004d6cac] [004d6cb0, 004d6d69]]


void FUN_004d6c90(int param_1,undefined4 param_2,int param_3)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    iVar1 = in_EAX * 2 + 2;
    if (param_1 <= iVar1) break;
    iVar2 = -1;
    iVar3 = -1;
    if (*(int *)(in_ECX + 4 + iVar1 * 8) != 0) {
      iVar2 = *(int *)(*(int *)(param_3 + 0x48) +
                      *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                *(int *)(in_ECX + 4 + iVar1 * 8) * 4) + 0xe64) + 8)
                      * 4);
    }
    if (*(int *)(in_ECX + -4 + iVar1 * 8) != 0) {
      iVar3 = *(int *)(*(int *)(param_3 + 0x48) +
                      *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                *(int *)(in_ECX + -4 + iVar1 * 8) * 4) + 0xe64) + 8)
                      * 4);
    }
    if (iVar3 < iVar2) {
      iVar1 = in_EAX * 2 + 1;
    }
    *(undefined4 *)(in_ECX + in_EAX * 8) = *(undefined4 *)(in_ECX + iVar1 * 8);
    *(undefined4 *)(in_ECX + 4 + in_EAX * 8) = *(undefined4 *)(in_ECX + 4 + iVar1 * 8);
    in_EAX = iVar1;
  }
  if (iVar1 == param_1) {
    *(undefined4 *)(in_ECX + in_EAX * 8) = *(undefined4 *)(in_ECX + -8 + param_1 * 8);
    *(undefined4 *)(in_ECX + 4 + in_EAX * 8) = *(undefined4 *)(in_ECX + -4 + param_1 * 8);
  }
  FUN_004d6d70();
  return;
}

