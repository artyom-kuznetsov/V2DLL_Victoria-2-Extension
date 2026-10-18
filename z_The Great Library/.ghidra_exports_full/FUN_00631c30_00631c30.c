// FUN_00631c30 @ 00631c30 body=[[00631c30, 00631cc3]]


void FUN_00631c30(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_EDI;
  
  if (in_EAX <= param_1) {
    *(int *)(unaff_EDI + in_EAX * 4) = *param_2;
    return;
  }
  while( true ) {
    iVar2 = (in_EAX + -1) / 2;
    iVar1 = *(int *)(unaff_EDI + iVar2 * 4);
    if ((((iVar1 != param_3) || (*param_2 == param_3)) &&
        ((*(int *)(*(int *)(iVar1 + 0x156c) + 0x14) != *(int *)(param_3 + 0x20) ||
         (*(int *)(*(int *)(*param_2 + 0x156c) + 0x14) == *(int *)(param_3 + 0x20))))) &&
       (*(int *)(*(int *)(*param_2 + 0x156c) + 0xc) <= *(int *)(*(int *)(iVar1 + 0x156c) + 0xc)))
    break;
    *(int *)(unaff_EDI + in_EAX * 4) = iVar1;
    in_EAX = iVar2;
    if (iVar2 <= param_1) {
      *(int *)(unaff_EDI + iVar2 * 4) = *param_2;
      return;
    }
  }
  *(int *)(unaff_EDI + in_EAX * 4) = *param_2;
  return;
}

