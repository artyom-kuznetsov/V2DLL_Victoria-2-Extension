// FUN_00ab4d92 @ 00ab4d92 body=[[00ab4d92, 00ab4e07]]


undefined1 FUN_00ab4d92(int param_1)

{
  int extraout_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  int local_10;
  int local_c;
  undefined1 local_5;
  
  local_10 = 0;
  if (unaff_EDI == (int *)0x0) {
    _inconsistency();
    terminate();
    local_10 = extraout_EAX;
  }
  local_5 = (undefined1)local_10;
  local_c = local_10;
  if (local_10 < *unaff_EDI) {
    do {
      piVar3 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
      for (iVar2 = *piVar3; piVar3 = piVar3 + 1, 0 < iVar2; iVar2 = iVar2 + -1) {
        iVar1 = ___TypeMatch(unaff_EDI[1] + local_c,*piVar3,*(undefined4 *)(param_1 + 0x1c));
        if (iVar1 != 0) {
          local_5 = 1;
          break;
        }
      }
      local_10 = local_10 + 1;
      local_c = local_c + 0x10;
    } while (local_10 < *unaff_EDI);
  }
  return local_5;
}

