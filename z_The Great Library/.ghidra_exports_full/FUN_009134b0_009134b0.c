// FUN_009134b0 @ 009134b0 body=[[009134b0, 00913507]]


void FUN_009134b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[2] = param_2;
  unaff_ESI[5] = param_5;
  unaff_ESI[6] = param_1;
  unaff_ESI[7] = param_1;
  unaff_ESI[1] = 0x18d;
  unaff_ESI[3] = param_3;
  unaff_ESI[4] = param_4;
  *(undefined1 *)(unaff_ESI + 8) = 0;
  unaff_ESI[9] = 0;
  *unaff_ESI = CWarGoalBaseAction::vftable;
  FUN_0094bd40();
  *unaff_ESI = CDeclareWarAction::vftable;
  *(undefined2 *)(unaff_ESI + 0x1a) = 1;
  return;
}

