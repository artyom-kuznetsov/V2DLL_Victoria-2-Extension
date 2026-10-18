// FUN_00691970 @ 00691970 body=[[00691970, 00691989] [00691990, 006919fd]]


void FUN_00691970(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  if (in_EAX <= param_2) {
    *(int *)(param_1 + in_EAX * 4) = *param_3;
    return;
  }
  do {
    iVar2 = (in_EAX + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    if (*(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0) <=
        *(int *)(*(int *)(*param_3 + 0xbcc) + 0x28c) + *(int *)(*param_3 + 0xea0)) {
      *(int *)(param_1 + in_EAX * 4) = *param_3;
      return;
    }
    *(int *)(param_1 + in_EAX * 4) = iVar1;
    in_EAX = iVar2;
  } while (param_2 < iVar2);
  *(int *)(param_1 + iVar2 * 4) = *param_3;
  return;
}

