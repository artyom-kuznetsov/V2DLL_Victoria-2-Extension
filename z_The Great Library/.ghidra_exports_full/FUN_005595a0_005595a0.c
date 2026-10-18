// FUN_005595a0 @ 005595a0 body=[[005595a0, 00559633]]


void FUN_005595a0(int param_1)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  
  while( true ) {
    iVar1 = in_EAX * 2 + 2;
    if (param_1 <= iVar1) break;
    if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 4 + iVar1 * 8) * 4) +
                0x1410) <
        *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + -4 + iVar1 * 8) * 4) +
                0x1410)) {
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
  FUN_0055a250();
  return;
}

