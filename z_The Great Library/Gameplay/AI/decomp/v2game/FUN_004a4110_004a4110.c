// FUN_004a4110 @ 004a4110 body=[[004a4110, 004a414b]]


void FUN_004a4110(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  undefined4 *in_EDX;
  
  if (param_1 != in_EDX) {
    puVar2 = param_1 + 3;
    do {
      if (in_EAX != (undefined4 *)0x0) {
        in_EAX[1] = 0x18d;
        *in_EAX = CMapPoint::vftable;
        in_EAX[2] = puVar2[-1];
        in_EAX[3] = *puVar2;
      }
      puVar1 = puVar2 + 1;
      in_EAX = in_EAX + 4;
      puVar2 = puVar2 + 4;
    } while (puVar1 != in_EDX);
  }
  return;
}

