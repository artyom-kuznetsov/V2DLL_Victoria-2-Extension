// FUN_005cc390 @ 005cc390 body=[[005cc390, 005cc3d3]]


uint FUN_005cc390(void)

{
  uint uVar1;
  int unaff_ESI;
  undefined1 *puStack_14;
  int local_10 [3];
  
  puStack_14 = (undefined1 *)local_10;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x108) + 0x58))();
  if (*(int *)(unaff_ESI + 0xc4) != local_10[0]) {
    uVar1 = FUN_005cc2e0(&puStack_14,0);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

