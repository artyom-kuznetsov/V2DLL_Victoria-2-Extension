// FUN_00927850 @ 00927850 body=[[00927850, 0092789e]]


void FUN_00927850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[2] = param_2;
  unaff_ESI[5] = param_5;
  unaff_ESI[6] = param_1;
  unaff_ESI[7] = param_1;
  *(undefined1 *)(unaff_ESI + 8) = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[1] = 0x18d;
  unaff_ESI[3] = param_3;
  unaff_ESI[4] = param_4;
  *unaff_ESI = CWarGoalBaseAction::vftable;
  FUN_0094bd40();
  *unaff_ESI = CCrisisOfferAction::vftable;
  return;
}

