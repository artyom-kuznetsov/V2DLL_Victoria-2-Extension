// FUN_00859dd0 @ 00859dd0 body=[[00859dd0, 00859e5a]]


void FUN_00859dd0(void)

{
  int *piVar1;
  int unaff_ESI;
  
  if (*(int **)(unaff_ESI + 0x144) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_ESI + 0x144) + 0x1a8))();
  }
  FUN_00859ef0(&LAB_0085a140);
  if (*(int *)(unaff_ESI + 0x144) == 0) {
    if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0xc4) * 4) + 0x208) != 0
       ) {
      piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                          *(int *)(unaff_ESI + 0xc4) * 4) + 0x208) + 0x38);
      if ((char)piVar1[0xf] != '\0') {
        (**(code **)(*piVar1 + 0x1a8))();
      }
    }
  }
  return;
}

