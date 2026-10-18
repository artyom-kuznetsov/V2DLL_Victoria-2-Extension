// thunk_FUN_007d9930 @ 007ebb70 body=[[007ebb70, 007ebb74]]


void thunk_FUN_007d9930(void)

{
  undefined4 *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0x4c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x47]);
  }
  unaff_ESI[0x4c] = 0xf;
  unaff_ESI[0x4b] = 0;
  *(undefined1 *)(unaff_ESI + 0x47) = 0;
  if (0xf < (uint)unaff_ESI[0x45]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x40]);
  }
  unaff_ESI[0x44] = 0;
  unaff_ESI[0x45] = 0xf;
  *(undefined1 *)(unaff_ESI + 0x40) = 0;
  *unaff_ESI = C3dObject::vftable;
  FUN_009f8f70();
  return;
}

