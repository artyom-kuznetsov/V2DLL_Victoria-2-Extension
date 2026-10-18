// FUN_00631520 @ 00631520 body=[[00631520, 006315ee]]


void FUN_00631520(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  
  iVar1 = *param_1;
  iVar2 = *unaff_ESI;
  if ((((iVar2 == param_3) && (iVar1 != param_3)) ||
      ((*(int *)(*(int *)(iVar2 + 0x156c) + 0x14) == *(int *)(param_3 + 0x20) &&
       (*(int *)(*(int *)(iVar1 + 0x156c) + 0x14) != *(int *)(param_3 + 0x20))))) ||
     (*(int *)(*(int *)(iVar2 + 0x156c) + 0xc) < *(int *)(*(int *)(iVar1 + 0x156c) + 0xc))) {
    *unaff_ESI = iVar1;
    *param_1 = iVar2;
  }
  iVar1 = *param_2;
  iVar2 = *unaff_ESI;
  if (((iVar1 == param_3) && (iVar2 != param_3)) ||
     (((*(int *)(*(int *)(iVar1 + 0x156c) + 0x14) == *(int *)(param_3 + 0x20) &&
       (*(int *)(*(int *)(iVar2 + 0x156c) + 0x14) != *(int *)(param_3 + 0x20))) ||
      (*(int *)(*(int *)(iVar1 + 0x156c) + 0xc) < *(int *)(*(int *)(iVar2 + 0x156c) + 0xc))))) {
    *param_2 = iVar2;
    *unaff_ESI = iVar1;
  }
  iVar1 = *unaff_ESI;
  iVar2 = *param_1;
  if ((iVar1 != param_3) || (iVar2 == param_3)) {
    if (((*(int *)(*(int *)(iVar1 + 0x156c) + 0x14) != *(int *)(param_3 + 0x20)) ||
        (*(int *)(*(int *)(iVar2 + 0x156c) + 0x14) == *(int *)(param_3 + 0x20))) &&
       (*(int *)(*(int *)(iVar2 + 0x156c) + 0xc) <= *(int *)(*(int *)(iVar1 + 0x156c) + 0xc))) {
      return;
    }
  }
  *unaff_ESI = iVar2;
  *param_1 = iVar1;
  return;
}

