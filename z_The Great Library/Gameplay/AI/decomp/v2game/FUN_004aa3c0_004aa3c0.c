// FUN_004aa3c0 @ 004aa3c0 body=[[004aa3c0, 004aa414]]


void FUN_004aa3c0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  
  uVar3 = *(int *)(DAT_012587e4 + 8) - *(int *)(DAT_012587e4 + 4) >> 2;
  if (*(int *)(in_ECX + 0x174) != 0) {
    FUN_00aaea59(*(int *)(in_ECX + 0x174));
  }
  lVar1 = (ulonglong)uVar3 * 4;
  uVar2 = FUN_00aad56b(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  *(uint *)(in_ECX + 0x178) = uVar3;
  *(undefined4 *)(in_ECX + 0x174) = uVar2;
  FUN_004b8aa0();
  return;
}

