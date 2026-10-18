// FUN_0055a2e0 @ 0055a2e0 body=[[0055a2e0, 0055a36c]]


void FUN_0055a2e0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int unaff_EDI;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  int *local_8;
  
  if (param_1 <= param_2) {
    *(undefined4 *)(unaff_EDI + param_1 * 4) = *param_3;
    return;
  }
  do {
    iVar2 = (param_1 + -1) / 2;
    local_8 = (int *)FUN_004468a0(local_c);
    piVar1 = (int *)FUN_004468a0(local_10);
    if (*piVar1 <= *local_8) {
      *(undefined4 *)(unaff_EDI + param_1 * 4) = *param_3;
      return;
    }
    *(undefined4 *)(unaff_EDI + param_1 * 4) = *(undefined4 *)(unaff_EDI + iVar2 * 4);
    param_1 = iVar2;
  } while (param_2 < iVar2);
  *(undefined4 *)(unaff_EDI + iVar2 * 4) = *param_3;
  return;
}

