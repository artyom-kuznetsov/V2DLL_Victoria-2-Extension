// FUN_00758180 @ 00758180 body=[[00758180, 007581fc]]


void FUN_00758180(void)

{
  int iVar1;
  int *unaff_ESI;
  
  (**(code **)(*(int *)(unaff_ESI[0x1c1] + 0x18) + 0x34))();
  (**(code **)(*(int *)unaff_ESI[0x1c1] + 0x70))();
  (**(code **)(*(int *)(unaff_ESI[0x1c2] + 0x18) + 0x38))();
  iVar1 = (**(code **)(*unaff_ESI + 0x6c))();
  *(undefined1 *)(iVar1 + 0x356) = 1;
  iVar1 = (**(code **)(*unaff_ESI + 0x6c))();
  if (*(char *)(iVar1 + 0x356) == '\0') {
    *(undefined4 *)(iVar1 + 0x334) = 0;
    *(undefined4 *)(iVar1 + 0x338) = 0;
    *(undefined4 *)(iVar1 + 0x33c) = *(undefined4 *)(iVar1 + 0x334);
    *(undefined4 *)(iVar1 + 0x340) = *(undefined4 *)(iVar1 + 0x338);
  }
  return;
}

