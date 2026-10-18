// FUN_00456490 @ 00456490 body=[[00456490, 00456518]]


void FUN_00456490(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 *unaff_ESI;
  undefined **local_14 [3];
  char *local_8;
  
  *unaff_ESI = CNavalDistanceTracker::vftable;
  unaff_ESI[1] = in_EAX;
  unaff_ESI[4] = 0;
  iVar1 = FUN_00aae9af(0x24);
  if (iVar1 != 0) {
    unaff_ESI[3] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(unaff_ESI[3] + 4) = unaff_ESI[3];
    *(undefined4 *)(unaff_ESI[3] + 8) = unaff_ESI[3];
    *(undefined1 *)(unaff_ESI[3] + 0x20) = 1;
    *(undefined1 *)(unaff_ESI[3] + 0x21) = 1;
    *unaff_ESI = CColonialDistanceTracker::vftable;
    unaff_ESI[6] = 0;
    unaff_ESI[7] = 0;
    unaff_ESI[8] = 0;
    *(undefined2 *)(unaff_ESI + 10) = 0x101;
    unaff_ESI[0xb] = CColonialPathFind::vftable;
    return;
  }
  local_8 = (char *)0x0;
  std::exception::exception((exception *)local_14,&local_8);
  local_14[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_00e6fb20);
}

