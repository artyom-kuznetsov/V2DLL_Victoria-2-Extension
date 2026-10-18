// FUN_0043ee00 @ 0043ee00 body=[[0043ee00, 0043ee1b]]


void FUN_0043ee00(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = CMapIcon::vftable;
  if ((int *)unaff_ESI[4] != (int *)0x0) {
    (**(code **)(*(int *)unaff_ESI[4] + 0x50))();
    unaff_ESI[4] = 0;
  }
  return;
}

