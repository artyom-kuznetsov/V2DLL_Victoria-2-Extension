// FUN_00916020 @ 00916020 body=[[00916020, 00916079]]


void FUN_00916020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  uVar1 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  unaff_ESI[6] = uVar1;
  unaff_ESI[7] = uVar1;
  unaff_ESI[2] = param_1;
  unaff_ESI[3] = param_2;
  *(undefined1 *)(unaff_ESI + 8) = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[1] = 0x18d;
  unaff_ESI[4] = param_3;
  unaff_ESI[5] = param_4;
  *unaff_ESI = CWarGoalBaseAction::vftable;
  FUN_0094bd40();
  *unaff_ESI = CAddWarGoalAction::vftable;
  return;
}

