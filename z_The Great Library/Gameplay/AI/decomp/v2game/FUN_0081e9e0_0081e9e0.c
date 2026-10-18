// FUN_0081e9e0 @ 0081e9e0  (requested 0081EA00, first bytes: 55 8B EC 83 EC 0C 8B 46)


void FUN_0081e9e0(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  
  uVar1 = *(undefined4 *)(unaff_ESI + 0x30);
  if (((((char)uVar1 != 'R') || ((char)((uint)uVar1 >> 8) != 'E')) ||
      ((char)((uint)uVar1 >> 0x10) != 'B')) &&
     (iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x34) * 4),
     0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU))) {
    FUN_00821510();
    FUN_005dcac0();
    (**(code **)(**(int **)(unaff_ESI + 0x38) + 0x24))();
    FUN_005dcb70();
    FUN_00820df0(unaff_ESI);
    FUN_0081f3b0(unaff_ESI);
    if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x34) * 4) + 3000) ==
        '\0') {
      FUN_0081fb00(unaff_ESI);
      FUN_00820760(unaff_ESI);
    }
    FUN_0081e5b0(unaff_ESI);
    FUN_0081e280(unaff_ESI);
    FUN_00821190();
  }
  return;
}

