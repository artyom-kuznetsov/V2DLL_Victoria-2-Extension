// FUN_00645fd0 @ 00645fd0 body=[[00645fd0, 00646058]]


undefined4 FUN_00645fd0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)FUN_00456b90();
  if (*piVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00456b90();
    (**(code **)(*(int *)*puVar2 + 0x38))();
    FUN_009962f0(DAT_012588dc + 0x1948);
    FUN_00646060(&local_c,&stack0x00000008);
    FUN_00445600(local_c,local_8);
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
    return 1;
  }
  return 0;
}

