// FUN_0055a250 @ 0055a250 body=[[0055a250, 0055a26c] [0055a270, 0055a2d2]]


void FUN_0055a250(int param_1,undefined4 *param_2)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  
  while ((param_1 < in_EAX &&
         (iVar1 = (in_EAX + -1) / 2,
         *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 4 + iVar1 * 8) * 4) +
                 0x1410) < *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4) + 0x1410))
         )) {
    *(undefined4 *)(in_ECX + in_EAX * 8) = *(undefined4 *)(in_ECX + iVar1 * 8);
    *(undefined4 *)(in_ECX + 4 + in_EAX * 8) = *(undefined4 *)(in_ECX + 4 + iVar1 * 8);
    in_EAX = iVar1;
  }
  *(undefined4 *)(in_ECX + in_EAX * 8) = *param_2;
  *(undefined4 *)(in_ECX + 4 + in_EAX * 8) = param_2[1];
  return;
}

