// FUN_0042d5c0 @ 0042d5c0 body=[[0042d5c0, 0042d649]]


void FUN_0042d5c0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  int local_c;
  int local_8;
  
  while (param_2 < in_EAX) {
    iVar2 = (in_EAX + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar2 * 8);
    FUN_00425f80(&local_8);
    FUN_00425f80(&local_c);
    if (local_8 <= local_c) break;
    *(undefined4 *)(param_1 + in_EAX * 8) = *puVar1;
    *(undefined4 *)(param_1 + 4 + in_EAX * 8) = puVar1[1];
    in_EAX = iVar2;
  }
  *(undefined4 *)(param_1 + in_EAX * 8) = *param_3;
  *(undefined4 *)(param_1 + 4 + in_EAX * 8) = param_3[1];
  return;
}

