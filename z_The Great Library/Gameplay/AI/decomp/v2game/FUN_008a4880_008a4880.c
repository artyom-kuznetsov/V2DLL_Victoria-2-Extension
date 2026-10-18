// FUN_008a4880 @ 008a4880 body=[[008a4880, 008a48fc]]


void FUN_008a4880(int param_1)

{
  undefined4 in_EAX;
  int iVar1;
  int unaff_EDI;
  
  iVar1 = FUN_008a4900(in_EAX);
  if ((*(char *)(iVar1 + 0x131) == '\0') ||
     (iVar1 = *(int *)(*(int *)(unaff_EDI + 0x118) + *(int *)(iVar1 + 0x134) * 4), iVar1 == 0)) {
    FUN_004b6120(1000,1);
  }
  else if (*(int *)(iVar1 + 0x20) / 1000 < param_1) {
    FUN_004b6120(*(int *)(iVar1 + 0x10) + 1000,1);
    return;
  }
  return;
}

