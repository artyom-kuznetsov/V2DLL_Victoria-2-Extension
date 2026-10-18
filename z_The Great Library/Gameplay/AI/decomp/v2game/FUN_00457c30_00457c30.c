// FUN_00457c30 @ 00457c30 body=[[00457c30, 00457c49] [00457c50, 00457c96]]


void FUN_00457c30(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
  if (0 < iVar4) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar3 * 4);
      if (*(char *)(iVar1 + 0x84) == '\0') {
        iVar2 = __alldiv((longlong)*(int *)(iVar1 + 0x80) * (longlong)param_2,1000,0);
        *(int *)(iVar1 + 0x80) = iVar2;
        if (iVar2 <= param_3) {
          *(undefined1 *)(iVar1 + 0x84) = 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}

