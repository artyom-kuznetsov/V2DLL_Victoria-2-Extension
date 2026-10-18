// FUN_005ac100 @ 005ac100 body=[[005ac100, 005ac19e] [005ac1a2, 005ac1f4]]


void FUN_005ac100(void)

{
  int unaff_ESI;
  undefined4 *unaff_EDI;
  undefined1 *local_40;
  uint local_3c;
  undefined1 *local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  local_3c = 0;
  local_40 = &DAT_00ded94d;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350();
  local_38 = (undefined1 *)&local_40;
  local_c = 0;
  local_40 = *(undefined1 **)(unaff_ESI + 0x90);
  local_3c = *(undefined4 *)(unaff_ESI + 0x94);
  FUN_006a7ed0(unaff_EDI,*(undefined4 *)(unaff_ESI + 0x20),unaff_ESI + 0x24,
               *(undefined4 *)(unaff_ESI + 0x54),local_34,0,*(undefined4 *)(unaff_ESI + 0x34),
               *(undefined4 *)(unaff_ESI + 0x38),*(undefined4 *)(unaff_ESI + 0x3c),
               *(undefined4 *)(unaff_ESI + 0x40));
  if (0xf < local_20) {
    local_3c = local_34[0];
                    /* WARNING: Subroutine does not return */
    local_40 = &UNK_005ac19f;
    FUN_00aae91b();
  }
  *unaff_EDI = CFunctionMessage<CProvince>::vftable;
  unaff_EDI[0x20] = *(undefined4 *)(unaff_ESI + 0x80);
  unaff_EDI[0x22] = *(undefined4 *)(unaff_ESI + 0x88);
  unaff_EDI[0x23] = *(undefined4 *)(unaff_ESI + 0x8c);
  unaff_EDI[0x24] = *(undefined4 *)(unaff_ESI + 0x90);
  unaff_EDI[0x25] = *(undefined4 *)(unaff_ESI + 0x94);
  ExceptionList = local_14;
  return;
}

