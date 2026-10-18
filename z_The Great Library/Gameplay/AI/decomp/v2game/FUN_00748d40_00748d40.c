// FUN_00748d40 @ 00748d40 body=[[00748d40, 00748d8b]]


void FUN_00748d40(void)

{
  int iVar1;
  int *unaff_EDI;
  
  iVar1 = unaff_EDI[0x16];
  if (*(int *)(iVar1 + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(iVar1 + 4) + 0x18) + 0x38))();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0x2d2d2d;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  (**(code **)(*(int *)(*unaff_EDI + 0x18) + 0x38))();
  return;
}

