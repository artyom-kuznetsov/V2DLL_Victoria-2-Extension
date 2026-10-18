// FUN_005eda00 @ 005eda00 body=[[005eda00, 005eda34]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005eda00(void)

{
  undefined4 *in_EAX;
  
  _DAT_012588d0 = _DAT_012588d0 + 1;
  in_EAX[1] = 0x18d;
  *in_EAX = CHistoryContainer::vftable;
  in_EAX[2] = 43800000;
  in_EAX[2] = DAT_01259abc;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  *(undefined1 *)(in_EAX + 6) = 0;
  in_EAX[7] = 0;
  return;
}

