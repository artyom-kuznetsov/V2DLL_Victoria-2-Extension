// FUN_00979510 @ 00979510 body=[[00979510, 00979546]]


void FUN_00979510(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int unaff_EDI;
  
  iVar3 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10) & 0xfffffff8U)) {
    do {
      iVar1 = *(int *)(unaff_EDI + 0x10);
      iVar2 = *(int *)(in_ECX + 0x10);
      *(undefined4 *)(iVar2 + iVar3 * 8) = *(undefined4 *)(iVar1 + iVar3 * 8);
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10) >> 3);
  }
  return;
}

