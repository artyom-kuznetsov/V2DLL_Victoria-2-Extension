// FUN_00618a80 @ 00618a80 body=[[00618a80, 00618b5e]]


void FUN_00618a80(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b458e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CGunboatDialog::vftable;
  local_8 = 0;
  if ((undefined4 *)in_ECX[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1b])(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x1c];
  for (piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4)
                         + 0xce4); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    if ((undefined4 *)*piVar2 == puVar1) {
      piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                        0xce4);
      if (piVar2 == (int *)0x0) goto LAB_00618b2b;
      goto LAB_00618b20;
    }
  }
  goto LAB_00618b40;
  while (piVar2 = (int *)piVar2[2], piVar2 != (int *)0x0) {
LAB_00618b20:
    if ((undefined4 *)*piVar2 == puVar1) break;
  }
LAB_00618b2b:
  FUN_005f2ae0(piVar2);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
LAB_00618b40:
  local_8 = 0xffffffff;
  FUN_00640880();
  ExceptionList = local_10;
  return;
}

