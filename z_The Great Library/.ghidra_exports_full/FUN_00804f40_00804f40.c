// FUN_00804f40 @ 00804f40 body=[[00804f40, 00804f5e] [00804f62, 00804f76] [00804f7a, 00804f91]]


void FUN_00804f40(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  
  if (in_EAX != param_1) {
    puVar2 = in_EAX + 7;
    do {
      if (puVar2[-2] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-2]);
      }
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      if (puVar2[-6] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-6]);
      }
      puVar2[-6] = 0;
      puVar2[-5] = 0;
      puVar2[-4] = 0;
      puVar1 = puVar2 + 2;
      puVar2 = puVar2 + 9;
    } while (puVar1 != param_1);
  }
  return;
}

