// FUN_005cdc70 @ 005cdc70 body=[[005cdc70, 005cdd18]]


void FUN_005cdc70(undefined4 param_1)

{
  int unaff_ESI;
  
  FUN_004f9ca0(unaff_ESI + 0x114);
  FUN_00408ed0(param_1,0,0xffffffff);
  FUN_004f9be0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0xc4) * 4),
               unaff_ESI + 0x114);
  if (*(char *)(unaff_ESI + 4) != '\0') {
    DAT_012588e4 = 1;
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa0))();
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x88))();
    DAT_012588e4 = 0;
  }
  return;
}

