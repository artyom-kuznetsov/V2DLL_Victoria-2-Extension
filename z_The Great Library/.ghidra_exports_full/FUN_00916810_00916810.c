// FUN_00916810 @ 00916810 body=[[00916810, 0091683a]]


undefined4 * FUN_00916810(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00aae9af(0x68);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00913320();
    *puVar1 = CAddWarGoalAction::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

