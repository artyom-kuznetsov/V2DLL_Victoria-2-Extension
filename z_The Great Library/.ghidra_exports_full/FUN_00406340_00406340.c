// FUN_00406340 @ 00406340 body=[[00406340, 004063aa]]


void FUN_00406340(int param_1)

{
  undefined1 *in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  iVar2 = 0;
  iVar1 = *(int *)(unaff_EDI + 0x14) - *(int *)(unaff_EDI + 0x10) >> 2;
  if (0 < iVar1) {
    piVar3 = *(int **)(unaff_EDI + 0x10);
    do {
      if (*piVar3 == param_1) {
        iVar1 = *(int *)(*(int *)(unaff_EDI + 0x30) + iVar2 * 4);
        if (iVar1 != 0) {
          FUN_00401580(iVar1);
          return;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  *(undefined4 *)(in_EAX + 0x14) = 0xf;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *in_EAX = 0;
  FUN_00409350(&DAT_00ded94d,0);
  return;
}

