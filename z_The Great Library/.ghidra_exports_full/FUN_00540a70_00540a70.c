// FUN_00540a70 @ 00540a70 body=[[00540a70, 00540ac3]]


void FUN_00540a70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00aae9af(0x58);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_2;
    puVar1[1] = 0x18d;
    *puVar1 = CDelayedEvent::vftable;
    FUN_008a88d0();
    puVar1[0x15] = param_4;
  }
  FUN_0068f390();
  return;
}

