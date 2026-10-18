// FUN_0057b2f0 @ 0057b2f0 body=[[0057b2f0, 0057b336]]


void FUN_0057b2f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  undefined4 *in_EDX;
  
  if (param_1 != in_EDX) {
    puVar2 = param_1 + 2;
    do {
      if (in_EAX != (undefined4 *)0x0) {
        in_EAX[1] = puVar2[-1];
        *in_EAX = CUnitAdjuster::vftable;
        in_EAX[2] = *puVar2;
        in_EAX[3] = puVar2[1];
        in_EAX[4] = puVar2[2];
        in_EAX[5] = puVar2[3];
      }
      puVar1 = puVar2 + 4;
      in_EAX = in_EAX + 6;
      puVar2 = puVar2 + 6;
    } while (puVar1 != in_EDX);
  }
  return;
}

