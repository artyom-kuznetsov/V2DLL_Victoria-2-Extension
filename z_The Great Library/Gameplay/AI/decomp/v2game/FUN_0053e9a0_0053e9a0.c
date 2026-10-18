// FUN_0053e9a0 @ 0053e9a0 body=[[0053e9a0, 0053eaa1]]


void FUN_0053e9a0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar3 = DAT_00f0973c;
  piVar1 = *(int **)(unaff_ESI + 0xa0);
  uVar2 = *(uint *)(*piVar1 + 0x48 + DAT_00f0973c * 8);
  __alldiv(uVar2 << 0xf,*(int *)(*piVar1 + 0x4c + DAT_00f0973c * 8) << 0xf | uVar2 >> 0x11,
           DAT_00f0aac8,DAT_00f0aacc);
  uVar2 = *(uint *)(piVar1[1] + 0x48 + iVar3 * 8);
  __alldiv(uVar2 << 0xf,*(int *)(piVar1[1] + 0x4c + iVar3 * 8) << 0xf | uVar2 >> 0x11,DAT_00f0aac8,
           DAT_00f0aacc);
  uVar2 = *(uint *)(piVar1[2] + 0x48 + iVar3 * 8);
  __alldiv(uVar2 << 0xf,*(int *)(piVar1[2] + 0x4c + iVar3 * 8) << 0xf | uVar2 >> 0x11,DAT_00f0aac8,
           DAT_00f0aacc);
  if (*(char *)(unaff_ESI + 0x12d0) == '\0') {
    iVar3 = 3;
  }
  else if (*(char *)(unaff_ESI + 0x31) == '\0') {
    iVar3 = (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000 < *(int *)(unaff_ESI + 0x1404)) +
            1;
  }
  else {
    iVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0053ea9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_0053eb20)[iVar3])();
  return;
}

