// FUN_00694c20 @ 00694c20 body=[[00694c20, 00694c85] [00694c89, 00694c99]]


void FUN_00694c20(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = CIngameLobby::vftable;
  in_EAX[0xc] = CIngameLobby::vftable;
  in_EAX[0x4e] = CButtonObserver::vftable;
  in_EAX[0x3a] = CButtonObserver::vftable;
  FUN_004097a0(in_EAX + 0x31);
  in_EAX[0x1c] = CButtonObserver::vftable;
  in_EAX[0x14] = CTextBufferObserver::vftable;
  in_EAX[0x10] = CChatMessageObserver::vftable;
  in_EAX[0xc] = CSessionInfoObserver::vftable;
  *in_EAX = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if (0xf < (uint)in_EAX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_EAX[5]);
  }
  in_EAX[10] = 0xf;
  in_EAX[9] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  return;
}

